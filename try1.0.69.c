/*known issues:
spelling needs to be checked (most times I write this program I'm too tired to do other stuff)
unknown update issues (new implemented code needs to be checked)

New features to add:
story, character development, classes
bar zone (some eroge, gambling,more than 1 enemy in brawl)
become outlaw ?
add survival stats ( stamina...)(running low on one removes your health etc)
dungeon zone (complete quests)
temple zone (learn skills, chance to get high difficulty quests)
"random" biomes ?
guild zone (quests, reputation, possibility to recruit party member(with enough reputation, higher rep higher stats))
add more zones, items, npcs for party, quests, monsters etc
(add a plot, need someone to make a story but player not forced to play the story)
(events happen while player is out ??? such as no items in shop)

It will be a lot of work already, most of things I can already do them, others I need to search*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#define SIZE 999

int main(void)
{
	#include "variables.h"


	/*game starts here*/
	for(;;){

	system("color f1");

    Sleep(500);
    printf("this is the menu\n");
    Sleep(500);
    printf("you can chose to start a new game, load a previously started game, or exit\n");
	Sleep(1500);
	printf("you need to type something like \"start game\" or \"load game\" hope you get it\n");
	printf("NOTE:game uses strings cause they are easier and safer than numbers, if there isn't a number near an option you need to\nwrite down that option\n");
    printf("CREDITS: Thanks for testing it, really helps a lot\nYou can contribute in anyway you can\nYou can rip and rap the code\n");
    printf("and that's all i would say\n");
    fgets(menu_con, sizeof(menu_con), stdin);

    switch(menu_con[0]){

	case 's':

	printf("LOADING");
	for(a=0;a<=7;a++){
	Sleep(400);
	printf(" \b\b");
	Sleep(400);
	}

    #include "intro.h"

    #include "stats_setup.h"

    #include "class_selection.h"

    #include "save.h"

    #include "encryption.h"

    LOAD:
    system("cls");
    for(;;){
    clock_t begin = clock();
    Sleep(500);
	printf("decide where to go\n");
	printf(" shop\n arena\n dungeon\n bar\n temple\n status\n go home\n exit game\n");
	printf("enter the name of the thing\n");
	fgets(main_con,sizeof (main_con),stdin);

	/*main switch to select area*/

    /*shop*/

	if(strstr(main_con, "shop")){

			#include "shop.h"
	}

	/*arena*/

    else if(strstr(main_con, "arena")){
			#include "arena.h"
    }

    /*dungeon*/

	else if(strstr(main_con,"dungeon")){
			#include "dungeon.h"
	}

	/*bar*/

	else if(strstr(main_con,"bar")){
			#include "bar.h"
	}

	/*temple*/

	else if(strstr(main_con,"temple")){
        #include "temple.h"
	}

	else if(strstr(main_con,"status")){
        printf("your name is %syour age is %d\n",player_name,player_age);
        printf("your class is %s",player_class);
        printf("your current stats are:\n strength:%d\n luck:%d\n charisma:%d\n intelligence:%d\n dexterity:%d\n",strength,luck,charisma,intelligence,dexterity);
        printf(" xp:%2.1f\n lv:%2.1f\n hp:%2.1f\n gold:%2.1f\n",xp,lv,hp,gold);
        printf(" hunger meter: %d\n water meter: %d\n",food_con,water_con);
        printf("weapon equipped: %s",wp_con);
        printf("armour equipped: %s",armour_con);
        Sleep(1500);
	}

	else if(strstr(main_con,"go home")){
        #include "home.h"
	}
		//will probably add more options here
        /*exit game*/

	else if(strstr(main_con,"exit game")){
    		printf("hope you had fun!\n");
        	printf("Cyaaaaaaa!\n");
        	return 0;
	}

	/*player didn't enter one of the previous cases*/

	else
        printf("don't be a pain in the ass! enter one of those cases!\n");

    if(hp<=0.){
        if(strstr(perma_death,"yes") || strstr(perma_death,"Yes"))
        rm=remove("try1.bin");
        break;
        }

    clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	/*day control*/

	#include "day_control.h"

	if(day_count==year){
        player_age+=1;
        day_count=0;
        printf("a year has passed, your age is now %d\n",player_age);
	}

	if(water_con<=0 || food_con<=0){
        if(food_con<=0){
            hp -=10;
            printf("you are starving, you lose %d hp (current hp:%2.1f)\n",10,hp);
        }
        if(water_con<=0){
            hp -=10;
            printf("you are thirsty, you lose %d hp (current hp:%2.1f)\n",10,hp);
        }
        if(hp<=0.){
            printf("too bad you died! thanks for playing!\n");
            printf("and sorry for deleting your save (lenny face(can't print it lol))\n");
            if(strstr(perma_death,"yes") || strstr(perma_death,"Yes"))
            rm=remove("try1.bin");
            Sleep(3000);
            break;
        }
	}

    }
	break;

	case 'l':

		#include "loading.h"

    case 'e':
        printf("Cyaaa!\n");
        return 0;
    case 'b':
        #include "patron.h"
        break;
	default:
		printf("you didn't enter one of the above\n");
}
}
}

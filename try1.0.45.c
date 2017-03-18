/*known issues:
enemy attack random (unkown if it varies between how long it takes to enter the number)
spelling needs to be checked (most times I write this program I'm too tired to do other stuff)
unknow update issues (new implemented code needs to be checked)

New features to add:
story inspired by dune, character development, spending points restore xp multiplayer, classses
bar zone (some eroge, gambling,random bets,more than 1 enemy in brawl)
add survival stats (food, water, stamina...)(running low on one removes your health etc)
dungeon zone (less enemies but stronger, chance to find item, complete quests)
temple zone (learn skills, chance to get high difficulty quests, (saves???) )
guild zone (quests, reputition, possibility to recruit party member(with enough reputition, higher rep higher stats))
add more zones, items, npcs for party, quests, monters etc
(save data encrypted so that it can't be hacked ???)
(add a plot, need someone to make a story but player not forced to play the story)
(events happen while player is out ??? such as no items in shop, no quests)

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
	printf("you need to type something like \"start game\" or \"load game\"\n");
    fgets(menu_con, sizeof(menu_con), stdin);

    switch(menu_con[0]){

	case 's':

	printf("LOADING");
	for(a=0;a<=7;a++){
	Sleep(500);
	printf(" \b\b");
	Sleep(500);
	}

    #include "intro.h"

    #include "stats.h"

    #include "class_selection.h"

    #include "save.h"

    LOAD:
    for(;;){
    clock_t begin = clock();
    Sleep(500);
	printf("decide where to go\n");
	printf(" 1:shop\n 2:arena\n 3:dungeon\n 4:bar\n 5:exit game\n");
	printf("enter either 1,2,3,4 or 5\n");
	scanf("%d",&switch_con);

	/*check if it's a number otherwise sends to START*/

	fflush(stdout);
  	if (fgets(buffer, sizeof buffer, stdin))
	  	{
    		long value;
    		char *check;
    		value = strtol(buffer, &check, 0);
    		if (!isspace(*check) && *check != 0)
    		{
      		printf("you didn't enter a number! Dumbass!\n");
    		break;
			}
  		}

	/*main switch to select area*/

	switch(switch_con){

	/*shop*/

	case 1 :
			#include "shop.h"
			break;

	/*arena*/

	case 2 :
			#include "arena.h"
    		break;

    /*dungeon*/

	case 3 :
			#include "dungeon.h"
    		break;

	/*bar*/

	case 4:
			#include "bar.h"
			break;

		//will probably add more cases here
        /*exit game*/

	case 5 :
    		printf("hope you had fun!\n");
        	printf("Cyaaaaaaa!\n");
        	return 0;

	/*player didn't enter one of the previous cases*/

	default :
        	printf("don't be a pain in the ass! enter one of those numbers!\n");
        	break;
    }
    clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	/*day control*/

	#include "day_control.h"

	}
	return 0;

	case 'l':
		#include "loading.h"

	default:
		printf("you didn't enter one of the above\n");
		break;
}
}
}

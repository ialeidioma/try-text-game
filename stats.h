/*stats*/
	do{
	printf("you have %d points to allocate to your different stats\n",stats_count);
	printf("your current stats are:\n strenght:%d\n luck:%d\n charisma:%d\n intelligence:%d\n dexterity:%d\n",strenght,luck,charisma,intelligence,dexterity);
	printf("type \"allocate strenght 2\" or \"allocate defense 3\" i hope you get it lol\n");
	fgets(stats_con,sizeof (stats_con),stdin);

	if(strenght<5 && stats_con[9]=='s'){
		#include "strenght_setup.h"
		}
	else if(dexterity<5 && stats_con[9]=='d' && stats_con[11]=='x'){
		#include "dexterity_setup.h"
	}
	else if(intelligence <5 && stats_con[9]=='i'){
		#include "intelligence_setup.h"
	}
	else if(luck<5 && stats_con[9]=='l'){
		#include "luck_setup.h"
		}
	else if(charisma<5 && stats_con[9]=='c'){
		#include "charisma_setup.h"
		}
	else{
		printf("you can't allocate more than 6 points for this stat\n");
	}
	if(stats_count<0){
        printf("i'm sorry but i can't let that happen");
        return 0;
	}
	}while(stats_count!=0);

	printf("you've allocated all current available points\n");
	Sleep(2000);
	printf("they don't do anything for now lol\n");
	Sleep(2000);

/*stats*/
	printf("you have %d points to allocate to your different stats\n",stats_count);
	do{
	printf("your current stats are:\n strenght:%d\n defense:%d\n luck:%d\n charisma:%d\n",strenght,defense,luck,charisma);
	printf("type \"allocate strenght 2\" or \"allocate defense 3\" i hope you get it lol\n");
	gets(stats_con);
	
	if(strenght<5 && stats_con[9]=='s'){
		#include "strenght_setup.h"
		}
	else if(defense<5 && stats_con[9]=='d'){
		#include "defense_setup.h"
		}
	else if(luck<5 && stats_con[9]=='l'){
		#include "luck_setup.h"
		}
	else if(charisma<5 && stats_con[9]=='c'){
		#include "charisma_setup.h"
		}
	else{
		printf("you can't allocate more than 5 points for this stat\n");
	}	
	
	}while(stats_count !=0);
	
	printf("you've allocated all current available points\n");
	sleep(2);
	printf("they don't do anything for now lol\n");
	sleep(2);
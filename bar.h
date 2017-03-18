    		/*bar*/
    		if(day_con==0){
			printf("you enter the bar\n");
    		BAR:
    		printf("where do you want to head ?\n");
    		printf(" 1:adventurers' table\n 2:counter\n 3:girls' table\n 4:notice-board\n 5:receptionist\n 6:empty table\n 7:exit bar\n");
			printf("enter either 1,2,3,4,5 or 6\n");
			scanf("%d",&bar_con);

    		/*check if it's a number otherwise sends to BAR*/

		fflush(stdout);
  		if (fgets(buffer, sizeof buffer, stdin))
	  	{
    		long value;
    		char *check;
    		value = strtol(buffer, &check, 0);
    		if (!isspace(*check) && *check != 0)
    		{
      		printf("people start to eye you weirdly, well you are the weird one who stands in the door!\n");
    		goto BAR;
			}
  		}

		/*main bar switch*/

		switch(bar_con){

			/*adventurers' table*/

			case 1:
				printf("not implemented need guild system before\n");
				goto BAR;

			/*counter*/

			case 2:
				printf("the barman greets you\n");
				printf("hello lad!\n");
				for(;;){
				printf("what you want to drink ?\n");
				printf("list of drinks:\n");
				printf(" donnod\n the wagglestick\n ayaya intensified\n fizzy bubbley\n");
				printf("(type the whole name!)\n");

				/*choose drink*/

				fgets(buffer,sizeof (buffer),stdin);
				if(buffer[0]=='d' && gold>=20){
					printf("Here's your donnod, enjoy, it costs 20 gold pieces\n");
					gold -=20;
					alcohol_con += 1;
				}
				else if(buffer[0]=='t' && gold>=25){
					printf("Here's your wagglestick, enjoy, it costs 25 gold pieces\n");
					gold -=25;
					alcohol_con += 2;
				}
				else if(buffer[0]=='a' && gold>=30){
					printf("Here's your ayaya intensified, enjoy, it costs 30 gold pieces\n");
					gold -=30;
					alcohol_con += 3;
				}
				else if(buffer[0]=='f' && gold>=25){
					printf("Here's your fizzle bubbley, enjoy, it costs 35 gold pieces\n");
					gold -=35;
					alcohol_con += 5;
				}
				else{
					printf("you don't have the money or you didn't enter one of the drinks :/\n");
					goto BAR;
				}
				if(alcohol_con>=14 && alcohol_con<=20){
					if(rand()%12==0){
							#include "brawl.h"
							}
				}
				else if(alcohol_con>=21 && alcohol_con<=31){
					if(rand()%6==0){
						#include "brawl.h"
						}
				}
				else if(alcohol_con>=32 && alcohol_con<=42){
					if(rand()%4==0){
						#include "brawl.h"
						}
				}
				else if(alcohol_con>=43 && alcohol_con<=63){
					if(rand()%2==0){
						#include "brawl.h"
						}
				}
				else if(alcohol_con>=63){
						#include "brawl.h"
				}
				}


			/*girls'table*/

			case 3:
				printf("not implemented need guild system\n");
				goto BAR;

			/*notice-board*/

			case 4:
				printf("you head toward the notice-board...\n");
				if(board_con==0){
				board_con=1;
				quest_con=1;
				if(rand()%3==0){
					printf("there's a quest to kill 10 enemies in the arena\n");
					printf("the reward is 250 gold pieces\n");
					quest_conditions=10;
					reward=250;
					}
				else if(rand()%8==0){
					printf("there's a quest to kill 20 enemies in the arena\n");
					printf("the reward is 500 gold pieces\n");
					quest_conditions=20;
					reward=500;
				}
				else if(rand()%11==0){
					printf("there's a quest to kill 30 enemies in the arena\n");
					printf("the reward is 1000 gold pieces\n");
					quest_conditions=30;
					reward=1000;
				}
				else if(rand()%16==0){
					printf("there's a quest to start a brawl in the bar\n");
					printf("the reward is 1000 gold pieces\n");
					quest_conditions=1;
					reward=1000;
				}
				else{
					board_con=0;
					printf("no quests available right now...bad luck i guess\n");
				}
				printf("do you want to accept this quest ?\n");
				fgets(buffer,sizeof (buffer),stdin);

				if(buffer[0]=='y' || buffer[0]=='Y'){
					printf("you accepted the quest,when you complete it go to the receptionist...if you complete it :P\n");
					goto BAR;
				}
				else{
					printf("you didn't accept the quest...\n");
					quest_con=0;
					goto BAR;
				}
				}
				else{
					printf("you already checked the notice-board for this evening\n");
					printf("there are many other things to do!\n");
					goto BAR;
				}

			/*receptionist*/
			case 5:
				printf("a nice looking girl sits behind a counter\n");
				if(quest_con!=0 && quest_conditions==e_count){
					gold += reward;
					quest_con=0;
					e_count=0;
					printf("she greets you\n");
					printf("\"here's your reward for the quest!\"(current gold:%2.1f)\n",gold);
					goto BAR;
				}
				else{
					printf("she glances at you...\n");
					printf("please first accept a quest from the notice-board and complete it!\n");
					goto BAR;
				}

			/*empty table*/

			case 6:
				printf("not implemented\n");
				goto BAR;

			/*exit bar*/

			case 7:
				printf("you leave the bar\n");
				break;

			/*player didn't enter one of the previous cases*/

			default :
        	printf("don't be a pain in the ass! enter one of those numbers!\n");
        	goto BAR;
		}
	}
	else
		printf("the bar is closed during day...\n");

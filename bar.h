    		/*bar*/
			printf("you enter the bar\n");
    		for(;;){
    		printf("where do you want to head ?\n");
    		printf(" adventurers' table\n counter\n girls' table\n notice-board\n receptionist\n empty table\n exit bar\n");
			fgets(bar_con,sizeof(bar_con),stdin);

			/*adventurers' table*/

			if(strstr(bar_con,"adventurers' table")){
				printf("not implemented need guild system before\n");
			}

			/*counter*/
			else if(strstr(bar_con,"counter")){
			    if(day_con==0){
				printf("the barman greets you\n");
				printf("hello lad!\n");
				for(;;){
				printf("what you want to drink ?\n");
				printf("list of drinks:\n");
				printf(" donnod\n the wagglestick\n ayaya intensified\n fizzy bubbley\n leave the counter\n");
				printf("(type the whole name!)\n");

				/*choose drink*/

				fgets(buffer,sizeof (buffer),stdin);
				if(strstr(buffer,"donnod") && gold>=20){
					printf("Here's your donnod, enjoy, it costs 20 gold pieces\n");
					gold -=20;
					alcohol_con += 1;
				}
				else if(strstr(buffer,"the wagglestick") && gold>=25){
					printf("Here's your wagglestick, enjoy, it costs 25 gold pieces\n");
					gold -=25;
					alcohol_con += 2;
				}
				else if(strstr(buffer,"ayaya intensified") && gold>=30){
					printf("Here's your ayaya intensified, enjoy, it costs 30 gold pieces\n");
					gold -=30;
					alcohol_con += 3;
				}
				else if(strstr(buffer,"fizzy bubbley") && gold>=35){
					printf("Here's your fizzle bubbley, enjoy, it costs 35 gold pieces\n");
					gold -=35;
					alcohol_con += 5;
				}
				else if(strstr(buffer,"leave the counter")){
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
                else{
					printf("you head toward the door\n");
					break;
				}
				}
                else{
					printf("you don't have the money or you didn't enter one of the drinks :/\n");
					break;
				}
				}
            }
            else{
                printf("\"we don't server alcohol while the sun is still high\"\n");
            }
			}
			/*girls'table*/

			else if(strstr(bar_con,"girls' table")){
				printf("not implemented need guild system\n");
			}

			/*notice-board*/

			else if(strstr(bar_con,"notice-board")){
				printf("you head toward the notice-board...\n");
				if(on_going_quest==0){
				if(board_con==0){
				board_con=1;
				quest_con=1;
				if(rand()%3==0){
					printf("there's a quest to kill 10 enemies in the arena\n");
					printf("the reward is 250 gold pieces\n");
					e_count=0;
					quest_conditions=10;
					reward=250;
					}
				else if(rand()%8==0){
					printf("there's a quest to kill 20 enemies in the arena\n");
					printf("the reward is 500 gold pieces\n");
					e_count=0;
					quest_conditions=20;
					reward=500;
				}
				else if(rand()%11==0){
					printf("there's a quest to kill 30 enemies in the arena\n");
					printf("the reward is 1000 gold pieces\n");
					e_count=0;
					quest_conditions=30;
					reward=1000;
				}
				else if(rand()%16==0){
					printf("there's a quest to start a brawl in the bar\n");
					printf("the reward is 1000 gold pieces\n");
					e_count=0;
					quest_conditions=1;
					reward=1000;
				}
				else{
					board_con=0;
					quest_con=0;
					printf("someone took all the quest lol\n");
				}
				if(board_con!=0){
				printf("do you want to accept this quest ?\n");
				fgets(buffer,sizeof (buffer),stdin);

				if(buffer[0]=='y' || buffer[0]=='Y'){
                    on_going_quest=1;
					printf("you accepted the quest,when you complete it go to the receptionist...if you complete it :P\n");
				}
				else{
					printf("you didn't accept the quest...\n");
					quest_con=0;
				}
				}
				}
				else{
					printf("you already checked the notice-board try later!\n");
					printf("there are many other things to do!\n");
				}
			}
			else{
                printf("you already have a quest\n");
			}
			}

			/*receptionist*/
            else if(strstr(bar_con,"receptionist")){
				printf("a nice looking girl sits behind a counter\n");
				if(quest_con!=0 && quest_conditions==e_count && on_going_quest!=0){
					gold += reward;
					quest_con=0;
					e_count=0;
					board_con=0;
					on_going_quest=0;
					printf("she greets you\n");
					printf("\"here's your reward for the quest!\"(current gold:%2.1f)\n",gold);
				}
				else{
					printf("she glances at you...\n");
					printf("please first accept a quest from the notice-board and complete it!\n");
				}
            }
			/*empty table*/

			else if(strstr(bar_con,"empty table")){
				printf("you take a seat at the table\n");
				printf("a young maid comes closer");
				printf("\"what would you like to order sir ?\"\n");
				printf(" order food\n order water\n order full meal\n");
				fgets(buffer,sizeof(buffer),stdin);
                if(strstr(buffer,"order food") && gold>=23){
                    food_con +=1;
                    gold -=23;
                    printf("\"alright i'll come back shortly\"\n");
                    printf("eating...\n");
                    Sleep(1500);
                    printf("\"here's your meal!\"\n");
                    printf("you hand over %d gold pieces to pay for the food\n",23);
                    printf("wanna tip the girl ?(lenny)\n");
                    fgets(buffer,sizeof(buffer),stdin);
                    if((strstr(buffer,"yes") || strstr(buffer,"Yes")) && gold>=8){
                        gold -=8;
                        printf("\"and this is for the service\" you say\n (gold tip: %d",8);
                    }
                    else{
                        printf("you didn't tip the maid too bad lol\n");
                    }
                    printf(" current gold:%2.1f\n food:%d\n water:%d\n",gold,food_con,water_con);
                    }
                else if(strstr(buffer,"order water") && gold>=13){
                    water_con +=1;
                    gold -=13;
                    printf("\"alright i'll come back shortly\"\n");
                    printf("eating...\n");
                    Sleep(1500);
                    printf("\"here's your bottle!\"\n");
                    printf("you hand over %d gold pieces to pay for the water\n",13);
                    printf("wanna tip the girl ?(lenny)\n");
                    fgets(buffer,sizeof(buffer),stdin);
                    if((strstr(buffer,"yes") || strstr(buffer,"Yes")) && gold>=5){
                        gold -=5;
                        printf("\"and this is for the service\" you say\n (gold tip: %d",5);
                    }
                    else{
                        printf("you didn't tip the maid too bad lol\n");
                    }
                    printf(" current gold:%2.1f\n food:%d\n water:%d\n",gold,food_con,water_con);
                    }
                else if(strstr(buffer,"order full meal") && gold>=30){
                    food_con +=1;
                    water_con +=1;
                    gold -=30;
                    printf("\"alright i'll come back shortly\"\n");
                    printf("eating...\n");
                    Sleep(1500);
                    printf("\"here's you are!\"\n");
                    printf("you hand over %d gold pieces to pay for the meal\n",30);
                    printf("wanna tip the girl ?(lenny)\n");
                    fgets(buffer,sizeof(buffer),stdin);
                    if((strstr(buffer,"yes") || strstr(buffer,"Yes")) && gold>=12){
                        gold -=12;
                        printf("\"and this is for the service\" you say\n (gold tip: %d",12);
                    }
                    else{
                        printf("you didn't tip the maid too bad lol\n");
                    }
                    printf(" current gold:%2.1f\n food:%d\n water:%d\n",gold,food_con,water_con);
                    }
                else
                    printf("you didn't order anything or you don't have enough gold\n");
			}

			/*exit bar*/

			else if(strstr(bar_con,"exit bar")){
				printf("you leave the bar\n");
				break;
			}

			/*player didn't enter one of the previous cases*/

			else
        	printf("don't be a pain in the ass! enter one of those numbers!\n");
		}

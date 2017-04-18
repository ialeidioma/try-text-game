        	/*dungeon*/
			printf("you reach the dungeon\n");
			Sleep(1000);
			system("color 0f");
            for(;;){
                printf("decide where to go:\n");
                if(rand()%3==0){
                        printf(" right\n");
                    }
                if(rand()%3==0){
                        printf(" forward\n");
                    }
                if(rand()%3==0){
                        printf(" left\n");
                    }

                printf(" exit dungeon\n");

                fgets(dungeon_con,sizeof(dungeon_con),stdin);

                if(strstr(dungeon_con,"left")){
                    printf("you took the left turn\n");
                    if(rand()%3==0 || rand()%8==0){
                        #include "dungeon_fight.h"
                    }
                    else if(rand()%6==0){
                        if(rand()%3==0){
                            gold_found=200;
                            gold += gold_found;
                        }
                        else if(rand()%6==0){
                            gold_found=400;
                            gold += gold_found;
                        }
                        else if(rand()%12==0){
                            gold_found=1000;
                            gold += gold_found;
                        }
                        else{
                            gold_found=100;
                            gold += gold_found;
                        }
                        printf("ayy! you found %d gold (current gold:%2.1f)\n",gold_found,gold);
                    }
                    else if(rand()%8==0 && rand()%luck==0){
                        printf("you got lost!\n");
                        printf("you panic and start running!\n");
                        printf("you've probably lost some really good loot around here lol\n");
                    }
                }
                else if(strstr(dungeon_con,"right")){
                        printf("you took the right turn\n");
                    if(rand()%3==0 || rand()%8==0){
                        #include "dungeon_fight.h"
                    }
                    else if(rand()%6==0){
                        if(rand()%3==0){
                            gold_found=200;
                            gold += gold_found;
                        }
                        else if(rand()%6==0){
                            gold_found=400;
                            gold += gold_found;
                        }
                        else if(rand()%12==0){
                            gold_found=1000;
                            gold += gold_found;
                        }
                        else{
                            gold_found=100;
                            gold += gold_found;
                        }
                        printf("ayy! you found %d gold (current gold:%2.1f)\n",gold_found,gold);
                    }
                    else if(rand()%8==0 && rand()%luck==0){
                        printf("you got lost!\n");
                        printf("you panic and start running!\n");
                        printf("you've probably lost some really good loot around here lol\n");
                    }
                }
                else if(strstr(dungeon_con,"forward")){
                        printf("you follow the corridor\n");
                    if(rand()%3==0 || rand()%8==0){
                        #include "dungeon_fight.h"
                    }
                    else if(rand()%6==0){
                        if(rand()%3==0){
                            gold_found=200;
                            gold += gold_found;
                        }
                        else if(rand()%6==0){
                            gold_found=400;
                            gold += gold_found;
                        }
                        else if(rand()%12==0){
                            gold_found=1000;
                            gold += gold_found;
                        }
                        else{
                            gold_found=100;
                            gold += gold_found;
                        }
                        printf("ayy! you found %d gold (current gold:%2.1f)\n",gold_found,gold);
                    }
                    else if(rand()%8==0 && rand()%luck==0){
                        printf("you got lost!\n");
                        printf("you panic and start running!\n");
                        printf("you've probably lost some really good loot around here lol\n");
                    }
                }
                else if(strstr(dungeon_con,"search")){
                    printf("you search the room\n");
                    if(rand()%3==0 || rand()%8==0){
                        #include "dungeon_fight.h"
                    }
                    else if(rand()%6==0){
                        if(rand()%3==0){
                            gold_found=200;
                            gold += gold_found;
                        }
                        else if(rand()%6==0){
                            gold_found=400;
                            gold += gold_found;
                        }
                        else if(rand()%12==0){
                            gold_found=1000;
                            gold += gold_found;
                        }
                        else{
                            gold_found=100;
                            gold += gold_found;
                        }
                        printf("ayy! you found %d gold (current gold:%2.1f)\n",gold_found,gold);
                    }
                }
                else if(strstr(dungeon_con,"exit dungeon")){
                        printf("you leave the dungeon\n");
                        break;
                }
                else{
                    printf("you didn't choose one of the cases\n");
                    break;
                }
                printf("there's only dust here\n");
                if(hp<=0.)
                    break;
            }


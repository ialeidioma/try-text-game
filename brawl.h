/*brawl*/
	printf("you drank a little too much...\n");
	printf("while you are heading for the door you stumble into a table\n");
	printf("\"ehy! that was my beer! damn you asshole! Pay me back!\"\n");
	printf("do you wish to pay him back ? (you also need to pay the glass since you broke it)\n");
	printf("gold required: 50\n");
	fgets(brawl_con,sizeof (brawl_con),stdin);

	if((brawl_con[0]=='y' || brawl_con[0]=='Y') && gold>=50){
		gold -= 50;
		printf("you hand over the gold (current gold:%2.1f)\n",gold);
		printf("\"ehy fellas, here's someone who knows his place\"\n");
		printf("everyone in the bar starts to laugh at you...maybe you should have turned him down...\n");
		//lose reputation when implemented
		//add a "personality" system ?
		break;
	}

	/*grammatical errors intentional here since you are drunk*/

	else if(brawl_con[0]=='n' || brawl_con[0]=='N'){
		printf("\"sory i didn' mean to do that...\"\n");
		printf("\"you think i care ? dumbass\"\n");
		printf("\"I'mma get my money one way or the other\"\n");
	}
	else{
		printf("you rise you hands\n");
		printf("\"look i dont have the moneey\"\n");
		printf("\"Ahhhhh\"\n");
		printf("\"who bets i can beat this fleabag?\"\n");
	}
		e_hp_brawl=50;
		hp_brawl=50;
		do {
        	Sleep(1000);
        	printf("decide to attack or flee or heal:\n");
        	fgets(brawl_con,sizeof (brawl_con),stdin);
        	if(strstr(brawl_con,"attack")){
        		if( rand()%3==0 || rand()%7==0 || rand()%11==0){
        		e_hp_brawl -=dmg_brawl;
        		printf("you attacked the enemy, causing %d dmg (remaing enemy hp=%d)\n",dmg_brawl,e_hp_brawl);
				}
				else
					printf("you are so drunk that you missed the commoner\nlol\n");
			}
			else if(strstr(brawl_con,"flee")){
				printf("\"look who's running\"\n");
			}
			else if(strstr(brawl_con,"heal")){
				hp_brawl += heal;
            	if(hp_brawl<=max_hp)
					printf("you healed yourself of %d hp, keep up the fight,(hp=%d)\n",heal_brawl,hp_brawl);
            	else{
 					hp_brawl -= heal;
            		printf("sorry can't heal right now!(hp=%d max_hp=%d)\n",hp_brawl,max_hp_brawl);
				}
			}
			if(brawl_con[0] != 'f'){

			if( rand()%3==0 || rand()%7==0 || rand()%11==0){
            	hp_brawl -= e_dmg_brawl;
                printf("the enemy attacked you!(remaining player hp:%d)\n",hp_brawl);
			}
			else
				printf("the enemy missed! lucky!\n");
		}
		if(e_hp_brawl > 0)
			printf("the commoner is still alive!\n");
	}while(e_hp_brawl >0 && hp_brawl>0);
	if(e_hp_brawl<=0){
            	e_count +=1;
            	if(rand()%6==0){
            			bet = 200;
					}
                else if(rand()%7==0){
            			bet = 400;
					}
                else if(rand()%11==0){
            			bet = 700;
					}
                else{
                    bet =100;
                }
                gold +=bet;
				printf("the peasant falls unconscious!\n");
            	printf("you gained %d gold from the bets against you (total gold %2.1f)\n",bet,gold);
            	printf("do you want to \"steal\" his gold too ?\n");
            	fgets(brawl_con,sizeof (brawl_con),stdin);
            	if(brawl_con[0]=='y' || brawl_con[0]=='Y' || strstr(brawl_con,"steal")){
            		printf("you search the unconscious commoner\n");
            		if(rand()%3==0){
            			gold += 200;
            			printf("you find %d gold(current gold %2.1f)\n",200,gold);
					}
            		else if(rand()%7==0){
            			gold += 300;
            			printf("you find %d gold(current gold %2.1f)\n",300,gold);
					}
            		else if(rand()%11==0){
            			gold += 500;
            			printf("you find %d gold(current gold %2.1f)\n",500,gold);
					}
				}
				else
					printf("you leave the man there...\n");
				gold -= 80;
				printf("you head to the counter\n");
				printf("\"this is for the mess\"\n");
				printf("you hand over %d gold (current gold:%2.1f)",80,gold);
				break;
	}
	if(hp_brawl<=0){
		system("color f1");
        printf("too bad the peasant hit you really hard and you fell unconscious!\n");
		printf("you wake up in the street near the bar...\n");
		gold=0;
		printf("your gold! he took your gold!(current gold:%2.1f)\n",gold);
		goto LOAD;
    }

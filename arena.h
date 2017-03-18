		/*area*/
		printf("prepare to fight!\n");
		e_count=0;
		/*combat system*/

		while(hp > 0){
		e_hp=20*i;
		dmg= 4.*j+armour_atck_up+wp_eq;
    	heal= 6.*j;
    	heal_brawl = (int) heal;
		e_dmg= 5.*i;
        printf("you encountered an enemy!\n");
        do {
        	ARENA:
        	Sleep(1000);
        	printf("decide to attack (1) or flee (0) or use your items (2) or heal(any other number):\n");
        	scanf("%d",&arena_con);

			/*check if number*/

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

		  /*attack option*/

			if(arena_con==1){

				/*check wp equipped*/

				switch(wp_con){

					case 2:
					e_hp -=dmg;
					if(rand()%8==0){
						e_hp -=dmg;
						printf("critical hit!\n");
						printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",2*dmg,e_hp);
						break;
					}
					printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e_hp);
					break;

					case 3:
                	e_hp -=dmg;
					if(rand()%16==0){
						e_hp =0.;
						printf("enemy executed!!\n");
						break;
					}
					printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e_hp);
					break;

					default:
						e_hp -=dmg;
            			printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e_hp);
				}
            }

			/*flee option*/

			else if (arena_con==0){
                printf("coward! You can't run forever\n");

                /*enemy attack while attempting to flee*/

                if(rand()%3==0 || rand()%2==0){
            	hp -= 2*e_dmg-armour_eq;
                printf("the enemy attacked you while attemping to flee! causing %2.1f (remaining player hp:%2.1f)\n",2*e_dmg,hp);
			}
				else
					printf("the enemy followed you!\n");
            }

            /*items option*/

            else if(arena_con==2){

            	/*check if player has iterms*/

				if(s_p_con != 0 || l_p_con != 0 || roger_con != 0 || ban_con !=0){
            		printf("list of items in your inventory:\n");
            		if(s_p_con>0)
            			printf("small potion(s): %d\n",s_p_con);
            		if(l_p_con>0)
            			printf("large potion(s): %d\n",l_p_con);
            		if(roger_con>0)
            			printf("roger's joke: %d\n",roger_con);
            		if(ban_con>0)
            			printf("ciel's banhammer: %d\n",ban_con);
            		printf("which item do you want to use ?(type the whole name of the item! I can check it lol)\n");
            		scanf("%[^\n]",buffer);

            		/*check what items is chosen*/

            		/*small potion*/
            		if(buffer[0]=='s' && buffer[5]==' ' && s_p_con>0){
						hp += heal*4;
            			if(hp<=max_hp){
							s_p_con -=1 ;
            				printf("you used a small potion! hp:%2.1f remaining small potion(s): %d\n",hp,s_p_con);
            			}
            			else{
							hp -= heal*4;
            				printf("sorry can't heal right now!(hp=%2.1f max_hp=%2.1f)\n",hp,max_hp);
						}
					}
					/*large potion*/
					else if(buffer[0]=='l' && buffer[5]==' ' && l_p_con>0){
						hp += heal*9;
            			if(hp<=max_hp){
							l_p_con -=1 ;
            				printf("you used a large potion! hp:%2.1f remaining large potion(s): %d\n",hp,l_p_con);
            			}
            			else{
							hp -= heal*9;
            				printf("sorry can't heal right now!(hp=%2.1f max_hp=%2.1f)\n",hp,max_hp);
						}
					}
					/*roger's joke*/
					else if(buffer[0]=='r' && buffer[7]==' ' && roger_con>0){
						roger_con -=1;
						if( rand()%5==0){
						printf("you managed to fool the enemy!\n");
						goto ARENA;
						}
					else
						printf("the enemy looks at you sadly...\n");
					}
					/*ciel ban*/
					else if(buffer[0]=='c' && buffer[6]==' ' && ban_con>0){
						ban_con -=1;
						if( rand()%7==0){
						printf("the ban hammer worked!\n");
						e_hp=0;
						}
					else
						printf("the handle of the hammer broke! LOL\n");
					}
					else
						printf("you tried to use an item you don't have LOL!\n");
				}
				else
					printf("you don't have any items sorry\n");
			}

			//will probably add more options in the future
			/*heal option*/

			else{
            	hp += heal;
            	if(hp<=max_hp)
					printf("you healed yourself of %2.1f hp, keep up the fight,(hp=%2.1f)\n",heal,hp);
            	else{
 					hp -= heal;
            		printf("sorry can't heal right now!(hp=%2.1f max_hp=%2.1f)\n",hp,max_hp);
				}
            }

            /*enemy attack*/

            if(arena_con != 0){

			if( rand()%3==0 || rand()%7==0 || rand()%11==0){
            	hp -= e_dmg-armour_eq;
                printf("the enemy attacked you!(remaining player hp:%2.1f)\n",hp);
			}
			else
				printf("the enemy missed! lucky!\n");
		}

		/*check armour equipped*/

		if(armour_con==3){
			hp += heal*0.314 ;
           	if(hp<=max_hp)
			printf("you recovered %2.1f (current hp:%2.1f)\n",heal*0.314,hp);
            else{
 				hp -= heal*0.314;
            	printf("sorry can't heal right now!(hp=%2.1f max_hp=%2.1f)\n",hp,max_hp);
				}

		}

		/*check agility*/

		if(wp_con==4 || armour_con==2){
			if(wp_con==4)
           		printf("the heavy weapon hinders your mobility!\n");
           	if(armour_con==2)
           	    printf("the heavy armour hinders your mobility!\n");
			if( rand()%3==0 || rand()%7==0 || rand()%11==0){
           	hp -= e_dmg-armour_eq;
            printf("the enemy attacked you!(remaining player hp:%2.1f)\n",hp);
			}
			else
				printf("the enemy missed! lucky!\n");
			if(wp_con==4 && armour_con==2){
					if( rand()%3==0 || rand()%7==0 || rand()%11==0){
           			hp -= e_dmg-armour_eq;
            		printf("the enemy attacked you! causing %2.1f (remaining player hp:%2.1f)\n",e_dmg,hp);
					}
					else
					printf("the enemy missed! lucky!\n");
			}
		}

		if(e_hp > 0)
			printf("the enemy is still alive!\n");

	}while(e_hp >0 && hp>0);

		/*check if enemy is dead*/

		if(e_hp<=0){
            	e_count++;
            	gold += 20+e_count*i;
				printf("you killed an enemy!GJ\n");
            	printf("you gained %2.1f xp and %2.1f of gold(current xp=%2.1f)\n",3*i,20+e_count*i,xp += 3*i);
            	printf("your current gold %2.1f\n",gold);

		    	/*check if lv up */

		    	if(xp >= xpo*xp_multi){
            		lv +=1;
            		i +=0.5;
            		j +=0.2;
            		max_hp += 5*j;
            		xpo *= xp_multi;
					printf("you gained a level!\n");
            		printf("current xp=%2.1f next level xp=%2.1f\n",xp,xpo*xp_multi);
					xp_multi += 0.25;
				}

				/*ask player to exit the arena*/

				if(e_count%10==0){
				gold += 40*e_count;
				printf("You've defeated %d enemies!\n",e_count);
				printf("prize for defeating %d enemies is %d gold!\n",e_count, 40*e_count);
				printf("do you wish to exit the arena ?\n");
				printf("enter 1 for yes, anything else for no\n");
				e_count=0;
				scanf("%d",&arena_exit);

				/*check if it's a number*/

				fflush(stdout);
  				if (fgets(buffer, sizeof buffer, stdin))
	  			{
    			long value;
    			char *check;
    			value = strtol(buffer, &check, 0);
    			if (!isspace(*check) && *check != 0)
    			{
      			printf("you didn't enter a number! You go to the map!\n");
    			break;
				}
  				}
				if(arena_exit==1)
					break;
				else
					printf("ah well I hope you survive...\n");
				}
				}
			}

			/*check if player is still alive*/

	if(hp<=0){
        printf("too bad you died! Thanks for playing!\n");
        Sleep(3000);
        return 0;
    }

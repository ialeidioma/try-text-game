		/*area*/
		printf("prepare to fight!\n");
		if(quest_conditions != 20 || quest_conditions != 30)
		e_count=0;
		/*combat system*/

		while(hp > 0){
        scale_str=0.25*strength;
        scale_int=0.25*intelligence;
		e_hp=20*i;
		dmg= 4.+armour_atck_up+wp_eq+scale_str;
    	heal= 6.+scale_int;
    	heal_brawl = (int) heal;
		e_dmg= 5.*i;
        printf("you encountered an enemy!\n");
        do {
        	ARENA:
        	Sleep(1000);
        	printf("decide to attack or flee or use your items or heal:\n");
        	fgets(arena_con, sizeof (arena_con), stdin);

		  /*attack option*/

			if(strstr(arena_con,"attack")){

				/*check wp equipped*/

				if(strstr(wp_con,"assassin blade")){
					if(rand()%8==0){
						e_hp -=2*dmg;
						printf("critical hit!\n");
						printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",2*dmg,e_hp);
					}
					else{
                    e_hp -=dmg;
					printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e_hp);
					}
					}

					else if(strstr(wp_con,"gladius")){
					if(rand()%16==0){
						e_hp =0.;
						printf("enemy executed!!\n");
					}
					else{
					e_hp-=dmg;
					printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e_hp);
					}
					}

					else{
						e_hp -=dmg;
            			printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e_hp);
					}
            }

			/*flee option*/

			else if (strstr(arena_con,"flee")){
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

            else if(strstr(arena_con,"items") || strstr(arena_con,"item")){

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

			else if(strstr(arena_con,"heal")){
            	hp += heal;
            	if(hp<=max_hp)
					printf("you healed yourself of %2.1f hp, keep up the fight,(hp=%2.1f)\n",heal,hp);
            	else{
 					hp -= heal;
            		printf("sorry can't heal right now!(hp=%2.1f max-hp=%2.1f)\n",hp,max_hp);
				}
            }
            else{
                printf("you didn't enter one of the cases\n");
            }

            /*enemy attack*/

            if(strstr(arena_con,"attack") || strstr(arena_con,"items") || strstr(arena_con,"item")){

			if( rand()%3==0 || rand()%16==0 || rand()%10==0 || rand()%17==0 || rand()%dexterity==0){
            	hp -= e_dmg-armour_eq;
                printf("the enemy attacked you dealing %2.1f damage!(remaining player hp:%2.1f)\n",e_dmg-armour_eq,hp);
			}
			else
				printf("the enemy missed! lucky!\n");
            }
            else{

 			if( (rand()%3==0 || rand()%16==0 || rand()%10==0 || rand()%dexterity==0) && rand()%luck==0){
            	hp -= e_dmg-armour_eq;
                printf("the enemy attacked you dealing %2.1f damage!(remaining player hp:%2.1f)\n",e_dmg-armour_eq,hp);
			}
			else
				printf("the enemy missed! lucky!\n");
            }


		/*check armour equipped*/

		if(strstr(armour_con,"trench coat")){
			hp += heal*0.314 ;
           	if(hp<=max_hp)
			printf("you recovered %2.1f (current hp:%2.1f)\n",heal*0.314,hp);
            else{
 				hp -= heal*0.314;
            	printf("sorry can't heal right now!(hp=%2.1f max_hp=%2.1f)\n",hp,max_hp);
				}

		}

		/*check agility*/

		if(strstr(wp_con,"greatsword") || strstr(armour_con,"mail jacket")){
			if(strstr(wp_con,"greatsword"))
           		printf("the heavy weapon hinders your mobility!\n");
           	if(strstr(armour_con,"mail jacket"))
           	    printf("the heavy armour hinders your mobility!\n");
			if( rand()%3==0 || rand()%16==0 || rand()%dexterity==0){
           	hp -= e_dmg-armour_eq;
            printf("the enemy attacked you!(remaining player hp:%2.1f)\n",hp);
			}
			else
				printf("the enemy missed! lucky!\n");
			if(strstr(wp_con,"greatsword") && strstr(armour_con,"mail jacket")){
					if( rand()%3==0 || rand()%16==0 || rand()%10==0 || rand()%17==0 || rand()%11==0 || rand()%dexterity==0){
           			hp -= e_dmg-armour_eq;
					}
			}
		}

		if(e_hp > 0.)
			printf("the enemy is still alive!\n");

	}while(e_hp >0. && hp>0.);

		/*check if enemy is dead*/

		if(e_hp<=0.){
            	e_count++;
            	gold += 20+e_count*i;
				printf("you killed an enemy!GJ\n");
            	printf("you gained %2.1f xp and %2.1f of gold(current xp=%2.1f)\n",3*i,20+e_count*i,xp += 3*p_xp_multi);
            	printf("your current gold %2.1f\n",gold);

		    	/*check if lv up */

		    	if(xp >= xpo*xp_multi){
            		lv +=1;
            		if(rand()%3==0){
                        stats_count +=2;
            		}
            		else if(rand()%8==0){
                        stats_count +=3;
            		}
            		else if(rand()%8==0 || rand()%11==0 || rand()%5==0){
                        stats_count +=0;
            		}
            		else{
                        stats_count +=1;
            		}
            		i +=0.25;
            		p_xp_multi += 0.2;
            		max_hp += 5*scale_str;
            		xpo *= xp_multi;
					printf("you gained a level!\n");
					printf("you have %d stats!\n",stats_count);
            		printf("current xp=%2.1f next level xp=%2.1f\n",xp,xpo*xp_multi);
					xp_multi += 0.25;
				}

				/*ask player to exit the arena*/

				if(e_count%10==0){
				gold += 40*e_count;
				printf("You've defeated %d enemies!\n",e_count);
				printf("prize for defeating %d enemies is %d gold!\n",e_count, 40*e_count);
				printf("do you wish to exit the arena ?\n");
				printf("enter yes or no\n");
				fgets(arena_con, sizeof (arena_con), stdin);

				if(strstr(arena_con,"yes") || strstr(arena_con,"Yes"))
					break;
				else
					printf("ah well I hope you survive...\n");
				}
				}
			}

			/*check if player is still alive*/

	if(hp<=0.){
        printf("too bad you died! thanks for playing!\n");
        printf("and sorry for deleting your save (lenny face(can't print it lol))\n");
        if(strstr(perma_death,"yes") || strstr(perma_death,"Yes"))
        rm=remove("try1.bin");
        Sleep(3000);
        break;
    }

		/*area*/
		printf("prepare to fight!\n");
	
		/*combat system*/
    
		while(hp > 0){
		e=20*i;
		dmg= 4.*j+atck_up+wp_eq;
    	heal= 6.*j;
		edmg= 5.*i;
        printf("you encountered an enemy!\n");
        do {
        	printf("decide to attack (1) or flee (0) or heal(any other number):\n");
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
				switch(wp_con){
					
					case 2:
					e -=dmg;
					if(rand()%8==0){
						e -=dmg;
						printf("critical hit!\n");
						printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",2*dmg,e);
						break;
					}
					printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e);
					break;
					
					case 3:
                	e -=dmg;
					if(rand()%16==0){
						e =0.;
						printf("enemy executed!!\n");
						break;
					}
					printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e);
					break;
					
					default:
						e -=dmg;
            			printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e);
				}				
			if(e > 0)
			    printf("the enemy is still alive!\n");
            
            }
            
			/*flee option*/
            
			else if (arena_con==0){
                printf("coward! You can't run forever\n");
                
                /*enemy attack while attempting to flee*/
                
                if(rand()%3==0 || rand()%2==0){
            	hp -= 2*edmg-armour_eq;
                printf("the enemy attacked you while attemping to flee!(remaining player hp:%2.1f)\n",hp);
			}
				else
					printf("the enemy followed you!\n");
            	printf("the enemy is still alive!\n");
            }
            
			/*heal option*/
            //will probably add more options in the future
			
			else{
            	hp += heal;
            	if(hp<=maxhp)
					printf("you healed yourself of %2.1fhp, keep up the fight,(hp=%2.1f)\n",heal,hp);
            	else{
 					hp -= heal;           		
            		printf("sorry can't heal right now!(hp=%2.1f maxhp=%2.1f)\n",hp,maxhp);
				}
				printf("the enemy is still alive!\n");
            }
            
            /*enemy attack*/
            
            if(arena_con != 0){
			
			if( rand()%3==0 || rand()%7==0 || rand()%11==0){
            	hp -= edmg-armour_eq;
                printf("the enemy attacked you!(remaining player hp:%2.1f)\n",hp);
			}
			else
				printf("the enemy missed! lucky!\n");
		}
		if(armour_con==3){
			hp += heal*0.314 ;
           	if(hp<=maxhp)
			printf("you recovered %2.1f (current hp:%2.1f)\n",heal*0.314,hp);
            else{
 				hp -= heal*0.314;           		
            	printf("sorry can't heal right now!(hp=%2.1f maxhp=%2.1f)\n",hp,maxhp);
				}

		}
		if(armour_con==2){
           	printf("the heavy armour hinders your mobility!\n");
			if( rand()%3==0 || rand()%7==0 || rand()%11==0){
           	hp -= edmg-armour_eq;
            printf("the enemy attacked you!(remaining player hp:%2.1f)\n",hp);
			}
			else
				printf("the enemy missed! lucky!\n");	
		}
		
		if(wp_con==4){
           	printf("the heavy weapon hinders your mobility!\n");
			if( rand()%3==0 || rand()%7==0 || rand()%11==0){
           	hp -= edmg-armour_eq;
            printf("the enemy attacked you!(remaining player hp:%2.1f)\n",hp);
			}
			else
				printf("the enemy missed! lucky!\n");	
		}
	 }while(e >0 && hp>0);
		
		/*check if enemy is dead*/
		
		if(e<=0){
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
            		maxhp += 5*j;
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
					goto START;
				else 
				
					printf("ah well I hope you survive...\n");
				}
				}
			}
			
			/*check if player is still alive*/
	
	if(hp<=0){
        printf("too bad you died! Thanks for playing!\n");
        break;
    }

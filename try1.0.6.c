/*known issues:
player can heal undefinatly (put a maxhp and if(hp+heal>maxhp) can't heal)
player can flee undefinatly (not a big problem since enemy can attack but it may need to be capped or adding a chance to fail to flee and getting hit)
enemy attack not completly random (needs to be checked)
spelling needs to be checked (most times I write this program I'm too tired to do other stuff)
unknow update issues (new implemented code needs to be checked)

New features to add:
economy system (gold reward arena: base income per 10 kills + income for enemy level*enemies killed)
shop system (missing items etc)
bar system (waste money, some eroge, gambling, quests)
dungeon zone (less enemies but stronger, chance to find item, complete quests)
temple zone (learn skills, chance to get high difficulty quests)

That's all for now*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 99

int main(void)
{
    int switch_con,arena_con,e_atck_con,e_count,arena_exit,shop_con;
	double p,e,xp,lv,dmg,edmg,heal,xpo,xp_multi;
    double i,j;
    
    i=1.;
    p=50.;
    e_atck_con=0;
    xp=0.;
    xpo=6.;
    lv=0.;
    j=1.;
    e_count=0;
    xp_multi=1.5;
    char buffer[SIZE];
    
	/*game starts here*/
    
    START:
	printf("decide where to go\n");
	printf(" 1:shop\n 2:arena\n 3:dungeon\n 4:exit game\n");
	printf("enter either 1,2,3 or 4\n");
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
    		goto START;
			}
  		}
	
	/*main switch to select area*/	
	
	switch(switch_con){

	/*shop*/
	
	case 1 :
		printf("welcome welcome\n");
		SHOP:
		printf("what would you like to buy ?\n");
		printf(" 1:armor\n 2:weapon\n 3:special items\n 4:exit shop\n");
		printf("enter either 1,2,3 or 4\n");
		scanf("%d",&shop_con);
	
		/*check if it's a number otherwise sends to SHOP*/
	
		fflush(stdout);
  		if (fgets(buffer, sizeof buffer, stdin))
	  	{
    		long value;
    		char *check;
    		value = strtol(buffer, &check, 0);
    		if (!isspace(*check) && *check != 0)
    		{
      		printf("sorry traveller, i don't get the meaning of %s\n",buffer);
    		goto SHOP;
			}
  		}
  	
	  	/*main shop switch*/
  	
	  	switch(shop_con){
  	
	  	
			/*armours*/
			case 1:
				printf("armour types\n");
				goto SHOP;
			
			/*weapons*/
			
			case 2:
				printf("weapon types\n");
				goto SHOP;
			
			/*special items*/
			
			case 3:
				printf("special items\n");
				goto SHOP;
			
			case 4:
				printf("safe travels adventurer\n");
				printf("oh and if you need any new shining piece of equipment don't wait to spend your gold, it may be too late after!\n");
				printf("mark my words!\n");
				goto START;
			
	    	/*player didn't enter one of the previous cases*/
			
			default:
				printf("you didn't enter one of the available options\n");
				printf("go back to the shop menù!\n");
				goto SHOP;
		}
	
	
	/*arena*/
	
	case 2 :
		printf("prepare to fight!\n");
	
		/*combat system*/
    
		while(p > 0){
		e=20*i;
		dmg= 4.*j;
    	heal= 6.*j;
		edmg= 5.*i;
        printf("you encountered an enemy!\n");
        do {
        	printf("decide to attack (1) or flee (0) or heal(any other number):\n");
        	e_atck_con++;
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
                e -=dmg;
                e_atck_con++;
            printf("you attacked the enemy, causing %2.1f dmg (remaing enemy hp=%2.1f)\n",dmg,e);
            if(e_atck_con%3==0){
                p -= edmg;
                printf("the enemy attacked you!(remaining player hp:%2.1f)\n",p);
                e_atck_con +=3;
        	}
        	if(e > 0)
			    printf("the enemy is still alive!\n");
            
            }
            
			/*flee option*/
            
			else if (arena_con==0){
                e_atck_con *=3;
                printf("coward! You can't run forever (well actually you can since my coding skills are pretty low but damn you if you try that)\n");
                if(e_atck_con%3==0){
                p -= edmg;
                printf("the enemy attacked you!(remaining player hp:%2.1f)\n",p);
                e_atck_con++;
            }
            	printf("the enemy is still alive!\n");
            }
            
			/*heal option*/
            //will probably add more options in the future
            
			else{
            	e_atck_con *= 5;
            	p += heal;
            	printf("you healed yourself of %2.1fhp, keep up the fight,(hp=%2.1f)\n",heal,p);
            if(e_atck_con%7==0){
                p -= edmg;
                printf("the enemy attacked you!(remaining player hp:%2.1f)\n",p);
                e_atck_con+=11;
            }
            	printf("the enemy is still alive!\n");
            }
		}while(e >0 && p>0);
		
		/*check if enemy is dead*/
		
		if(e<=0){
            	e_atck_con++;
            	e_count++;
			    printf("you killed an enemy!GJ\n");
            	printf("you gained %2.1f xp!(current xp=%2.1f)\n",3*i,xp += 3*i);
        
		    	/*check if lv up */
        
		    	if(xp >= xpo*xp_multi){
            		lv +=1;
            		i +=0.5;
            		j +=0.2;
            		xpo *= xp_multi;
					printf("you gained a level!\n");
            		printf("current xp=%2.1f next level xp=%2.1f\n",xp,xpo*xp_multi);
					xp_multi += 0.25;
				}
		
				/*ask player to exit the arena*/
		
				if(e_count%10==0){
				printf("You've defeated %d enemies!\n",e_count);
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
	
	if(p<=0){
        printf("too bad you died! Thanks for playing!\n");
        break;
    }
    
	    /*dungeon*/
    
	    case 3 :
        	printf("not implemented yet\n");
        	goto START;
    
	    /*exit game*/ //will probably add more cases here
    
	    case 4 :
        	printf("hope you had fun!\n");
        	printf("Cyaaaaaaa!\n");
        	break;
    
	    /*player didn't enter one of the previous cases*/
    
	    default :
        	printf("don't be a pain in the ass! enter one of those numbers!\n");
        	goto START;
    }
	return 0;
}

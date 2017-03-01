/*known issues:
enemy attack random (unkown if it varies between how long it takes to enter the number)
spelling needs to be checked (most times I write this program I'm too tired to do other stuff)
unknow update issues (new implemented code needs to be checked)

New features to add:
shop system (missing items etc)
bar zone (waste money, some eroge, gambling, quests, chance to get into a fight after drinking)
dungeon zone (less enemies but stronger, chance to find item, complete quests)
temple zone (learn skills, chance to get high difficulty quests, (saves???) )
guild zone (quests, reputition, possibility to recruit party member(with enough reputition, higher rep higher stats))
add more zones, items, npcs for party, quests, monters etc
(if I manage to get a save system done, needs to write data into a file, read that data, encrypt it so that it can't be hacked ???)
(add a plot, need someone to make a story but player not forced to play the story)
(events happen while player is out ???, such as no items in shop, no quests)

It will be a lot of work already, most of things I can already do them, others I need to search*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 99

int main(void)
{
	#include "variables.h"
    
    system("color f1");
    
	/*game starts here*/
    
    START:
	printf("decide where to go\n");
	printf(" 1:shop\n 2:arena\n 3:dungeon\n 4:bar\n 5:exit game\n");
	printf("enter either 1,2,3,4 or 5\n");
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
			#include "shop.h"

	/*arena*/
	
	case 2 :
			#include "arena.h"
    
    /*dungeon*/
    
	case 3 :
			#include "dungeon.h"
    
	/*bar*/
    	
	case 4:
			#include "bar.h"

	    /*exit game*/ 
		//will probably add more cases here
    	
	case 5 :
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

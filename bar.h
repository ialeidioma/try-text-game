    		/*bar*/
			printf("you enter the bar\n");
    		BAR:
    		printf("where do you want to head ?\n");
    		printf(" 1:adventurers' table\n 2:counter\n 3:girls' table\n 4:notice-board\n 5:empty table\n 6:exit bar\n");
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
				printf("not implemented\n");
				goto BAR;
			
			/*counter*/
			
			case 2:
				printf("the barman greets you\n");
				printf("hello lad!\n");
				COUNTER:
				printf("what you want to drink ?\n");
				printf("list of drinks:\n");
				printf(" donnod\n the wagglestick\n ayaya intensified\n fizzy bubbley\n");
				printf("(type the whole name!)\n");
				
				/*choose drink*/
				
				gets(buffer);
				if(buffer[0]=='d' && gold>=20){
					printf("Here's your donnod, enjoy, it costs 20 gold pieces\n");
					gold -=20;
					alcohol_con += 1;
					goto COUNTER;
				}
				else if(buffer[0]=='t' && gold>=25){
					printf("Here's your wagglestick, enjoy, it costs 25 gold pieces\n");
					gold -=25;
					alcohol_con += 2;
					goto COUNTER;
				}				
				else if(buffer[0]=='a' && gold>=30){
					printf("Here's your ayaya intensified, enjoy, it costs 30 gold pieces\n");
					gold -=30;
					alcohol_con += 3;
					goto COUNTER;
				}
				else if(buffer[0]=='f' && gold>=25){
					printf("Here's your fizzle bubbley, enjoy, it costs 35 gold pieces\n");
					gold -=35;
					alcohol_con += 5;
					goto COUNTER;
				}
				else{
					printf("you don't have the money or you didn't enter one of the drinks :/\n");
					goto BAR;
				}
				if(alcohol_con>=14){
					//include brawl header here
				}
				

				
			/*girls'table*/
			
			case 3:
				printf("not implemented\n");
				goto BAR;
			
			/*notice-board*/
			
			case 4:
				printf("not implemented\n");
				goto BAR;
			
			/*empty table*/
			
			case 5:
				printf("not implemented\n");
				goto BAR;
			
			/*exit bar*/
			
			case 6:
				printf("why you entered in the first place ? lol\n");
				break;
			
			/*player didn't enter one of the previous cases*/
			
			default :
        	printf("don't be a pain in the ass! enter one of those numbers!\n");
        	goto BAR;
		}

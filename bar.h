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
				printf("not implemented\n");
				goto BAR;
			
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
				goto START;
			
			/*player didn't enter one of the previous cases*/
			
			default :
        	printf("don't be a pain in the ass! enter one of those numbers!\n");
        	goto BAR;
		}

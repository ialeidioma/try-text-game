		/*shop*/
		printf("welcome welcome\n");
		SHOP:
		printf("what would you like to buy ?\n");
		printf(" 1:armor\n 2:weapon\n 3:items\n 4:exit shop\n");
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
				ARMOURS:
				printf("ah well we don't have many armours...\n");
				printf("but if you get me some items I could manage to make you something special, for the right price obviously\n");
				printf("current available armours:\n");
				printf(" 1:leather jacket\n 2:mail jacket\n 3:trench coat\n 4:merc suit\n");
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

  				if(shop_con==1)
  					printf("the leather jacket offers moderate protection, it costs of 900 gold pieces\n");
				else if(shop_con==2)
					printf("the mail jacket offers higher protection compared to other armours, it costs 1200 gold pieces\n");
				else if(shop_con==3)
					printf("the trench coat offers little protection, but in addtion to it it heals a percentage of health each turn, it costs 1350 gold pieces\n");
				else if(shop_con==4)
					printf("the merc suit offers moderate protection, in addition it boosts the wearer offense abilities, it costs 1500 gold pieces\n");
				else{
					printf("since you want to do smartass...you go back to the shop!\n");
					goto SHOP;
				}

				printf("do you wish to buy this armour ?\n");
				printf("current gold:%2.1f",gold);
				printf("enter 1 to buy\n");
				scanf("%d",&buy_con);

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

  				if(buy_con==1 && shop_con==1 && gold >= 900){
  					gold -=900;
					armour_eq=3.;
					armour_con=1;
 					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(buy_con==1 && shop_con==2 && gold >= 1200){
					gold -= 1200;
					armour_eq=5.;
					armour_con=2;
  					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(buy_con==1 && shop_con==3 && gold >= 1350){
					gold -= 1350;
					armour_eq=1.;
					armour_con=3;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(buy_con==1 && shop_con==4 && gold >= 1500){
					gold -= 1500;
					armour_eq=3.;
					armour_atck_up=2.;
					armour_con=4;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}

				else
					printf("you can't afford it sorry or you didn't want to buy it XD\n");

				/*ask player where to go*/

				printf("where do you wish to go ?\n");
				printf(" 1:weapon menu\n 2:items menu\n 3:exit shop\n");
				printf("enter either 1,2 or 3\n");
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
      			printf("you didn't enter a number! dumbass\n");
    			goto SHOP;
				}
  				}

				if(shop_con==1)
					goto WEAPONS;

				if(shop_con==2)
					goto ITEMS;

				if(shop_con==3){
					printf("you left the shop\n");
					break;
			}

			/*weapons*/

			case 2:
				WEAPONS:
				printf("ah well we don't have many weapons...\n");
				printf("but if you get me some items I could manage to make you something special, for the right price obviously\n");
				printf("current available weapons:\n");
				printf(" 1:shortsword\n 2:assassin blade\n 3:gladius\n 4:greatsword\n");
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

  				if(shop_con==1)
  					printf("the shortsword offers moderate attack, it costs of 950 gold pieces\n");
				else if(shop_con==2)
					printf("the assassin blade offers higher chance of getting a critical hit compared to other weapons, it costs 1150 gold pieces\n");
				else if(shop_con==3)
					printf("the gladius offers medium attack, it adds a small chance of executing enemies on hit no matter their remaining health, it costs 1450 gold pieces\n");
				else if(shop_con==4)
					printf("the greatsword offers high attack, it has a lower attack speed compared to other weapons, it costs 1500 gold pieces\n");
				else{
					printf("since you want to do smartass...you go back to the shop!\n");
					goto SHOP;
				}

				printf("do you wish to buy this armour ?\n");
				printf("current gold:%2.1f",gold);
				printf("enter 1 to buy\n");
				scanf("%d",&buy_con);

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

  				if(buy_con==1 && shop_con==1 && gold >= 950){
  					gold -=950;
					wp_eq=3.;
					wp_con=1;
 					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);

				}
				else if(buy_con==1 && shop_con==2 && gold >= 1150){
					gold -= 1150;
					wp_eq=2.;
					wp_con=2;
  					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(buy_con==1 && shop_con==3 && gold >= 1450){
					gold -= 1450;
					wp_eq=2.5;
					wp_con=3;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(buy_con==1 && shop_con==4 && gold >= 1500){
					gold -= 1500;
					wp_eq=5.;
					wp_con=4;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}

				else
					printf("you can't afford it sorry or you didn't want to buy it XD\n");


				/*ask player where to go*/

				printf("where do you wish to go ?\n");
				printf(" 1:armours menu\n 2:items menu\n 3:exit shop\n");
				printf("enter either 1,2 or 3\n");
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
      			printf("you didn't enter a number! dumbass\n");
    			goto SHOP;
				}
  				}

				if(shop_con==1)
					goto ARMOURS;

				if(shop_con==2)
					goto ITEMS;

				if(shop_con==3){
					printf("you left the shop\n");
					break;
			}

			/*special items*/

			case 3:
				ITEMS:
				printf("ah well we don't have many items...\n");
				printf("current available items:\n");
				printf(" 1:small healing potion\n 2:large healing potion\n 3:roger's joke\n 4:ciel's banhammer\n");
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

  				if(shop_con==1)
  					printf("the small healing potion restores a certain percentage of your health... simple eh ? it costs 25 gold pieces\n");
				else if(shop_con==2)
					printf("the large healing potion restores a larger portion of your health compared to the small potion, it costs 55 gold pieces\n");
				else if(shop_con==3)
					printf("the roger's joke has a small chance of making the enemy lose a turn it costs 300 gold pieces\n");
				else if(shop_con==4)
					printf("the ciel's banhammer offers high chance of obliterating an enemy, it's a pretty rare item so it costs 1100 gold pieces\n");
				else{
					printf("since you want to do smartass...you go back to the shop!\n");
					goto SHOP;
				}

				printf("do you wish to buy this item ?\n");
				printf("current gold:%2.1f",gold);
				printf("enter 1 to buy\n");
				scanf("%d",&buy_con);

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

  				if(buy_con==1 && shop_con==1 && gold >= 25){
  					gold -=25;
					s_p_con +=1;
 					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);

				}
				else if(buy_con==1 && shop_con==2 && gold >= 50){
					gold -= 50;
					l_p_con += 1;
  					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(buy_con==1 && shop_con==3 && gold >= 300){
					gold -= 300;
					roger_con += 1;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(buy_con==1 && shop_con==4 && gold >= 1100){
					gold -= 1100;
					ban_con += 1;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}

				else
					printf("you can't afford it sorry or you didn't want to buy it XD\n");

				/*ask player where to go*/

				printf("where do you wish to go ?\n");
				printf(" 1:weapon menu\n 2:armours menu\n 3:exit shop\n");
				printf("enter either 1,2 or 3\n");
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
      			printf("you didn't enter a number! dumbass\n");
    			goto SHOP;
				}
  				}

				if(shop_con==1)
					goto WEAPONS;

				if(shop_con==2)
					goto ARMOURS;

				if(shop_con==3){
					printf("you left the shop\n");
					break;
			}

			case 4:
				printf("safe travels adventurer\n");
				printf("oh and if you need any new shining piece of equipment don't wait to spend your gold, it may be too late after!\n");
				printf("mark my words!\n");
				break;

	    	/*player didn't enter one of the previous cases*/

			default:
				printf("you didn't enter one of the available options\n");
				printf("go back to the shop menu!\n");
				goto SHOP;
		}

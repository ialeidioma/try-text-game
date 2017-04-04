		/*shop*/
		printf("welcome welcome\n");
		for(;;){
		printf("what would you like to buy ?\n");
		printf(" armours\n weapon\n items\n exit shop\n");
		fgets(shop_con,sizeof(shop_con),stdin);


	  	/*main shop switch*/


			/*armours*/

			if(strstr(shop_con,"armours")){
				printf("ah well we don't have many armours...\n");
				printf("but if you get me some items I could manage to make you something special, for the right price obviously\n");
				printf("current available armours:\n");
				printf(" 1:leather jacket\n 2:mail jacket\n 3:trench coat\n 4:merc suit\n");
				fgets(shop_con,sizeof(shop_con),stdin);

  				if(strstr(shop_con,"leather jacket"))
  					printf("the leather jacket offers moderate protection, it costs of 900 gold pieces\n");
				else if(strstr(shop_con,"mail jacket"))
					printf("the mail jacket offers higher protection compared to other armours, it costs 1200 gold pieces\n");
				else if(strstr(shop_con,"trench coat"))
					printf("the trench coat offers little protection, but in addtion to it it heals a percentage of health each turn, it costs 1350 gold pieces\n");
				else if(strstr(shop_con,"merc suit"))
					printf("the merc suit offers moderate protection, in addition it boosts the wearer offense abilities, it costs 1500 gold pieces\n");
				else{
					printf("since you want to do smartass...you go back to the shop!\n");
				}

				printf("do you wish to buy this armour ?\n");
				printf("current gold:%2.1f",gold);
				printf("enter yes to buy else for no\n");
				fgets(buy_con,sizeof(buy_con),stdin);

  				if(strstr(buy_con,"yes") && strstr(shop_con,"leather jacket") && gold >= 900){
  					gold -=900;
					armour_eq=3.;
					armour_con=1;
 					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"mail jacket") && gold >= 1200){
					gold -= 1200;
					armour_eq=5.;
					armour_con=2;
  					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"trench coat") && gold >= 1350){
					gold -= 1350;
					armour_eq=1.;
					armour_con=3;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"merc suit") && gold >= 1500){
					gold -= 1500;
					armour_eq=3.;
					armour_atck_up=2.;
					armour_con=4;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}

				else
					printf("you can't afford it sorry or you didn't want to buy it XD\n");
			}
			/*weapons*/

			else if(strstr(shop_con,"weapons")){
				printf("ah well we don't have many weapons...\n");
				printf("but if you get me some items I could manage to make you something special, for the right price obviously\n");
				printf("current available weapons:\n");
				printf(" shortsword\n assassin blade\n gladius\n greatsword\n");
				fgets(shop_con,sizeof(shop_con),stdin);

				/*check if it's a number otherwise sends to SHOP*/


  				if(strstr(shop_con,"shortsword"))
  					printf("the shortsword offers moderate attack, it costs of 950 gold pieces\n");
				else if(strstr(shop_con,"assassin blade"))
					printf("the assassin blade offers higher chance of getting a critical hit compared to other weapons, it costs 1150 gold pieces\n");
				else if(strstr(shop_con,"gladius"))
					printf("the gladius offers medium attack, it adds a small chance of executing enemies on hit no matter their remaining health, it costs 1450 gold pieces\n");
				else if(strstr(shop_con,"greatsword"))
					printf("the greatsword offers high attack, it has a lower attack speed compared to other weapons, it costs 1500 gold pieces\n");
				else{
					printf("since you want to do smartass...you go back to the shop!\n");
				}

				printf("do you wish to buy this weapon ?\n");
				printf("current gold:%2.1f",gold);
				printf("enter yes to buy else for no\n");
				fgets(buy_con,sizeof(buy_con),stdin);

  				if(strstr(buy_con,"yes") && strstr(shop_con,"shortsword") && gold >= 950){
  					gold -=950;
					wp_eq=3.;
					wp_con=1;
 					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);

				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"assassin blade") && gold >= 1150){
					gold -= 1150;
					wp_eq=2.;
					wp_con=2;
  					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"gladius") && gold >= 1450){
					gold -= 1450;
					wp_eq=2.5;
					wp_con=3;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"greatsword") && gold >= 1500){
					gold -= 1500;
					wp_eq=5.;
					wp_con=4;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}

				else
					printf("you can't afford it sorry or you didn't want to buy it XD\n");

			}
			/*special items*/

			else if(strstr(shop_con,"items")){
				printf("ah well we don't have many items...\n");
				printf("current available items:\n");
				printf(" 1:small healing potion\n 2:large healing potion\n 3:roger's joke\n 4:ciel's banhammer\n");
				fgets(shop_con,sizeof(shop_con),stdin);

  				if(strstr(shop_con,"small healing potion"))
  					printf("the small healing potion restores a certain percentage of your health... simple eh ? it costs 25 gold pieces\n");
				else if(strstr(shop_con,"large healing potion"))
					printf("the large healing potion restores a larger portion of your health compared to the small potion, it costs 55 gold pieces\n");
				else if(strstr(shop_con,"roger's joke"))
					printf("the roger's joke has a small chance of making the enemy lose a turn it costs 300 gold pieces\n");
				else if(strstr(shop_con,"ciel's banhammer"))
					printf("the ciel's banhammer offers high chance of obliterating an enemy, it's a pretty rare item so it costs 1100 gold pieces\n");
				else{
					printf("since you want to do smartass...you go back to the shop!\n");
				}

				printf("do you wish to buy this item ?\n");
				printf("current gold:%2.1f",gold);
				printf("enter yes to buy else for no\n");
				fgets(buy_con,sizeof(buy_con),stdin);

  				if(strstr(buy_con,"yes") && strstr(shop_con,"small healing potion") && gold >= 25){
  					gold -=25;
					s_p_con +=1;
 					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);

				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"large healing potion") && gold >= 50){
					gold -= 50;
					l_p_con += 1;
  					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"roger's joke") && gold >= 300){
					gold -= 300;
					roger_con += 1;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}
				else if(strstr(buy_con,"yes") && strstr(shop_con,"ciel's banhammer") && gold >= 1100){
					gold -= 1100;
					ban_con += 1;
					printf("thank you for your purchase, I'm sure it will help you in your travels(current gold: %2.1f)\n",gold);
				}

				else
					printf("you can't afford it sorry or you didn't want to buy it XD\n");
			}

			else if(strstr(shop_con,"steal")){
                printf("you unsheathe your weapon\n");
                printf("\"ok ok keep calm\"\n");
                printf("what do you want to do ?\n");
                printf(" steal weapon\n steal armour\n steal item\n steal gold\n");
                break;
			}

			else if(strstr(shop_con,"exit shop")){
				printf("safe travels adventurer\n");
				printf("oh and if you need any new shining piece of equipment don't wait to spend your gold, it may be too late after!\n");
				printf("mark my words!\n");
				break;
			}
		}

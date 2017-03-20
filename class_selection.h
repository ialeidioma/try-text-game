/*class selection*/
	printf("i'm tired i want this done for now, i'm gonna set the code while the names will be set tomorrow\n");
	printf("let's see let's see...\n");
	Sleep(1000);
	printf("your age is %d...\n",player_age);
	Sleep(1000);
	if (dexterity<=2)
        dexterity += 1;
	for(;;){
	if(player_age<=0){
		snprintf(player_class,sizeof (player_class), "ghost");
		printf("well as i said before...the only available class for you is %s!\n",player_class);
		break;
	}
	else if(player_age>0 && player_age<14){
		printf("well you are really young...\n");
		Sleep(1000);
		printf("available classes for you:\n");
		Sleep(1500);
		printf(" english\n math\n history\n religion\n...\n");
		Sleep(1000);
		printf("what ?\n");
		Sleep(1000);
		printf("what you looking at ?\n");
		Sleep(1500);
		printf("you don't really expect me to send you out there this young! don't you ?\n");
		Sleep(2000);
		printf("lol...\njokes aside...\n");
		printf("available classes for you:\n");
		printf(" fighter\n thief\n mage\n enter your own class\n");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(clsel, "fighter")){
			printf("your class is %s\n",player_class);
			break;
		}
		else if(strstr(clsel, "thief")){
			printf("your class is %s\n",player_class);
			break;
		}
		else if(strstr(clsel, "mage")){
			printf("your class is %s\n",player_class);
            break;
		}
		else{
			printf("your class is %s\n",player_class);
            break;
		}
	}
	else if(player_age>=14 && player_age<28){
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" sentinel\n duelist\n crusader\n hexblade\n dragoon\n");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(clsel, "sentinel")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "duelist")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "crusader")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "hexblade")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "dragoon")){
			printf("your class is %s\n",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	else if(player_age>=28 && player_age<42){
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" yojimbo\n warlord\n protagonist\n the inherent gift magician\n");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(clsel, "yojimbo")){
			printf("your class is %s\n",player_class);
			break;
		}
		else if(strstr(clsel, "warlord")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "protagonist")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "the inherent gift magician")){
			printf("your class is %s\n",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	else if(player_age>=42 && player_age<65){
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" theurgist\n conjurer\n the vancian magician\n red mage\n");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(clsel, "theurgist")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "conjurer")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "the vancian magician")){
			printf("your class is %s\n",player_class);
			break;
		}
		else if(strstr(clsel, "red mage")){
			printf("your class is %s\n",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	else if(player_age>=65 && player_age<89){
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" blue mage\n necromancer\n nature magician\n druid\n");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(clsel, "blue mage")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "necromancer")){
			printf("your class is %s\n",player_class);
            break;
		}
		else if(strstr(clsel, "nature magician")){
			printf("your class is %s\n",player_class);
			break;
		}
		else if(strstr(clsel, "druid")){
			printf("your class is %s\n",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	else {
		printf("well not much here...for now will change tomorrow maybe...\n");
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" white mage\n witch doctor\n inquisitor\n the magical ranger:\n");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(clsel, "white mage")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "witch doctor")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "inquisitor")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "the magical ranger")){
			printf("your class is %s\n",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	}

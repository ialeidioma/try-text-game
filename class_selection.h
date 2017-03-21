/*class selection*/
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
		printf(" english math history religion...\n");
		Sleep(1000);
		printf("what ?\n");
		Sleep(1000);
		printf("what you looking at ?\n");
		Sleep(1500);
		printf("you don't really expect me to send you out there this young! don't you ?\n");
		Sleep(2000);
		printf("lol...\njokes aside...\n");
		printf("available classes for you:\n");
		printf(" fighter thief mage enter your own class");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(player_class, "fighter")){
			printf("your class is %s",player_class);
			break;
		}
		else if(strstr(player_class, "thief")){
			printf("your class is %s",player_class);
			break;
		}
		else if(strstr(player_class, "mage")){
			printf("your class is %s",player_class);
            break;
		}
		else{
			printf("your class is %s",player_class);
            break;
		}
	}
	else if(player_age>=14 && player_age<28){
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" sentinel duelist crusader hexblade dragoon");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(player_class, "sentinel")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "duelist")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "crusader")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "hexblade")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "dragoon")){
			printf("your class is %s",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	else if(player_age>=28 && player_age<42){
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" yojimbo warlord protagonist the inherent gift magician");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(player_class, "yojimbo")){
			printf("your class is %s",player_class);
			break;
		}
		else if(strstr(player_class, "warlord")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "protagonist")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "the inherent gift magician")){
			printf("your class is %s",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	else if(player_age>=42 && player_age<65){
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" theurgist conjurer the vancian magician red mage");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(player_class, "theurgist")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "conjurer")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "the vancian magician")){
			printf("your class is %s",player_class);
			break;
		}
		else if(strstr(player_class, "red mage")){
			printf("your class is %s",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	else if(player_age>=65 && player_age<89){
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" blue mage necromancer nature magician druid");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(player_class, "blue mage")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "necromancer")){
			printf("your class is %s",player_class);
            break;
		}
		else if(strstr(player_class, "nature magician")){
			printf("your class is %s",player_class);
			break;
		}
		else if(strstr(player_class, "druid")){
			printf("your class is %s",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	else {
		printf("well not much here...for now will change tomorrow maybe...\n");
		Sleep(1000);
		printf("available classes for you:\n");
		printf(" white mage witch doctor inquisitor the magical ranger:\n");
		fgets(player_class,sizeof (player_class),stdin);

		if(strstr(player_class, "white mage")){
			printf("your class is %s",player_class);
		}
		else if(strstr(player_class, "witch doctor")){
			printf("your class is %s",player_class);
		}
		else if(strstr(player_class, "inquisitor")){
			printf("your class is %s",player_class);
		}
		else if(strstr(player_class, "the magical ranger")){
			printf("your class is %s",player_class);
            break;
		}
		else
            printf("you didn't choose one of the available classes");
	}
	}


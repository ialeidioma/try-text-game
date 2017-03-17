/*class selection*/
	printf("i'm tired i want this done for now, i'm gonna set the code while the names will be set tomorrow\n");
	printf("let's see let's see...\n");
	sleep(1);
	printf("your age is %d...\n",player_age);
	sleep(1);
	if(player_age<0){
		snprintf(player_class,sizeof (player_class), "ghost");		
		printf("well as i said before...the only available class for you is %s!\n",player_class);
	}
	else if(player_age>0 && player_age<14){	
		printf("well you are really young...\n");
		sleep(1);
		printf("available classes for you:\n");
		Sleep(1500);
		printf(" english\n math\n history\n religion\n...\n");
		sleep(1);
		printf("what ?\n");
		sleep(1);
		printf("what you looking at ?\n");
		Sleep(1500);
		printf("you don't really expect me to send you out there this young! don't you ?\n");
		sleep(2);
		printf("lol...\njokes aside...\n");
		printf("available classes for you:\n");
		printf(" fighter\n thief\n mage\n enter your own class\n");		
		fgets(player_class,sizeof (player_class),stdin);
		
		if(strstr(clsel, "fighter")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "thief")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "mage")){
			printf("your class is %s\n",player_class);
		}
		else{
			printf("your class is %s\n",player_class);
		}
	}
	else if(player_age>=14 && player_age<28){	
		printf("well not much here...\n");
		sleep(1);
		printf("available classes for you:\n");
		printf(" fighter\n thief\n mage\n enter your own class\n");		
		fgets(player_class,sizeof (player_class),stdin);
		
		if(strstr(clsel, "fighter")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "thief")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "mage")){
			printf("your class is %s\n",player_class);
		}
		else{
			printf("your class is %s\n",player_class);
		}
	}
	else if(player_age>=28 && player_age<42){	
		printf("well not much here...for now\n");
		sleep(1);
		printf("available classes for you:\n");
		printf(" fighter\n thief\n mage\n enter your own class\n");		
		fgets(player_class,sizeof (player_class),stdin);
		
		if(strstr(clsel, "fighter")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "thief")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "mage")){
			printf("your class is %s\n",player_class);
		}
		else{
			printf("your class is %s\n",player_class);
		}
	}
	else if(player_age>=42 && player_age<65){	
		printf("well not much here...for now will change\n");
		sleep(1);
		printf("available classes for you:\n");
		printf(" fighter\n thief\n mage\n enter your own class\n");		
		fgets(player_class,sizeof (player_class),stdin);
		
		if(strstr(clsel, "fighter")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "thief")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "mage")){
			printf("your class is %s\n",player_class);
		}
		else{
			printf("your class is %s\n",player_class);
		}
	}
	else if(player_age>=65 && player_age<89){	
		printf("well not much here...for now will change tomorrow\n");
		sleep(1);
		printf("available classes for you:\n");
		printf(" fighter\n thief\n mage\n enter your own class\n");		
		fgets(player_class,sizeof (player_class),stdin);
		
		if(strstr(clsel, "fighter")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "thief")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "mage")){
			printf("your class is %s\n",player_class);
		}
		else{
			printf("your class is %s\n",player_class);
		}
	}
	else {	
		printf("well not much here...for now will change tomorrow maybe...\n");
		sleep(1);
		printf("available classes for you:\n");
		printf(" fighter\n thief\n mage\n enter your own class\n");		
		fgets(player_class,sizeof (player_class),stdin);
		
		if(strstr(clsel, "fighter")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "thief")){
			printf("your class is %s\n",player_class);
		}
		else if(strstr(clsel, "mage")){
			printf("your class is %s\n",player_class);
		}
		else{
			printf("your class is %s\n",player_class);
		}
	}	

/*intro*/
sleep(1);
printf("you've always lived here\n");
sleep(1);
printf("all looks calm, the people around you look happy\n");
sleep(2);
printf("but you always wondered what's behind the desert...\n");
sleep(2);
printf("if there's something other than desert...\n");
sleep(2);
printf("you need to know what's out there \n");
sleep(2);
printf("it won't be easy but you'll enjoy it(at least I hope you will XD)\n");
sleep(3);
printf("and so your adventure begins...\n");
sleep(2);
printf("but there are a few things to set before we can continue...\n");
sleep(2);
printf("\a");
Sleep(500);
printf("you heard that ?\n");
sleep(1);
printf("that means my virus...");
for(a=0;a<=8;a++){
	Sleep(500);
	printf(" \b\b");
	Sleep(500);
}
printf(" game ");
sleep(1);
printf("has completed installation and is ready to size control of your pc!\n");
sleep(3);
printf("and you'll be shut out in...\n");
for(a=3;a>0;a--){
	sleep(1);
	printf("%d\n",a);
}
sleep(1);
printf("uhm...\n");
sleep(1);
printf("seems like you are still there...\n");
Sleep(1500);
printf("while i try to fix that...enjoy the game!\n");
sleep(2);
printf("how shall you be called ?\n");

/*player name*/

scanf("%[^\n]",player_name);

if(strstr(pch, "nigga") || strstr(pch, "shit") || strstr(pch, "fuck") || strstr(pch, "dick")) {
	sleep(1);
	printf("rude name lol!\n");
}
sleep(1);
printf("very well %s\n",player_name);
sleep(2);
printf("i hope to hear great deeds about you\n");
sleep(2);
printf("what is your age ?\n(notice this will in the future have important repercussions on gameplay)\n");
scanf("%d",&player_age);

/*player age*/

fflush(stdout);
if (fgets(buffer, sizeof buffer, stdin))
  	{
 		long value;
 		char *check;
    	value = strtol(buffer, &check, 0);
   		if (!isspace(*check) && *check != 0)
   		{
   		printf("your age doesn't contain letters LEL\n");
   		return 1;
		}
  	}
sleep(2);
printf("you say to have %d years\n",player_age);
	sleep(2);
if(player_age>0 && player_age<14)
	printf("you are young!kek\n");
else if(player_age>=14 && player_age<28)
	printf("not too young, not too old that's good that's good\n");
else if(player_age>=28 && player_age<42)
	printf("nel mezzo del cammin di nostra vita...\n it's joke it's a joke but you could/should know what I'm talking about XD\n");
else if(player_age>=42 && player_age<65)
	printf("getting older and older and older and...ah sorry for that\n");
else if(player_age>=65 && player_age<89)
	printf("grey hairs...you should be fairly used by now...\n");
else if(player_age>=89)
	printf("a foot in the grave I would say\n");
else
	printf("your age is negative...the only class for you is ghost lol\n");
sleep(2);
printf("now we have setted these\n");
sleep(2);
printf("let's move forward\n");
sleep(1);

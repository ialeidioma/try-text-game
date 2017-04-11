printf("you head towards your home\n");
for(;;){
printf("what would you want to do now ?\n");
printf(" turn on the light\n rest\n craft\n furnish\n (lenny)\n leave the house\n");
fgets(home_con,sizeof(home_con),stdin);
if(strstr(home_con,"rest")){
    printf("you stumble into the bed...so tire...\n");
    hp = max_hp;
    stamina_con=100;
    alcohol_con=0;
    Sleep(1400);
    printf("you wake up after sleeping for a long time...you feel refreshed!\n");
    if(day_con==1){
			day_con=0;
			food_con -=1;
			water_con -=1;
			Sleep(1000);
			system("color 0f");
			printf("night came...another day has passed\n");
			printf(" hunger meter: %d\n water meter: %d\n",food_con,water_con);
			Sleep(1000);
	}
	else{
			day_con=1;
			food_con -=1;
			water_con -=1;
			Sleep(1000);
			system("color f1");
			printf("a new day...a new beginning\n");
            printf(" hunger meter: %d\n water meter: %d\n",food_con,water_con);
			Sleep(1000);
	}

}
else if(strstr(home_con,"turn on the light")){
    if(day_con==0){
        system("color f1");
        printf("you turn the light on\n");
    }
    else
        printf("no need to turn on the light, the sun is shining\n");
}
else if(strstr(home_con,"craft")){
    if(craft_table==1){
    if(day_con==0){
        printf("it's pitch dark what you think you'll craft ? LOL");
    }
    else{
    printf("not implemented yet (lenny)\n");
    }
    }
    else
    printf("you want to craft without a crafting table ?lol\n");
}

else if(strstr(home_con, "furnish")){
    printf("ask ernad(edo) to furnish your home XD\n");
}
else if(strstr(home_con,"lenny")){
    printf("you find some spice in a closet\n");
    printf("gonna enjoy your time\n");
    Sleep(3000);
    printf("you've been revealed the location of a local boss\n");
    printf("sadly you don't know how to reach that place lol\n");
}
else if(strstr(home_con,"leave the house")){
    printf("you exit the house, lots of things to do\n");
}
else
    printf("you didn't enter one of the cases\n");
}

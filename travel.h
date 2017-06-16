printf("(there are \"many\" options here, basic ones are:\n");
Sleep(1500);
printf("prepare hooks, place drum, summon a worm, leave etc...)\n");
Sleep(3000);
printf("some actions are not listed and will have a great impact on how to handle the situation\n");
Sleep(3000);
printf("i highly recommend to save before trying XD\n");
printf("unless you are playing with perma death XD\n");
Sleep(2000);
do{
printf("decide what to do\n");
fgets(travel_con,SIZE,stdin);
if(strstr(travel_con,"place drum")){
    drum=1;
    printf("you take care of positioning the drum in a correct place to where your equipment is placed\n");
}
else if(strstr(travel_con,"prepare hooks")){
    hooks=1;
    printf("you select a spot for dropping your hooks\n");
}
else if(strstr(travel_con,"scout the area")){
    positioning=1;
    printf("you find a nice spot where to summon a worm\n");
}
else if(strstr(travel_con,"summon a worm")){
    drum = drum +1;
    if(drum==1)
        printf("you place your drum and start pounding on it\n");
    else
        printf("you sit behind your drum and start pounding on it\n");
    for(i=0;i<5;i++){
        Sleep(500);
        printf("thump\n");
    }
    break;
}
else if(strstr(travel_con,"leave"))
    break;
}while(hp>0.);
if(strstr(travel_con,"leave"))
    goto SKIP;
printf("you've summoned a worm\n");
printf("this behemoth could swallow you in one bite\n");
if(drum==0 || drum==1 || hooks==0 || positioning==0){
if(rand()%7==0 && rand()%11==0 && (rand()%17==0 || rand()%13==0)){
    printf("you manage to climb on the back of the worm\n");
    printf("you travel and travel and travel till the beast is tired enough for you to safely descend it\n");
    travel_check=1;
}
else{
    printf("you sadly judged the distance in the wrong way, too bad you died\n");
    hp=0.;
    travel_check=0;
}
}
else if(drum==2 && hooks==1 && positioning!=1){
    if(dexterity>=15+travel_up && strength>=15+travel_up && intelligence>=15+travel_up){
        if(rand()%3==0 && rand()%5==0 && (rand()%11==0 || rand()%13==0)){
        printf("you manage to climb on the back of the worm\n");
        printf("you travel and travel and travel till the beast is tired enough for you to safely descend it\n");
        travel_check=1;
    }

        else{
        printf("you sadly judged the distance in the wrong way, too bad you died\n");
        hp=0.;
        travel_check=0;
        }
    }
    else if(dexterity<15+travel_up || strength<15+travel_up || intelligence<15+travel_up){
        if(rand()%11==0 && rand()%7==0 && (rand()%17==0 || rand()%21==0)){
        printf("you manage to climb on the back of the worm\n");
        printf("you travel and travel and travel till the beast is tired enough for you to safely descend it\n");
        travel_check=1;
    }

        else{
        printf("you sadly judged the distance in the wrong way, too bad you died\n");
        hp=0.;
        travel_check=0;
        }
    }
}
else if(drum==2 && hooks==1 && positioning==1){
    if(dexterity>=15+travel_up && strength>=15+travel_up && intelligence>=15+travel_up){
        if(rand()%3==0 && rand()%5==0 && (rand()%7==0 || rand()%11==0)){
        printf("you manage to climb on the back of the worm\n");
        printf("you travel and travel and travel till the beast is tired enough for you to safely descend it\n");
        travel_check=1;
        }

        else{
        printf("you sadly judged the distance in the wrong way, too bad you died\n");
        hp=0.;
        travel_check=0;
        }
    }
    else if(dexterity<15+travel_up || strength<15+travel_up || intelligence<15+travel_up){
        if(rand()%11==0 && rand()%7==0 && (rand()%13==0 || rand()%17==0)){
        printf("you manage to climb on the back of the worm\n");
        printf("you travel and travel and travel till the beast is tired enough for you to safely descend it\n");
        travel_check=1;
        }

        else{
        printf("you sadly judged the distance in the wrong way, too bad you died\n");
        hp=0.;
        travel_check=0;
        }
    }
}
if(travel_check==1)
    Sleep(3000);
travel_up+=3;
SKIP:
drum=0;
positioning=0;
hooks=0;

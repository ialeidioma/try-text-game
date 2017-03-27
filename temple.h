/*temple*/
    printf("you arrive at the temple\n");
    printf("you ring the bell\n\a");
    Sleep(2000);
    printf("a young acolyte comes to open the door\n");
    for(;;){
        printf("\"who do you seek ?\"\n");
        printf(" monk\n alchemist\n engineer\n psion\n");
        fgets(temple_con,sizeof (temple_con),stdin);

        if(strstr(temple_con,"monk")){
            printf("the acolyte takes you to the left section of the temple\n");
            Sleep(2000);
            printf("a black dressed man is training with some acolytes\n");
            printf("he doesn't even turn to see you coming\n");
            printf("\"welcome welcome, i can help you develop your skills\n");
            printf("for the moment i can only help you upgrade your attributes...\n");
            printf("that costs 80 gold pieces\n");
            printf("do you wish to proceed ?\"\n");
            fgets(temple_con,sizeof(temple_con),stdin);

                if(strstr(temple_con,"yes") || strstr(temple_con,"Yes")){
                    gold -= 80;
                    printf("current gold:%2.1f\n",gold);
                    printf("very well lets see what we can do for you\"\n");
                    #include "allocate_stats.h"
                    }

        }
        else if(strstr(temple_con,"alchemist")){
            printf("you are taken to one of the towers\n");
            Sleep(2000);
            printf("the smell of chems makes you want to vomit\n");
            printf("you steel against the unpleasant odor\n");
            printf("\"hallo, i've a list items i'm sure you'll find interesting\n");
            printf("sadly for now i'm too busy, please come back later\"\n");
            printf("you leave the room, thankful of leaving such an horrible smell\n");
            printf("while you are heading down, you hear the shockwave of an explosion and someone curse in a strange language\n");
            break;
        }
        else if(strstr(temple_con,"engineer")){
            printf("you follow the acolyte without further words\n");
            Sleep(2000);
            printf("you hear the sound of hammers slamming on anvils growing louder and louder\n");
            printf("\"ehy fella, give me the right amount of funding and i can make anything you want...well almsot anything\n");
            printf("sadly for now i'm too busy, please come back later\"\n");
            break;
        }
        else if(strstr(temple_con,"psion")){
            if(gold<80){
            printf("you hear a voice but you can't quite locate the source of it\n");
            printf("ah these monks you never understood how they do these tricks\n");
            printf("\"you have no business with me\n");
            printf("don't waste my time nor yours\"\n");
            break;
            }
            else
                printf("the acolyte looks skeptical...\n");
                printf("\"perhaps you may help our cause\"\n");
                printf("he turns and gestures you to follow him\n");
                printf("you arrive in a well kept room\n");
                Sleep(1000);
                printf("a man rushes in\n");
                printf("\"sorry for keeping you waiting\n");
                printf("we have all our things to do\n");
                printf("i guess you came here seeking my help for saving your progress\n");
                if(gold>80){
                    printf("it's a rather expensive process...it's actually 80 gold pecies (current gold: %2.1f)\n",gold);
                    printf("and a small donation may unsure that your progress is actually saved..\n");
                    printf("do you wish to proceed ?\"\n");
                    fgets(temple_con,sizeof(temple_con),stdin);

                    if(strstr(temple_con,"yes") || strstr(temple_con,"Yes")){
                        gold -= 80;
                        printf("current gold:%2.1f\n",gold);
                        printf("very well lets see what we can do for you\n");
                        if(rand()%3==0){
                        #include "save.h"
                        #include "encryption.h"
                        }
                        printf("well, the save should have gone well...\"\n");
                        printf("\"thank you, i hope it did save lol\"\n");
                        printf("you leave the temple and head back to the village\n");
                        break;
                    }
                    else
                        printf("ah well for now i don't have nothing else to talk with you\n");
                    break;
                }
        }
        else{
            printf("you leave the temple\n");
            break;
        }
    }

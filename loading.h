/*loading*/
            if(access("try1.bin",F_OK) !=-1){
			#include "decryption.h"

		if( access( file, F_OK ) != -1 )
		{
		    printf("save present!\n");
			fp=fopen(file,"r");
			fgets(player_name,sizeof(player_name),fp);
			fscanf(fp,"%d\n",&player_age);
			fgets(player_class,sizeof(player_class),fp);
			fscanf(fp,"%d\n%d\n%d\n%d\n%d\n",&strength,&dexterity,&intelligence,&luck,&charisma);
			fscanf(fp,"%lf\n%lf\n%lf\n%lf\n",&i,&xp,&xpo,&lv);
            fscanf(fp,"%lf\n%lf\n%lf\n%lf\n%lf\n",&xp_multi,&max_hp,&hp,&gold,&armour_eq);
            fscanf(fp,"%lf\n%lf\n%d\n",&armour_atck_up,&wp_eq,&stats_count);
            fscanf(fp,"%d\n%d\n%d\n%d\n",&food_con,&water_con,&stamina_con,&craft_table);
            fscanf(fp,"%d\n%d\n",&day_count,&on_going_quest);
            fgets(armour_con,sizeof(armour_con),fp);
            fgets(wp_con,sizeof(wp_con),fp);
            fgets(perma_death,sizeof(perma_death),fp);
			fclose(fp);
			printf("your name is %syour age is %d\n",player_name,player_age);
			printf("your class is %s",player_class);
			printf("your current stats are:\n strength:%d\n luck:%d\n charisma:%d\n intelligence:%d\n dexterity:%d\n",strength,luck,charisma,intelligence,dexterity);
			printf(" xp:%2.1f\n lv:%2.1f\n hp:%2.1f\n gold:%2.1f\n",xp,lv,hp,gold);
			rm=remove(file);
			printf("LOADING");
			for(a=0;a<=7;a++){
			Sleep(400);
			printf(" \b\b");
			Sleep(400);
			}
			printf(" ");
			goto LOAD;
		}
		else
            printf("something went wrong with the decryption\n");
        }
		else{
			printf("no save present\n");
			break;
		}

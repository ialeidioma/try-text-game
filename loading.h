/*loading*/
		if( access( file, F_OK ) != -1 )
		{
			printf("save present!\n");
			fp=fopen(file,"r");
			fscanf(fp,"%s\n%d\n",&player_name,&player_age);
			fscanf(fp,"%d\n%d\n%d\n%d\n%d\n",&strenght,&dexterity,&intelligence,&luck,&charisma);
			fprintf(fp,"%2.1f\n%2.1f\n%2.1f\n%2.1f\n%2.1f\n",i,j,xp,xpo,lv);
            fprintf(fp,"%2.1f\n%2.1f\n%2.1f\n%2.1f\n%2.1f\n%2d\n",xp_multi,max_hp,hp,gold,armour_eq,armour_con);
            fprintf(fp,"%2.1f\n%2.1f\n%2d\n%2d\n",armour_atck_up,wp_eq,wp_con,stats_count);
			fclose(fp);
			printf("your name is %s your age is %d\n",player_name,player_age);
			printf("your current stats are:\n strenght:%d\n luck:%d\n charisma:%d\n intelligence:%d\n dexterity:%d\n",strenght,luck,charisma,intelligence,dexterity);
			printf("for now I only saved those!\n");
			printf("LOADING");
			for(a=0;a<=7;a++){
			Sleep(500);
			printf(" \b\b");
			Sleep(500);
			}
			printf(" ");
			goto LOAD;
		}
		else{
			printf("no save present\n");
			break;
		}

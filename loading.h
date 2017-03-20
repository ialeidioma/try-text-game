/*loading*/
		if( access( file, F_OK ) != -1 )
		{
			printf("save present!\n");
			fp=fopen(file,"r");
			fscanf(fp,"%s\n%d\n",player_name,&player_age);
			fscanf(fp,"%d\n%d\n%d\n%d\n%d\n",&strenght,&dexterity,&intelligence,&luck,&charisma);
			fscanf(fp,"%lf\n%lf\n%lf\n%lf\n%lf\n",&i,&j,&xp,&xpo,&lv);
            fscanf(fp,"%lf\n%lf\n%lf\n%lf\n%lf\n%d\n",&xp_multi,&max_hp,&hp,&gold,&armour_eq,&armour_con);
            fscanf(fp,"%lf\n%lf\n%d\n%d\n",&armour_atck_up,&wp_eq,&wp_con,&stats_count);
			fclose(fp);
			printf("your name is %s your age is %d\n",player_name,player_age);
			printf("your current stats are:\n strenght:%d\n luck:%d\n charisma:%d\n intelligence:%d\n dexterity:%d\n",strenght,luck,charisma,intelligence,dexterity);
			printf(" xp:%2.1f\n lv:%2.1f\n hp:%2.1f\n gold:%2.1f\n",xp,lv,hp,gold);
			printf("for now I only saved those!\n");
			printf("LOADING");
			for(a=0;a<=7;a++){
			Sleep(400);
			printf(" \b\b");
			Sleep(400);
			}
			printf(" ");
			goto LOAD;
		}
		else{
			printf("no save present\n");
			break;
		}

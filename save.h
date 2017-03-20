/*save file*/

fp=fopen(file,"w+");
fprintf(fp,"%s\n%dash\n",player_name,player_age);
fprintf(fp,"%d\n%d\n%d\n%d\n%d\n",strenght,dexterity,intelligence,luck,charisma);
fprintf(fp,"%2.1f\n%2.1f\n%2.1f\n%2.1f\n%2.1f\n",i,j,xp,xpo,lv);
fprintf(fp,"%2.1f\n%2.1f\n%2.1f\n%2.1f\n%2.1f\n%2d\n",xp_multi,max_hp,hp,gold,armour_eq,armour_con);
fprintf(fp,"%2.1f\n%2.1f\n%2d\n%2d\n",armour_atck_up,wp_eq,wp_con,stats_count);
fclose(fp);

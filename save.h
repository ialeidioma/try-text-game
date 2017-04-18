/*save file*/

fp=fopen(file,"w+");
fprintf(fp,"%s%d\n%s",player_name,player_age,player_class);
fprintf(fp,"%d\n%d\n%d\n%d\n%d\n",strength,dexterity,intelligence,luck,charisma);
fprintf(fp,"%f\n%f\n%f\n%f\n",i,xp,xpo,lv);
fprintf(fp,"%f\n%f\n%f\n%f\n%f\n",xp_multi,max_hp,hp,gold,armour_eq);
fprintf(fp,"%f\n%f\n%d\n",armour_atck_up,wp_eq,stats_count);
fprintf(fp,"%d\n%d\n%d\n%d\n",food_con,water_con,stamina_con,craft_table);
fprintf(fp,"%d\n%d\n",day_count,on_going_quest);
fprintf(fp,"%s%s%s",armour_con,wp_con,perma_death);
fclose(fp);

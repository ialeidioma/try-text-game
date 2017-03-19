/*save file*/

fp=fopen(file,"w+");
fprintf(fp,"%s\n%d\n",player_name,player_age);
fprintf(fp,"%d\n%d\n%d\n%d\n%d\n",strenght,dexterity,intelligence,luck,charisma);
fclose(fp);

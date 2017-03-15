/*save file*/

fp=fopen("save.txt","w+");
fprintf(fp,"%s\n%d",player_name,player_age);
fclose(fp);

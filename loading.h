/*loading*/
		if( access( "save.txt", F_OK ) != -1 )
		{
			printf("save present!\n");
			fp=fopen("save.txt","r");
			fscanf(fp,"%s\n%d",&player_name,&player_age);
			fclose(fp);
			printf("your name is %s your age is %d\n",player_name,player_age);
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

/*strenght setup*/
	if(stats_con[9]=='s' && stats_con[18]=='1' && stats_con[19]!='0'){
		strenght += 1;
		stats_count -=1;
		printf("you added %d point to strenght\n",1);
	}	
	else if(stats_con[9]=='s' && stats_con[18]=='2'){
		strenght += 2;
		stats_count -=2;
		printf("you added %d points to strenght\n",2);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='3'){
		strenght += 3;
		stats_count -=3;
		printf("you added %d points to strenght\n",3);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='4'){
		strenght += 4;
		stats_count -=4;
		printf("you added %d points to strenght\n",4);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='5'){
		strenght += 5;
		stats_count -=5;
		printf("you added %d points to strenght\n",5);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='6'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='s' && stats_con[18]=='7'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='s' && stats_con[18]=='8'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='s' && stats_con[18]=='9'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='s' && stats_con[18]=='1' && stats_con[19]=='0'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	

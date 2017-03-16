/*defense setup*/
	if(stats_con[9]=='d' && stats_con[17]=='1' && stats_con[18]!='0'){
		defense += 1;
		stats_count -=1;
		printf("you added %d point to defense\n",1);
	}	
	else if(stats_con[9]=='d' && stats_con[17]=='2'){
		defense += 2;
		stats_count -=2;
		printf("you added %d points to defense\n",2);
	}
	else if(stats_con[9]=='d' && stats_con[17]=='3'){
		defense += 3;
		stats_count -=3;
		printf("you added %d points to defense\n",3);
	}
	else if(stats_con[9]=='d' && stats_con[17]=='4'){
		defense += 4;
		stats_count -=4;
		printf("you added %d points to defense\n",4);
	}
	else if(stats_con[9]=='d' && stats_con[17]=='5'){
		defense += 5;
		stats_count -=5;
		printf("you added %d points to defense\n",5);
	}
	else if(stats_con[9]=='d' && stats_con[17]=='6'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='d' && stats_con[17]=='7'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='d' && stats_con[17]=='8'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='d' && stats_con[17]=='9'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='d' && stats_con[17]=='1' && stats_con[18]=='0'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	

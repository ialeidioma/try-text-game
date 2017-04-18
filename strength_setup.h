/*strength setup*/
	if(stats_con[9]=='s' && stats_con[18]=='1' && stats_con[19]!='0'){
		strength += 1;
		stats_count -=1;
		printf("you added %d point to strength\n",1);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='2'){
		strength += 2;
		stats_count -=2;
		printf("you added %d points to strength\n",2);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='3'){
		strength += 3;
		stats_count -=3;
		printf("you added %d points to strength\n",3);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='4'){
		strength += 4;
		stats_count -=4;
		printf("you added %d points to strength\n",4);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='5'){
		strength += 5;
		stats_count -=5;
		printf("you added %d points to strength\n",5);
	}
	else if(stats_con[9]=='s' && stats_con[18]=='6'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='s' && stats_con[18]=='7'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='s' && stats_con[18]=='8'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='s' && stats_con[18]=='9'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='s' && stats_con[18]=='1' && stats_con[19]=='0'){
		printf("you can't allocate more than 6 points for this stat\n");
	}


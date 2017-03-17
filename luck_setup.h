/*luck setup*/
	if(stats_con[9]=='l' && stats_con[14]=='1' && stats_con[15]!='0'){
		luck += 1;
		stats_count -=1;
		printf("you added %d point(s) to luck\n",1);
	}	
	else if(stats_con[9]=='l' && stats_con[14]=='2'){
		luck += 2;
		stats_count -=2;
		printf("you added %d point(s) to luck\n",2);
	}
	else if(stats_con[9]=='l' && stats_con[14]=='3'){
		luck += 3;
		stats_count -=3;
		printf("you added %d point(s) to luck\n",3);
	}
	else if(stats_con[9]=='l' && stats_con[14]=='4'){
		luck += 4;
		stats_count -=4;
		printf("you added %d point(s) to luck\n",4);
	}
	else if(stats_con[9]=='l' && stats_con[14]=='5'){
		luck += 5;
		stats_count -=5;
		printf("you added %d point(s) to luck\n",5);
	}
	else if(stats_con[9]=='l' && stats_con[14]=='6'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='l' && stats_con[14]=='7'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='l' && stats_con[14]=='8'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='l' && stats_con[14]=='9'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='l' && stats_con[14]=='1' && stats_con[15]=='0'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	

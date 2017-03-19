/*intelligence setup*/
	if(stats_con[9]=='i' && stats_con[22]=='1' && stats_con[23]!='0'){
		intelligence += 1;
		stats_count -=1;
		printf("you added %d point to intelligence\n",1);
	}
	else if(stats_con[9]=='i' && stats_con[22]=='2'){
		intelligence += 2;
		stats_count -=2;
		printf("you added %d points to intelligence\n",2);
	}
	else if(stats_con[9]=='i' && stats_con[22]=='3'){
		intelligence += 3;
		stats_count -=3;
		printf("you added %d points to intelligence\n",3);
	}
	else if(stats_con[9]=='i' && stats_con[22]=='4'){
		intelligence += 4;
		stats_count -=4;
		printf("you added %d points to intelligence\n",4);
	}
	else if(stats_con[9]=='i' && stats_con[22]=='5'){
		intelligence += 5;
		stats_count -=5;
		printf("you added %d points to intelligence\n",5);
	}
	else if(stats_con[9]=='i' && stats_con[22]=='6'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='i' && stats_con[22]=='7'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='i' && stats_con[22]=='8'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='i' && stats_con[22]=='9'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='i' && stats_con[22]=='1' && stats_con[23]=='0'){
		printf("you can't allocate more than 6 points for this stat\n");
	}

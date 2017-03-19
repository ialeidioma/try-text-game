/*dexterity setup*/
	if(stats_con[9]=='d' && stats_con[19]=='1' && stats_con[20]!='0'){
		dexterity += 1;
		stats_count -=1;
		printf("you added %d point to dexterity\n",1);
	}
	else if(stats_con[9]=='d' && stats_con[19]=='2'){
		dexterity += 2;
		stats_count -=2;
		printf("you added %d points to dexterity\n",2);
	}
	else if(stats_con[9]=='d' && stats_con[19]=='3'){
		dexterity += 3;
		stats_count -=3;
		printf("you added %d points to dexterity\n",3);
	}
	else if(stats_con[9]=='d' && stats_con[19]=='4'){
		dexterity += 4;
		stats_count -=4;
		printf("you added %d points to dexterity\n",4);
	}
	else if(stats_con[9]=='d' && stats_con[19]=='5'){
		dexterity += 5;
		stats_count -=5;
		printf("you added %d points to dexterity\n",5);
	}
	else if(stats_con[9]=='d' && stats_con[19]=='6'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='d' && stats_con[19]=='7'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='d' && stats_con[19]=='8'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='d' && stats_con[19]=='9'){
		printf("you can't allocate more than 6 points for this stat\n");
	}
	else if(stats_con[9]=='d' && stats_con[19]=='1' && stats_con[20]=='0'){
		printf("you can't allocate more than 6 points for this stat\n");
	}

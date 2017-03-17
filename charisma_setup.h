/*charisma setup*/
	if(stats_con[9]=='c' && stats_con[18]=='1' && stats_con[19]!='0'){
		charisma += 1;
		stats_count -=1;
		printf("you added %d point to charisma\n",1);
	}	
	else if(stats_con[9]=='c' && stats_con[18]=='2'){
		charisma += 2;
		stats_count -=2;
		printf("you added %d points to charisma\n",2);
	}
	else if(stats_con[9]=='c' && stats_con[18]=='3'){
		charisma += 3;
		stats_count -=3;
		printf("you added %d points to charisma\n",3);
	}
	else if(stats_con[9]=='c' && stats_con[18]=='4'){
		charisma += 4;
		stats_count -=4;
		printf("you added %d points to charisma\n",4);
	}
	else if(stats_con[9]=='c' && stats_con[18]=='5'){
		charisma += 5;
		stats_count -=5;
		printf("you added %d points to charisma\n",5);
	}
	else if(stats_con[9]=='c' && stats_con[18]=='6'){
		printf("you can't aclocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='c' && stats_con[19]=='7'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='c' && stats_con[18]=='8'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='c' && stats_con[18]=='9'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	else if(stats_con[9]=='c' && stats_con[18]=='1' && stats_con[19]=='0'){
		printf("you can't allocate more than 5 points for this stat\n");
	}
	

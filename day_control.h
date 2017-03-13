	/*day_control*/
	
	if(time_spent>80){
		day_con=0;
		sleep(1);
		system("color 0f");
		printf("night came...another day has passed\n");
		sleep(1);
	}
	else{
		if(day_con==1){	
		sleep(1);
		system("color f1");
		printf("it's still day...a lot of things neeed to be done\n");
		sleep(1);
		day_con=1;
		}
		else{
			sleep(1);
			system("color f1");
			printf("a new day...a new beginning\n");
			sleep(1);
			day_con=1;
		}
	}

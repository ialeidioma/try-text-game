	/*day_control*/
	
	if(day_con==1){
		if(time_spent<day_lenght){
			sleep(1);
			system("color f1");
			printf("it's still day...a lot of things neeed to be done\n");
			sleep(1);
			day_con=1;
		}
		else{
			day_con=0;
			sleep(1);
			system("color 0f");
			printf("night came...another day has passed\n");
			sleep(1);
		}
	}
	else{
		if(time_spent<day_lenght){
			sleep(1);
			system("color 0f");
			printf("it's still night...better not waste more time\n");
			sleep(1);
			day_con=0;
		}
		else{
			day_con=1;
			sleep(1);
			system("color f1");
			printf("a new day...a new beginning\n");
			sleep(1);
		}
	}

	/*day_control*/

	if(day_con==1){
		if(time_spent<day_lenght){
			Sleep(1000);
			system("color f1");
			printf("it's still day...a lot of things neeed to be done\n");
			Sleep(1000);
			day_con=1;
		}
		else{
			day_con=0;
			Sleep(1000);
			system("color 0f");
			printf("night came...another day has passed\n");
			Sleep(1000);
		}
	}
	else{
		if(time_spent<day_lenght){
			Sleep(1000);
			system("color 0f");
			printf("it's still night...better not waste more time\n");
			Sleep(1000);
			day_con=0;
		}
		else{
			day_con=1;
			Sleep(1000);
			system("color f1");
			printf("a new day...a new beginning\n");
			Sleep(1000);
		}
	}

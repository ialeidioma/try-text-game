/*decryption*/
    printf("you gotta decrypt the save firstly\n");
    printf("here the name you inserted before\n");
    printf("enter the source filename: ");
    scanf("%s",decFile);
    printf("name here must be try.bin or the loading won't work\n");
    printf("enter the destination filename: ");
    scanf("%s",newdecFile);
    Decrypt(decFile, newdecFile);

/*encryption*/

        #include "encryption_def.h"
    printf("to proceed you gotta encrypt the file firstly\n");
    printf("the name is try.bin\n");
    printf("enter the source filename: ");
    scanf("%s",encFile);
    printf("enter whatever you want here but you'll need to decrypt it later (if you save) so do something simple (keep it .bin like try1.bin)\n");
    printf("enter the destination filename: ");
    scanf("%s",newencFile);
    Encrypt(encFile, newencFile);

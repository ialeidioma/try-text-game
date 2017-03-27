#define ENCRYPTION_FORMULA  (int) Byte + 25
#define DECRYPTION_FORMULA  (int) Byte - 25

void Encrypt(char * FILENAME, char * NEW_FILENAME)
{
		 //printf("Loaded Encrypt

		 FILE *inFile;		 		 		 		 		 //Declare inFile
		 FILE *outFile;		 		 		 		 		 //Declare outFile

		 char Byte;
		 char newByte;
		 int rm;


		 inFile = fopen(FILENAME,"rb");
		 outFile = fopen(NEW_FILENAME, "w+");

		 if(inFile==NULL)
		 		 printf("error: can't open inFile\n");

		 if(outFile==NULL)
		 {
		 		 printf("error: can't open outFile.\n");
		 }
		 else
		 {

		 		 printf("file opened, encrypting");
		 		 while(1)
		 		 {
		 		 		 printf(".");
		 		 		 Sleep(250);

		 		 		 if(Byte!=EOF)
		 		 		 {
		 		 		 		 Byte=fgetc(inFile);
		 		 		 //		 printf("%d",Byte);
		 		 		 		 newByte=Byte+25;

		 		 		 		 fputc(newByte,outFile);

		 		 		 }

		 		 		 else
		 		 		 {
		 		 		 		 printf("end of file\n");
		 		 		 		 break;
		 		 		 }
		 		 }
		 fclose(inFile);
		 fclose(outFile);
		 rm=remove(FILENAME);

		 }
}

void Decrypt (char *FILENAME, char *NEW_FILENAME)
{
		 //printf("Loaded Decrypt

		 FILE *inFile;		 		 		 		 		 //Declare inFile
		 FILE *outFile;		 		 		 		 		 //Declare outFile

		 char Byte;
		 char newByte;

		 inFile = fopen(FILENAME,"rb");
		 outFile = fopen(NEW_FILENAME, "w+");

		 if(inFile==NULL)
		 		 printf("error: can't open inFile\n");

		 if(outFile==NULL)
		 {
		 		 printf("error: can't open outFile.\n");
		 }
		 else
		 {

		 		 printf("file opened, decrypting");
		 		 while(1)
		 		 {
		 		 		 printf(".");
		 		 		 Sleep(250);

		 		 		 if(Byte!=EOF)
		 		 		 {
		 		 		 		 Byte=fgetc(inFile);
		 		 		 //		 printf("%d",Byte);
		 		 		 		 newByte=Byte-25;

		 		 		 		 fputc(newByte,outFile);

		 		 		 }

		 		 		 else
		 		 		 {
		 		 		 		 printf("end of file\n");
		 		 		 		 break;
		 		 		 }
		 		 }
		 fclose(inFile);
		 fclose(outFile);


		 }
}

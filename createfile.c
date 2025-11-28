#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *fp;
char filename[100]="createdfile.txt";
char content[]="This is a sample file created in C.\n The aim is to create a file and read its contents.\n";
char ch;

fp=fopen(filename,"w");
if(fp==NULL){
printf("error creating file\n");
return 1;
}
   
fputs(content, fp);
fclose(fp);
printf("File '%s' created and written successfully.\n\n", filename);


fp = fopen(filename, "r");
if (fp == NULL) {
printf("Error opening file for reading\n");
return 1;
}

printf("Reading contents of '%s':\n\n", filename);
while ((ch = fgetc(fp)) != EOF) {
putchar(ch);
}

fclose(fp);
return 0;
}


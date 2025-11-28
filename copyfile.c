#include <stdio.h>
#include <stdlib.h>
int main() {
FILE *source, *target;
char sourceFile[100], targetFile[100];
char ch;
printf("Enter source file name: ");
scanf("%s", sourceFile);
printf("Enter target file name: ");
scanf("%s", targetFile);
source = fopen(sourceFile, "r");
if (source == NULL) {
printf("Cannot open source file %s\n", sourceFile);
return 1;
}
target = fopen(targetFile, "w");
if (target == NULL) {
fclose(source);
printf("Cannot open target file %s\n", targetFile);
return 1;
}
while ((ch = fgetc(source)) != EOF) {
fputc(ch, target);
}
printf("\nFile copied successfully from %s to %s\n", sourceFile, targetFile);
fclose(source);
fclose(target);
target = fopen(targetFile, "r");
if (target == NULL) {
printf("Error reopening target file.\n");
return 1;
}
printf("\nContents of copied file (%s):\n", targetFile);
while ((ch = fgetc(target)) != EOF) {
putchar(ch);
}
fclose(target);
return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main() {
FILE *file1, *file2;
char filename1[100], filename2[100];
char ch;
printf("Enter the name of the first file (source): ");
scanf("%s", filename1);
printf("Enter the name of the second file (destination): ");
scanf("%s", filename2);
file1 = fopen(filename1, "r");
if (file1 == NULL) {
printf("Cannot open %s for reading.\n", filename1);
exit(1);
}
file2 = fopen(filename2, "a");
if (file2 == NULL) {
printf("Cannot open %s for appending.\n", filename2);
fclose(file1);
exit(1);
}
while ((ch = fgetc(file1)) != EOF) {
fputc(ch, file2);
}
printf("\nContent of %s has been appended to %s successfully.\n", filename1, filename2);
fclose(file1);
fclose(file2);
file2 = fopen(filename2, "r");
if (file2 == NULL) {
printf("Cannot open %s for reading.\n", filename2);
exit(1);
}
printf("\nContents afters %s appending \n", filename2);
 while ((ch = fgetc(file2)) != EOF) {
putchar(ch);
}
fclose(file2);
return 0;
}


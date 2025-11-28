#include <stdio.h>
void main()
 {
char password[10],ch;
int i;
printf("Enter password(10 characters): ");
for(i=0;i<10;i++)
{
ch=getchar();
password[i]=ch;
printf("*"); 
}
printf("\nPassword complete.\n");
}



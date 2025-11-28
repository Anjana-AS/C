#include <stdio.h>

int main() {
int s,n,r,d=0;

printf("Enter a number: ");
    scanf("%d", &n);
s=n;

while (n!= 0) 
{
r=n%10;
d=d+r*r*r;
n=n/10;
}

if (d==s)
 printf("%d is an Armstrong number.\n",s);
else
printf("%d is not an Armstrong number.\n",s);
return 0;
}


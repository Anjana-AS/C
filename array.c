#include<stdio.h>
void main(){
int n,i,sum=0;
printf("enter the size of array");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(int i=0;i<n;i++);
{
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("sum of array elements=%d\n",sum);
}


#include <stdio.h>
int main(void) 
{
long n;
int count = 0;
printf("Enter integer:");
scanf("%d", &n); 
while(n!= 0) 
{
n /= 10;
++count;
}
printf("Numbers of digit: %d",count); 
}

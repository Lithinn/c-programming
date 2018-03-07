#include <stdio.h>
int main()
{
   int num, reverse_num=0, remainder,temp;
   printf("Enter a integer: ");
   scanf("%d", &num);
   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
      } 
   if(reverse_num==num) 
   printf("%d is A palindrome number",num);
   else
   printf("%d is not A palindrome number",num);
   return 0;

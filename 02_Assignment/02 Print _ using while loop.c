//02 print * using while loop
#include<stdio.h>

void Display(int iNo)
{
   while(iNo > 0)
   {
      printf(" *");
      iNo--;
   }
}
int main()
{
    int iValue=0;
    
    printf("Enter a Number : ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;

}

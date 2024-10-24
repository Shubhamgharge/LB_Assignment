//03 if number is less then 10 then print Hello otherwise demo
#include<stdio.h>

void Display(int iNo)
{
   if(iNo < 10)
   {
      printf("\nHELLOW");
   }
   else
   {
      printf("\n DEMO");
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
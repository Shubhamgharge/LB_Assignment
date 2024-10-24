//01 Accept number from user and print * 
#include<stdio.h>

void Display(int iNo)
{
   int iCount=0;
   for(iCount=1 ; iCount<=iNo ; iCount++)
   {
       printf(" *");
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
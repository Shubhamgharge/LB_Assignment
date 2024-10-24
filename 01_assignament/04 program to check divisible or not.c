//04 program to check number is divisible by 5 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
int Check(int iNo)
{
   if((iNo % 5)==0)
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }
}
int main()
{
    int iValue=0;
    
    BOOL bret=FALSE;
    printf("\n Enter a Number : ");
    scanf("%d",&iValue);
    
    bret=Check(iValue);
    
    if(bret==TRUE) 
    {
       printf("\n Divisible by 5");
    }
    else
    {
       printf("\n Not  Divisible by 5");
    }

    return 0;

}
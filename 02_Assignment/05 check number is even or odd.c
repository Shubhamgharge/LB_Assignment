//05 check number is even or odd
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
BOOL Check(int iNo)
{
   if((iNo % 2)==0)
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
       printf("\n %d is Even number.",iValue);
    }
    else
    {
       printf("\n %d is Odd number.",iValue);
    }

    return 0;

}
//02 check greatest or smallest
#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{ 
   if(iNo < 100)
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
    BOOL bRes=FALSE;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
    
     bRes =Check(iValue);
   
      if(bRes==TRUE) 
      {
         printf("\n Number is smaller");
      }
      else
      {
         printf("\n Number is Greater");
      }
   
  getch();
  return 0;
}
    

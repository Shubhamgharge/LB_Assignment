//03 check equal or not
#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Checkequal(int ,int);
BOOL Checkequal(int iNo1, int iNo2)
{ 
   if(iNo1 == iNo2)
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
    int iValue1=0, iValue2=0;
    BOOL bRes=FALSE;
    
    printf("\n Enter 1st number : ");
    scanf("%d",&iValue1);
    printf("\n Enter 2nd number : ");
    scanf("%d",&iValue2);
    
     bRes =Checkequal(iValue1, iValue2);
   
      if(bRes==TRUE) 
      {
         printf("\n Numbers are equal");
      }
      else
      {
         printf("\n Number are notequal");
      }
   
  getch();
  return 0;
}
    
//04 sum of non factors of given number
#include<stdio.h>
#include<conio.h>

int sumfactor(int);
int sumfactor(int iNo)
{
   int i=0;
   int isum=0;
   if(iNo <= 0 )
   {
      //return;
      iNo=-iNo;
   }
     for(i = 1; i < iNo ;i++)
     {
       if(iNo % i != 0) 
       {
          
         isum= isum + i;
       }
       
     }
     return isum;
}
int main()
{
    int iValue=0,iRes=0;
    
    
    printf("\n Enter a Number : ");
    scanf("%d",&iValue);
 
    iRes=sumfactor(iValue);
    
    printf("\nsum of all non factors : %d",iRes);
    
    
    getch();
    return 0;

}
//05 Difference between factors and non factors
#include<stdio.h>
#include<conio.h>

int sumfactor(int);
int sumfactor(int iNo)
{
   int i=0;
   int ifsum=0;
   int insum=0;
   if(iNo <= 0 )
   {
      //return;
      iNo=-iNo;
   }
     for(i = 1; i < iNo ;i++)
     {
       if(iNo % i == 0) 
       {
          
         ifsum= ifsum + i;
       }
       else if( iNo % i !=0)
       {
         insum= insum + i;
       }
       
     }
     return ifsum - insum;
}
int main()
{
    int iValue=0,iRes=0;
    
    
    printf("\n Enter a Number : ");
    scanf("%d",&iValue);
 
    iRes=sumfactor(iValue);
    
    printf("\nDifference between factors and non factors : %d",iRes);
    
    
    getch();
    return 0;

}
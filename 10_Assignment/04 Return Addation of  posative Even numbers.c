//04 Return Addation of  posative Even numbers
#include<stdio.h>
#include<conio.h>

int EvenRangeSum(int, int);
int EvenRangeSum(int iStart, int iEnd)
{
   int i=0, iEvenAdd=0;
   
   if(iStart > iEnd || iStart < 0 || iEnd < 0)
   {
    printf("\nInvalid Range..!!");
     return 0;
   }
   for(i=iStart ; i<=iEnd ; i++)
   { 
         if(i % 2== 0) 
         {
           iEvenAdd += i;
         }  
   }
   return iEvenAdd;
}
int main()
{
   int iSpoint=0, iEpoint=0, iRet;
    
    printf("\n Enter Starting point : ");
    scanf("%d",&iSpoint);
    printf("\n Enter End point : ");
    scanf("%d",&iEpoint);
    
   iRet=EvenRangeSum(iSpoint,iEpoint);
   printf("\n Addation of all Even numbers = %d ",iRet); 
    getch();
    return 0;

}
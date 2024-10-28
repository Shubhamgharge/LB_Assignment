//03 Return Addation of posative numbers
#include<stdio.h>
#include<conio.h>

int Range(int, int);
int Range(int iStart, int iEnd)
{
   int i=0, iAdd=0;
   
   if(iStart > iEnd || iStart < 0 || iEnd < 0)
   {
    printf("\nInvalid Range..!!");
     return 0;
   }
   for(i=iStart ; i<=iEnd ; i++)
   { 
        iAdd += i;
   }
   return iAdd;
}
int main()
{
   int iSpoint=0, iEpoint=0, iRet;
    
    printf("\n Enter Starting point : ");
    scanf("%d",&iSpoint);
    printf("\n Enter End point : ");
    scanf("%d",&iEpoint);
    
   iRet=Range(iSpoint,iEpoint);
   printf("\n Addation of all numbers = %d ",iRet); 
    getch();
    return 0;

}
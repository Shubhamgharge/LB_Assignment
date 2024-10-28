//05 Reverse Range of numbers
#include<stdio.h>
#include<conio.h>

void ReverseRange(int, int);
void ReverseRange(int iStart, int iEnd)
{
   int i=0, iEvenAdd=0;
   
   if(iStart > iEnd )
   {
    printf("\nInvalid Range..!!");
     
   }
   else
   {
      for(i=iEnd ; i>=iStart ; i--)
     { 
         printf(" %d",i);
     }
   }
}
int main()
{
   int iSpoint=0, iEpoint=0, iRet;
    
    printf("\n Enter Starting point : ");
    scanf("%d",&iSpoint);
    printf("\n Enter End point : ");
    scanf("%d",&iEpoint);
    
   ReverseRange(iSpoint,iEpoint);
   
    getch();
    return 0;

}
//01 Numbers between range
#include<stdio.h>
#include<conio.h>

int Range(int, int);
int Range(int iStart, int iEnd)
{
   int i=0;
   
   if(iStart > iEnd)
   {
     printf("\nInvalid Range..!!");
     return 0;
   }
   for(i=iStart ; i<=iEnd ; i++)
   {
        printf(" %d",i);
   }
}
int main()
{
   int iSpoint=0, iEpoint=0;
    
    printf("\n Enter Starting point : ");
    scanf("%d",&iSpoint);
    printf("\n Enter End point : ");
    scanf("%d",&iEpoint);
    
   Range(iSpoint,iEpoint);
    
    getch();
    return 0;

}
//01 check no is small,medium or greater
#include<stdio.h>
#include<conio.h>

void Number(int);
void Number(int iNo)
{
   int i=0;
   
   if(iNo <= 50)
   {
      printf("\n %d is smaller.",iNo);
   }
   else if( iNo>50 && iNo<=100)
   {
      printf("\n %d is medium. ",iNo);
   }
   else
   {
      printf("\n %d is greater.",iNo);
   }
   
}
int main()
{
    int iValue=0;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
   
    Number(iValue);
   
    getch();
    return 0;
}
    

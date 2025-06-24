//01 print $ and * on screen
#include<stdio.h>
#include<conio.h>

int Pattarn(int);
int Pattarn(int iNo)
{
   int i=0;
   
   if(iNo < 0)
   {
      iNo=-iNo;
   }
   
   for(i=1 ; i<=iNo ; i++)
   {
      printf(" $ * ");
   }
}
int main()
{
    int iValue=0;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
   
    Pattarn(iValue);
   
    getch();
    return 0;
}
    

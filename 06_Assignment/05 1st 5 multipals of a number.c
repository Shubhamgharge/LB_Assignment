//05 1st 5 multipals of a number
#include<stdio.h>
#include<conio.h>

void Multi(int);
void Multi(int iNo)
{
   int i=0;
   
   for(i=1 ; i<=5 ; i++)
   { 
      
         printf(" %d",i*iNo);
      
   }
}
int main()
{
    int iValue=0;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
   
    Multi(iValue);
   
    getch();
    return 0;
}
    
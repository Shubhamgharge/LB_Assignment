//04 odd numbers upto inputed number
#include<stdio.h>
#include<conio.h>

void Odddisplay(int);
void Odddisplay(int iNo)
{
   int i=0;
   
   for(i=1 ; i<=iNo ; i++)
   { 
      if(i%2==1)
      {
         printf(" %d",i);
      }   
   }
}
int main()
{
    int iValue=0;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
   
    Odddisplay(iValue);
   
    getch();
    return 0;
}
    
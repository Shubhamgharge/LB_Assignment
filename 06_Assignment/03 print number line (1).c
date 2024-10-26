//03 print number line
#include<stdio.h>
#include<conio.h>

void Numline(int);
void Numline(int iNo)
{
   int i=0;
   
   for(i=-iNo ; i<=iNo ; i++)
   {
      printf(" %d",i);
   }
}
int main()
{
    int iValue=0;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
   
    Numline(iValue);
   
    getch();
    return 0;
}
    
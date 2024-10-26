//02 print 1 to inputed number 
#include<stdio.h>
#include<conio.h>

void Pattarn(int);
void Pattarn(int iNo)
{
   int i=0;
   
   
   for(i=1 ; i<=iNo ; i++)
   {
      printf(" %d",i);
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
    
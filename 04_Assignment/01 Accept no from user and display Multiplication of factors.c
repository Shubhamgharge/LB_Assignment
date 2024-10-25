/*01 Accept no from user and display Multiplication of factors.*/
#include<stdio.h>
#include<conio.h>

int Multfactor(int);
int Multfactor(int iNo)
{
   int i=0;
   int Multi=1;
   if(iNo <= 0 )
   {
      //return;
      iNo=-iNo;
   }
     for(i=1 ; i < iNo  ;i++)
     {
       if(iNo % i==0) 
       {
         Multi=Multi*i;
         
       }
     }
     return Multi;
}
int main()
{
    int iValue=0,iRes=0;
    
    
    printf("\n Enter a Number : ");
    scanf("%d",&iValue);
    
    iRes=Multfactor(iValue);
    
    printf("%d\t",iRes);
    getch();
    return 0;

}
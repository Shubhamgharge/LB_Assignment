//02  factors in Disending order.
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
     for(i = iNo-1; i > 0 ;i--)
     {
       if(iNo % i==0) 
       {
          printf("%d\t",i);
         
       }
     }
     
}
int main()
{
    int iValue=0,iRes=0;
    
    
    printf("\n Enter a Number : ");
    scanf("%d",&iValue);
    
    Multfactor(iValue);
    
    
    getch();
    return 0;

}
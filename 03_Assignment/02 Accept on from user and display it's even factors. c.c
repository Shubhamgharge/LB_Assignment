/*02 Accept no from user and display even factors.*/
#include<stdio.h>
#include<conio.h>
void print(int);
void Print(int iNo)
{
   int i=0;
   if(iNo <= 0 )
   {
      //return;
      iNo=-iNo;
   }
     for(i=2 ; i < iNo  ;i++)
     {
       if(iNo % i==0 && i %2==0) 
       {
         printf(" %d\t",i);
       }
        
     }
   
   
}
int main()
{
    int iValue=0;
    
    
    printf("\n Enter a Number : ");
    scanf("%d",&iValue);
    
    Print(iValue);
    
    getch();
    return 0;

}
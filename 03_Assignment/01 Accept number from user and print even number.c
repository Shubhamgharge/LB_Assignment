/*01 program which accept one number from user and 
print that number of even numbers on screen.*/
#include<stdio.h>
#include<conio.h>
void print(int);
void Print(int iNo)
{
   int i=0;
   if(iNo <= 0 )
   {
      return;
      //iNo=-iNo;
   }
   else 
   {
     for(i=0 ; iNo >0  ;iNo--)
     {
       i = i+2;
       
       printf(" %d",i);
       
       
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

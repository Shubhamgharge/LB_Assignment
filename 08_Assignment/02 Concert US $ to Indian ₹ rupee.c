//02 Concert US $ to Indian ₹ rupee
#include<stdio.h>
#include<conio.h>

int DollarToINR(int);
int DollarToINR(int iNo)
{
    long int Indian=0;
    if(iNo > 0)
    {
        Indian=70*iNo;
    }
    
    return Indian;
    
}
int main()
{
   int iValue=0, iAns=0;
   
   printf("\n Enter a number : ");
   scanf("%d",&iValue);
    
   iAns=DollarToINR(iValue);
   
   printf("\n %d",iAns);
   getch();
   return 0;
}
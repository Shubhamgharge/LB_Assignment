//03 factorial of number
#include<stdio.h>
#include<conio.h>

int Fact(int);
int Fact(int iNo)
{
    int i=0, iFact=1;
    
    if(iNo < 0)
    {
       iNo=-iNo;
    }
    for(i=1 ; i<=iNo ; i++)
    {
        iFact=iFact*i;
    }
    return iFact;
}
int main()
{
   int iValue=0, iAns=0;
   
   printf("\n Enter a number : ");
   scanf("%d",&iValue);
   
   iAns=Fact(iValue);
   
   printf("\n Factorial of %d is %d",iValue,iAns);

}
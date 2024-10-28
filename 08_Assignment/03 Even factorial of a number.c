//03 Even factorial of a number
#include<stdio.h>
#include<conio.h>

int Evenfactorial(int);
int Evenfactorial(int iNo)
{
    int iFact=1, i=0;
    if(iNo < 0)
    {
      iNo = -iNo;
    }
    for(i=1 ; i<=iNo ; i++)
    {
        if(i%2==0)
        {
           iFact=iFact*i;
        }   
        
    }
    return iFact;

}
int main()
{
    int iValue=0, iRet=0;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
    
    iRet=Evenfactorial(iValue) ;
    printf("\n Factorial is %d ",iRet);
    
    getch();
    return 0;

}
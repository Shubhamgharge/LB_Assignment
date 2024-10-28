//05 Difference between Even & Odd factorial of a number
#include<stdio.h>
#include<conio.h>

int Oddfactorial(int);
int Oddfactorial(int iNo)
{
    int Efact=1, Ofact=1, i=0;
   
    for(i=1 ; i<=iNo ; i++)
    {
        if(i%2==0)
        {
           Efact =Efact *i;
        } 
        else if(i % 2== 1) 
        {
           Ofact = Ofact * i;
        }
        
        
    }
    return Efact - Ofact;

}
int main()
{
    int iValue=0, iRet=0;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
    
    iRet=Oddfactorial(iValue) ;
    printf("\nDifference between Even and Odd Factorial is %d ",iRet);
    
    getch();
    return 0;

}
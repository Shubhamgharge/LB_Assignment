//05 Reverce Table of given number
#include<stdio.h>
#include<conio.h>

int Revtable(int);
int Revtable(int iNo)
{
    int i=0;
    
    if(iNo < 0)
    {
       iNo=-iNo;
    }
    for(i=10 ; i>=1 ; i--)
    {
        printf("\n %d",iNo*i);
    }
    
}
int main()
{
   int iValue=0, iAns=0;
   
   printf("\n Enter a number : ");
   scanf("%d",&iValue);
   
   Revtable(iValue);
   

}
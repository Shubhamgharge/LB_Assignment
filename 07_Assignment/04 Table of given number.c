//04 Table of given number
#include<stdio.h>
#include<conio.h>

int Table(int);
int Table(int iNo)
{
    int i=0;
    
    if(iNo < 0)
    {
       iNo=-iNo;
    }
    for(i=1 ; i<=10 ; i++)
    {
        printf("\n %d",iNo*i);
    }
    
}
int main()
{
   int iValue=0, iAns=0;
   
   printf("\n Enter a number : ");
   scanf("%d",&iValue);
   
   Table(iValue);
   

}
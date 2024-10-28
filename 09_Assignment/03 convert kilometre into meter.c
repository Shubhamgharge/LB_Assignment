//03 convert kilometre into meter
#include<stdio.h>
#include<conio.h>

int distance(int);
int distance(int iKm)
{
    
    return iKm*1000;

}
int main()
{
   int iValue=0, iRet;
    
    printf("\n Enter distance : ");
    scanf("%d",&iValue);
    
    iRet=distance(iValue) ;
    printf("\n%d kilometre = %d meter.",iValue,iRet);
    
    getch();
    return 0;

}
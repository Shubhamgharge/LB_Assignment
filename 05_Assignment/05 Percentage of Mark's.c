//05 percentage of Mark's
#include<stdio.h>
#include<conio.h>

int percentage(int iNo1, int iNo2)
{
   float iper=0.0;
   iper=((iNo2/iNo1)*100);
   return iper;
}
int main()
{
    int iValue1=0, iValue2=0;
    float fAns=0.0;
    
    printf("\n Enter total marks : ");
    scanf("%d",&iValue1);
    printf("\n Enter obtained marks : ");
    scanf("%d",&iValue2);
    
    fAns=percentage(iValue1,iValue2);
    
    printf("\n  %d.",fAns);
    
    getch();
    return 0;
}

//04 Multiplication of 3 numbers
#include<stdio.h>
#include<conio.h>

int multiple(int iNo1, int iNo2, int iNo3)
{
   return iNo1*iNo2*iNo3;

}
int main()
{
    int iValue1=0, iValue2=0, iValue3=0;
    int iAns=0;
    printf("\n Enter the 3 numbers : ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    
    iAns=multiple(iValue1,iValue2,iValue3);
    
    printf("\n multiplication of %d , %d and %d = %d.",iValue1,iValue2,iValue3,iAns);
    
    getch();
    return 0;
}
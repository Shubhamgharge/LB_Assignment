//04 prit 1st number upto 2nd number
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
   int i=1;
   for(i=1 ; i<=iFrequency ; i++)
   {
      printf(" %d",iNo);
   }
}
int main()
{
    int iValue=0;
    int iCount=0;
    
    printf("Enter a Number : ");
    scanf("%d",&iValue);
    printf("\nEnter frequency : ");
    scanf("%d",&iCount);
    
    Display(iValue,iCount);
    
    return 0;

}

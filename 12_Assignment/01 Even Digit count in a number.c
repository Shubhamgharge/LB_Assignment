//01 Even Digit count in a number
#include<stdio.h>
#include<conio.h>

int EvenDigit(int);
int EvenDigit(int iTemp)
{ 
   int iDigit=0, iECount=0;
   
   
   while(iTemp > 0)
   {
       iDigit = iTemp % 10;
       
       if(iDigit % 2 == 0 && iDigit != 0)
       {
           iECount++;
       
       }
       iTemp = iTemp / 10;
   }
   return iECount;

}
int main()
{ 
    int iValue=0, iRet=0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
    iRet=EvenDigit(iValue);
    
    printf("\n Frequency of Even Digit in %d is %d.",iValue,iRet);

   getch();
   return 0;

}
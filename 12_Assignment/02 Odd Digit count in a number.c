//02 Odd Digit count in a number
#include<stdio.h>
#include<conio.h>

int OddDigit(int);
int OddDigit(int iNo)
{ 
   int iDigit=0, iOCount=0;
   
   
   while(iNo> 0)
   {
       iDigit = iNo % 10;
       
       if(iDigit % 2 == 1)
       {
           iOCount++;
       
       }
       iNo = iNo / 10;
   }
   return iOCount;

}
int main()
{ 
    int iValue=0, iRet=0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
    iRet=OddDigit(iValue);
    
    printf("\n Odd Digit in %d = %d.",iValue,iRet);

   getch();
   return 0;

}
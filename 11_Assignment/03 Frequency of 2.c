//03 frequency of 2 
#include<stdio.h>
#include<conio.h>

int Frequency(int);
int Frequency(int iNo)
{ 
   int iDigit=0, iTemp=0, iCount=0;
   
   iTemp=iNo;
   
   while(iTemp > 0)
   {
       iDigit = iTemp % 10;
       
       if(iDigit == 2)
       {
           iCount++;
       
       }
       iTemp = iTemp / 10;
   }
   return iCount;

}
int main()
{ 
    int iValue=0, iRet=0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
    iRet=Frequency(iValue);
    
    printf("\n Frequency of 2 in %d is %d.",iValue,iRet);

   getch();
   return 0;

}

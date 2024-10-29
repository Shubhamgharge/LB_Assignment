//03 digits between 3 to 7
#include<stdio.h>
#include<conio.h>

int CountRange(int);
int CountRange(int iNo)
{ 
   int iDigit=0, iRCount=0;
   
   
   while(iNo > 0)
   {
       iDigit = iNo % 10;
       
       if(iDigit > 3 && iDigit < 7 )
       {
           iRCount++;
       
       }
       iNo = iNo / 10;
   }
   return iRCount;

}
int main()
{ 
    int iValue=0, iRet=0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
    iRet=CountRange(iValue);
    
    printf("\n Digit between 3 to 7 in %d = %d.",iValue,iRet);

   getch();
   return 0;

}
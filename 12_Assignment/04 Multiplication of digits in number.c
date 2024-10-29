//04 Multiplication of digits in number
#include<stdio.h>
#include<conio.h>

int CountRange(int);
int CountRange(int iNo)
{ 
   int iDigit=0, iMultipal=1;
   
   
   while(iNo > 0)
   {
       iDigit = iNo % 10;
       
       if(iDigit != 0)
       {
            iMultipal=iMultipal * iDigit;
       }
       
       iNo = iNo / 10;
   }
   return iMultipal;

}
int main()
{ 
    int iValue=0, iRet=0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
    iRet=CountRange(iValue);
    
    printf("\n Multiplication of all digits in %d = %d.",iValue,iRet);

   getch();
   return 0;

}
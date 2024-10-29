//05 Difference between evendigitsum  and odddigitsun
#include<stdio.h>
#include<conio.h>

int CountRange(int);
int CountRange(int iNo)
{ 
   int iDigit=0, iEdigitsum=0, iODigitsun=0;
   
   
   while(iNo > 0)
   {
       iDigit = iNo % 10;
       
       if(iDigit % 2== 0 && iDigit != 0)
       {
            iEdigitsum += iDigit;
       }
       else if(iDigit % 2 ==1)
       {
           iODigitsun += iDigit;
       }
       
       iNo = iNo / 10;
   }
   return iEdigitsum - iODigitsun;

}
int main()
{ 
    int iValue=0, iRet=0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
    iRet=CountRange(iValue);
    
    printf("\n Difference between evendigitsum and Odigitsum in %d = %d.",iValue,iRet);

   getch();
   return 0;

}
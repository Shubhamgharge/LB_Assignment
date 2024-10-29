//01 Reverse digit of a number
#include<stdio.h>
#include<conio.h>

void RevDigit(int);
void RevDigit(int iNo)
{
   int iDigit=0,  iRev=0;
   
   if(iNo < 0)
   {
      iNo = -iNo;
   }
 
   while( iNo > 0)
   {
      iDigit = iNo % 10;
      printf("%d",iDigit);
    
      iNo = iNo / 10;
   
   }
 
}
int main()
{
   int iValue=0;
   
   printf("\n Enter a Number : "); //123
   scanf("%d",&iValue);
   
   RevDigit(iValue);

   getch();
   return 0;

}
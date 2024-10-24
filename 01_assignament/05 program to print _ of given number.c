//05 program to print * of given number
#include<stdio.h>

void Accept(int iNo)
{
   int iCount=0;
   for(iCount=1 ; iCount<=iNo ; iCount++)
   {
       printf(" *");
   }
}
int main()
{
    int iValue=5;
    
    Accept(iValue);
    
    return 0;

}
//01 display * # pattarn
#include<stdio.h>
#include<conio.h>

int Print(int);
int Print(int iNo)
{
    int i=0;
    
    if(iNo < 0)
    {
       iNo=-iNo;
    }
    for(i=1 ; i<=iNo ; i++)
    {
        if(i<=iNo) 
        {
          printf(" * ");
        }  
        
    }
    for(i=1 ; i<=iNo ; i++)
    {
        if(i<=iNo) 
        {
          printf(" # ");
        }  
        
    }
    
    
}
int main()
{
   int iValue=0;
   
   printf("\n Enter a number : ");
   scanf("%d",&iValue);
   
   Print(iValue);
   

}
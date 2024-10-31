//01 Accept number from user and front alphabet
#include<stdio.h>
#include<conio.h>

void pattarn(int);
void pattarn(int iNo)
{
     int i=0;
     char ch='\0';
     
     for(ch='A' , i=1 ; i<=iNo ; i++)
     {
         printf(" %c ",ch);
         ch++;
     }

}
int main()
{ 
    int iValue=0;
    
    printf("\nEnter number of elements : ");
    scanf("%d",&iValue);
    
    pattarn(iValue);
    
    getch();
    return 0;
}
    
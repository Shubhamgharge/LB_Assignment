//01 Area of circle
#include<stdio.h>
#include<conio.h>

float Circlearea(float);
float Circlearea(float iNo)
{
    float Pi=3.14, Area=0;
    
    return Pi*iNo*iNo;

}
int main()
{
   float iValue=0.0;
   double iRet=0.0;
    
    printf("\n Enter radius : ");
    scanf("%f",&iValue);
    
    iRet=Circlearea(iValue) ;
    printf("\nArea of Circle is %f ",iRet);
    
    getch();
    return 0;

}
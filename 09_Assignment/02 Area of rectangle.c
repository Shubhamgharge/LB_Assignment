//02 Area of rectangle
#include<stdio.h>
#include<conio.h>

float RectArea(float, float);
float RectArea(float fWidth, float fHight)
{
    
    
    return fWidth * fHight;

}
int main()
{
   float fValue1=0.0, fValue2=0.0;
   double iRet=0.0;
    
    printf("\n Enter width : ");
    scanf("%f",&fValue1);
    printf("\n Enter hight : ");
    scanf("%f",&fValue2);
    
    iRet=RectArea(fValue1, fValue2) ;
    printf("\nArea of rectangle is %f : ",iRet);
    
    getch();
    return 0;

}
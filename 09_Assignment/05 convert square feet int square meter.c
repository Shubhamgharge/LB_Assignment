//05 convert square feet int square meter
#include<stdio.h>
#include<conio.h>

float Feet(float);
float Feet(float meter)
{
   return meter * 0.0929;
}
int main()
{
   float fValue=0;
   double fRet=0;
    
    printf("\n Enter square feet : ");
    scanf("%f",&fValue);
    
    fRet=Feet(fValue) ;
    printf("\n%f square feet %f squarmeter",fValue,fRet);
    
    getch();
    return 0;

}
//04 convert fahrenheit int celsius
#include<stdio.h>
#include<conio.h>

float Temperature(float);
float Temperature(float temp)
{
    float temperature=0.0;
    temperature=((temp - 32) * (0.555));
    return temperature;
}
int main()
{
   float fValue=0;
   double fRet=0;
    
    printf("\n Enter temperature : ");
    scanf("%f",&fValue);
    
    fRet=Temperature(fValue) ;
    printf("\n%f fahrenheit = %f celsius",fValue,fRet);
    
    getch();
    return 0;

}
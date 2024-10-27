//02 accept  single digital and print into word
#include<stdio.h>
#include<conio.h>

void Switch(int);
void Switch(int iNo)
{
   switch(iNo)
   { 
       case 0 :
               printf("\nzero");
       break;        
       case1 :
              printf("\n One");
       break;
       case 2 :
               printf("\n Two");
       break;
       case 3 :
               printf("\n Three");
       break;
       case 4 :
               printf("\n Four");      
       break;
       case 5 :
               printf("\n Five");
       break;
       case 6 :
               printf("\n Six");     
       break;
       case 7 :
               printf("\nSeven");
       break;
       case 8 :
              printf("\n Eight");
       break;
       case 9 :
               printf("\n Nine");
       break;        
       default :
                printf("\nInvalid number");
       break;
   }
}
int main()
{
    int iValue=0;
    
    printf("\n Enter a number : ");
    scanf("%d",&iValue);
   
    Switch(iValue);
   
    getch();
    return 0;
}
    
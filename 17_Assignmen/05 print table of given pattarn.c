
//////////////////////////////////////////////////////////////
//                                                          //
//   05 Accept number from usre and display below pattarn   //
//                                                         //  
//   input : 5                                             //
//   output :  5 10 15 20 25 30 35 40 45 50                //                               //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattarn(int);
void pattarn(int iNo)
{
     int i=0;
     
     for(i=1 ; i<=10 ; i++)
     {
         printf(" %d ",iNo*i);
         
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
    
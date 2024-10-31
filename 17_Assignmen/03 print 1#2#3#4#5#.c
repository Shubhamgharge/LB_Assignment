
//////////////////////////////////////////////////////////////
//                                                          //
//   03 Accept number from usre and display below pattarn   //
//                                                         //  
//   input : 5                                             //
//   output : 1 # 2 # 3 # 4 # 5 #                          //                               //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattarn(int);
void pattarn(int iNo)
{
     int i=0, n=1;
     
     for(i=1 ; i<=iNo ; i++)
     {
         printf(" %d # ",n);
         n++;
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
    
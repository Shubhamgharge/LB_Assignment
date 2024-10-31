
/////////////////////////////////////////////////////////
//                                                    //
//02 Accept number from usre and display below pattarn //
//                                                    //  
//   input : 5                                        //
//   output : 5 # 4 # 3 # 2 # 1 #                     //                               //
//                                                    //
////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattarn(int);
void pattarn(int iNo)
{
     int i=0, n=0;
     n=iNo;
    
     for( i=1 ; i<=iNo ; i++)
     {
         printf(" %d # ",n);
         n--;
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
    
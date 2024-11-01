
//////////////////////////////////////////////////////////////
//                                                          //
//   03 Accept no of row and column for below pattarn       //
//                                                          //  
//   input : iRow = 4          iColumn = 4                  //
//                                                          //
//   output :  A   A   A   4                               //                               
//             B   B   B   B                               //
//             C   C   C   C                               //
//             D   D   D   D                               //
//                                                        //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattern(int, int);
void pattern(int iRow, int iColumn)
{
     int i=0, j=0, iNum=0;
     char ch='A';
     
     for( ch='A', i=1 ; i<=iRow ; i++, ch++)
     {
         for( j=1 ; j<=iColumn ; j++)
         {
            
              printf(" %c  ",ch);
              
         }   
         printf("\n");
     }

}
int main()
{ 
    int iValue1=0, iValue2=0;
    
    printf("\niRow : ");
    scanf("%d",&iValue1);
    printf("\niColumn : ");
    scanf("%d",&iValue2);
    
    printf("\n");
    
    pattern(iValue1 , iValue2);
    
    getch();
    return 0;
}
    

//////////////////////////////////////////////////////////////
//                                                          //
//   04 Accept no of row and column for below pattarn       //
//                                                          //  
//   input : iRow = 4          iColumn = 4                  //
//                                                          //
//   output :  4   4   4   4                               //                               
//             3   3   3   3                               //
//             2   2   2   2                               //
//             1   1   1   1                               //
//                                                        //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattern(int, int);
void pattern(int iRow, int iColumn)
{
     int i=0, j=0, iNum=0;
     
     for( iNum=iRow, i=1 ; i<=iRow ; i++, iNum--)
     {
         for(j=1 ; j<=iColumn ; j++)
         {
            
              printf(" %d  ",iNum);
              
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
    
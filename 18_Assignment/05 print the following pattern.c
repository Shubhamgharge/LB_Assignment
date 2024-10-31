
//////////////////////////////////////////////////////////////
//                                                          //
//   05 Accept no of row and column for below pattarn      //
//                                                         //  
//   input : iRow = 4          iColumn = 5                 //
//                                                         //
//   output :  1   1   1   1   1                           //                               
//             2   2   2   2   2                           //
//             3   3   3   3   3                           //
//             4   4   4   4   4                              //
//                                                        //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattarn(int, int);
void pattarn(int iNo1, int iNo2)
{
     int i=0, j=0, iNum=0;
     
     for(iNum=1,  i=1 ; i<=iNo1 ; i++, iNum++)
     {
         for( j=1 ; j<=iNo2 ; j++)
         {
            printf(" %d ",iNum);
            
         }   
         printf("\n");
     }

}
int main()
{ 
    int iRow=0, iColumn=0;
    
    printf("\niRow : ");
    scanf("%d",&iRow);
    printf("\niColumn : ");
    scanf("%d",&iColumn);
    
    printf("\n");
    
    pattarn(iRow , iColumn);
    
    getch();
    return 0;
}
    
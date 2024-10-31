
//////////////////////////////////////////////////////////////
//                                                          //
//   01 Accept no of row and column for belowf              //
//                                                         //  
//   input : iRow = 4          iColumn = 3                 //
//                                                         //
//   output :  *   *   *                                   //                               
//             *   *   *                                   //
//             *   *   *                                   //
//             *   *   *                                   //
//                                                         //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattarn(int, int);
void pattarn(int iNo1, int iNo2)
{
     int i=0, j=0;
     
     for(i=1 ; i<=iNo1 ; i++)
     {
         for(j=1 ; j<=iNo2 ; j++)
         {
            printf(" * ");
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
    pattarn(iRow , iColumn);
    
    getch();
    return 0;
}
    
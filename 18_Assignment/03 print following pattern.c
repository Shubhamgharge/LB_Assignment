
//////////////////////////////////////////////////////////////
//                                                          //
//   03 Accept no of row and column for below pattarn      //
//                                                         //  
//   input : iRow = 3          iColumn = 5                 //
//                                                         //
//   output :  5   4   3   2   1                           //                               
//             5   4   3   2   1                           //
//             5   4   3   2   1                           //
//                                                         //
//                                                        //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattarn(int, int);
void pattarn(int iNo1, int iNo2)
{
     int i=0, j=0, iNum=0;
     
     for(  i=1 ; i<=iNo1 ; i++)
     {
         for(iNum=iNo2 , j=1 ; j<=iNo2 ; j++)
         {
            printf(" %d ",iNum);
            iNum--;
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
    
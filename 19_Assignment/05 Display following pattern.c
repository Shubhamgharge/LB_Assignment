
//////////////////////////////////////////////////////////////
//                                                          //
//   05 Accept no of row and column for below pattarn      //
//                                                         //  
//   input : iRow = 3          iColumn = 4                 //
//                                                         //
//   output :  1   2   3   4                              //                               
//             5   6   7   8                              //
//             9   10  11  12                             //
//                                                      //
//                                                        //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattern(int, int);
void pattern(int iRow, int iColumn)
{
     int i=0, j=0, iNum=0;
     char ch='\0';
     
     for( iNum=1, i=1 ; i<=iRow ; i++)
     {
         for(j=1 ; j<=iColumn ; j++, ch++)
         {
            
              printf(" %d  ",iNum);
              iNum++;
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
    
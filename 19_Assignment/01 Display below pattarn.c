
//////////////////////////////////////////////////////////////
//                                                          //
//   01 Accept no of row and column for below pattarn      //
//                                                         //  
//   input : iRow = 4          iColumn = 5                 //
//                                                         //
//   output :  A   B   C   D   E                           //                               
//             A   B   C   D   E                           //
//             A   B   C   D   E                           //
//             A   B   C   D   E                              //
//                                                        //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattarn(int, int);
void pattarn(int iNo1, int iNo2)
{
     int i=0, j=0;
     char ch='\0';
     
     for(  i=1 ; i<=iNo1 ; i++)
     {
         for(ch='A',j=1 ; j<=iNo2 ; j++, ch++)
         {
            printf(" %c ",ch);
            
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
    
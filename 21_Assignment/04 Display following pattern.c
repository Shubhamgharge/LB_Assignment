
//////////////////////////////////////////////////////////////
//                                                          //
//   04 Accept no of row and column for below pattarn       //
//                                                          //  
//   input : iRow and iColumn : 4                           //
//                                                          //
//   output :  *    *    *    *                             //                               
//             *    @    @    *                             //
//             *    @    @    *                            //
//             *    *    *    *                            //
//                                                        //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void pattern(int);
void pattern(int iSize)
{
     int i=0, j=0;
     
     for( i=1 ; i<=iSize ; i++)
     {
         for( j=1 ; j<=iSize ; j++)
         {
            if(i==1 || j==1 || i==iSize || j==iSize)
            {
              printf("  *  ");
            }  
            else
            {
               printf("  @  ");
            }
         }   
         printf("\n");
     }

}
int main()
{ 
    int iValue=0;
    
    printf("\niRow and iColumn : ");
    scanf("%d",&iValue);
    
    
    printf("\n");
    
    pattern(iValue);
    
    getch();
    return 0;
}
    
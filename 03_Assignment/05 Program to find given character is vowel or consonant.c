/*05 program to find given character is vowel or consonant.*/
#include<stdio.h>
#include<conio.h>

typedef int BOOL; 
#define TRUE 1
#define FALSE 0

char Check(char);
char Check(char ch)
{
   
   if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
   {
      return TRUE;
   }
   else
   {
     return FALSE;
   }
   
     
   
}
int main()
{
    char CValue='\0';
    BOOL bRet=FALSE;
    
    printf("\n Enter a Character : ");
    scanf("%c",&CValue);
    
   bRet=Check(CValue);
   
   if(bRet==TRUE) 
   {
      printf("\n %c is vowel.",CValue);
   }
   else
   {
      printf("\n %c is consonant.",CValue);
   }
    
    getch();
    return 0;

}

//01 print the name
#include<stdio.h>
#include<conio.h>
int main()
{
    char Name[30];
    
    printf("\n Enter your full name : ");
    scanf("%[^'\n']",Name) ;
    printf("Your Name is : %s ",Name);

  getch();
  return 0;
}

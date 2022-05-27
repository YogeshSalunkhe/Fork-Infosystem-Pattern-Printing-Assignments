//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int R = 0,C = 0,Size = 0;
  int ch = 15;
  
  printf("\n\t Enter Size => ");
  scanf("%d",&Size);
  
  printf("\n\t Pattern Is => \n\n");
  
  for( R = 1;R <= Size;R++)
  {
    for(C = 1;C <= Size;C++)
    {
      if(R >= C)
      {
        printf(" %-3d",ch);
        ch+=5; 
       
      }
      else 
      {
        printf("   ");
      }
    }
    printf("\n");
  }
 
  getch();
  return 0;
}
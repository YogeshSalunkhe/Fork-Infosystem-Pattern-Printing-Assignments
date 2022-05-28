//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int R = 0,C = 0,Size = 0;
  int No3 = 1,No1 = 0,No2 = 0;
  
  printf("\n\t Enter Size => ");
  scanf("%d",&Size);
  
  printf("\n\t Pattern Is => \n\n");
  
  for( R = 1;R <= Size;R++)
  {
    for(C = 1;C <= Size;C++)
    {
      if(R >= C)
      {
        No1 = No2;
        No2 = No3;
        No3 = No1 + No2;
        printf(" %-3d",No1);
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
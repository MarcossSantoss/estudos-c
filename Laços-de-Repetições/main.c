#include <stdio.h>

int main() 
{
  printf("\nLaço WHILE\n");
  
  int a = 0;

  while(a<5)
  {
    printf("\nVariável 'a' é: %d", a);
    a++; //a = a + 1 
  }

  printf("\n\nLaço FOR\n");

  //for ( inicialização ; teste ; incremento )
  for(int i =0 ; i<4 ; i++)
  {
    printf("\nVariável 'i' é: %d", i);
  }

  
  return 0;
}
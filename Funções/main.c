#include <stdio.h>

int soma(int a, int b)
{
  int s = a + b;
  return s;
}

int subi(int a, int b)
{
  int s = a - b;
  return s;
}

int main() 
{
  int n1, n2, op, res;

  int fim = 0;
  
  while(fim ==0)
  {
    printf("\nDigite um valor: ");
    scanf("%d",&n1);
  
    printf("Digite um valor: ");
    scanf("%d",&n2);
  
    printf("\nEscolah a operação \n1  - Adição\n2 - subtraçõ\n");
    scanf("%d",&op);
    if(op == 1)
    {
      res = soma(n1,n2);
    }
    if(op == 2)
    {
      res = subi(n1,n2);
    }
  
    printf("\nO resultado é: %d\n", res);

    printf("\n0 - Continuar\n1 - Parar\n");
    scanf("%d",&fim);
  }
  
  return 0;
}
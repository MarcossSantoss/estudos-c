#include <stdio.h>

int v[100];

int main(void)
{
  
  for(int i=0;i<100;i++)
  {
    v[i] = i + 1; //valor de 1 a 100 
  }

  int num = 100;

  int compa = 0;

  int cont = 1;

  int ini =0;
  int fim = 99;

  while(cont == 1)
    {
      compa++;
      int pivo = (ini + fim) / 2; // crinado o pivo
      if(v[pivo]== num){
        printf("Elemento encontrado\n");
        cont = 0;
      }
      else{
        if(num > v[pivo]){
          ini = pivo + 1; 
        }
        else{
          fim = pivo - 1; // ini e fim controla area de busca 
        }
      }
      if(fim < ini)
      {
        printf("Elemento não encontrado\n"); //se passar de 100 comparaçoes
        cont = 0;
      }
    }

  printf("\nComparações: %d", compa);
  
  return 0;
}
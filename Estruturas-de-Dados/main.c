#include <stdio.h>

struct pessoa
{
  int idade;
  float altura;
};

typedef struct pessoa Pessoa;

int main() 
{
  Pessoa p;
  p.idade = 19;
  p.altura = 1.65;
  printf("A altura da pessoa: %d",p.idade);
  printf("\nA altura da pessoa: %.2f",p.altura);
  return 0;
}
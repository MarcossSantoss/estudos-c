#include <stdio.h>
#include <stdlib.h>

struct ponto
{
  float x;
  float y;
  struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *ListaPontos;

void add(float x, float y)
{
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p -> x = x;
  p -> y = y;
  p -> prox = ListaPontos;
  ListaPontos = p;
}

void imprime(Ponto *p) // Criando função
{
  if(p!=NULL){
    printf("\nPonto(%.1f,%.1f)",p -> x,p -> y);
    imprime(p-> prox); // função recursiva para substituir o while
  }
}

int main() 
{
  add(1,5);
  add(2,7);
  add(5,3);
  
  Ponto *auxLista = ListaPontos;
  imprime(auxLista);
  
  return 0;
}
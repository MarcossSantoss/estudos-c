#include <stdio.h>
#include <stdlib.h>

struct ponto
{
  float x;
  float y;
  struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *ListaPontos; //Aponta para o inicio da lista

void addFirst(float x, float y)
{
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p -> x = x;
  p -> y = y;
  p -> prox = ListaPontos;
  ListaPontos = p;
}

void addLast(float x, float y)
{
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p -> x = x;
  p -> y = y;
  p -> prox = NULL;
  if(ListaPontos==NULL){
    ListaPontos = p;
  }else{
    Ponto *ListaAux = ListaPontos;
    while(ListaAux->prox!=NULL){
      ListaAux = ListaAux-> prox;
    }
    ListaAux ->prox = p;
  }
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
  addFirst(1,5);
  addFirst(2,7);
  addFirst(5,3);
  addLast(1,1);
  addLast(8,8);

  
  Ponto *auxLista = ListaPontos;
  imprime(auxLista);
  
  return 0;
}
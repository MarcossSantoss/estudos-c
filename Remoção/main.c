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

void imprime(Ponto *p) // Criando função
{
  if(p!=NULL){
    printf("\nPonto(%.1f,%.1f)",p -> x,p -> y);
    imprime(p-> prox); // função recursiva para substituir o while
  }
}

int length = 0;

void addIndex(float x, float y, int index)
{
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p->x = x;
  p->y = y;

  if(index > length){ //se a posição é maior q length 
    printf("posição invalida");
  }else{
    if(index ==0){ 
      p -> prox = ListaPontos; //primeiro elemento passa ser o segundo 
      ListaPontos = p; // o novo passa ser o primeiro; se for tudo 0...
    }else{
      Ponto *auxLista = ListaPontos;
      int i =0;
      while(i!=index-1){
          auxLista = auxLista -> prox;
          i++;
      }
      p->prox = auxLista -> prox;
      auxLista->prox=p;
    }
    length++;
  }
}

void removeIndex(int index)
{
  if(index>length || length==0){
    printf("Posição invalida ou Lista vasia");
  }else{
    if(index==0){
        ListaPontos = ListaPontos->prox;
    }else{
      Ponto *auxLista = ListaPontos;
      int i=0;
      while(i!=index-1){
          auxLista = auxLista -> prox;
          i++;
      }
      auxLista -> prox = auxLista->prox->prox;
    }
    length--;
  }
}

int main() 
{
  addIndex(1,1,0);
  addIndex(2,4,1);
  addIndex(4,16,2);
  addIndex(3,9,2);
  addIndex(0,0,0);

  removeIndex(0);
  
  Ponto *auxLista = ListaPontos;
  imprime(auxLista);
  
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct No{
  int valor;
  struct No * prox;
}No;

void inserirNo(int, No **);
void exibir_lista(No* );
void liberar_lista(No*);

int main(){
  No* lista = NULL;
  inserirNo(4, &lista);
  inserirNo(6, &lista);
  inserirNo(3, &lista);
  inserirNo(1, &lista);
  inserirNo(5, &lista);
  exibir_lista(lista);
  liberar_lista(lista);
  return 0;
}

void inserirNo(int valor, No ** cabeca){
  No* novo = (No*)malloc(sizeof(No));//(No* é um cast: ele converte esse ponteiro generico para um ponteiro pra No)
  novo->valor = valor;
  novo->prox = NULL;

  // Caso a lista esteja vazia ou valor deve ir no início
  if (*cabeca == NULL || (*cabeca)->valor >= valor){
    novo->prox = *cabeca;
    *cabeca = novo;
    return;
  }
  
  No* atual = *cabeca;
  while (atual->prox != NULL && atual->prox->valor < valor){
    atual = atual->prox;
  }
  novo->prox = atual->prox;
  atual->prox = novo;
}

void exibir_lista(No* cabeca){
      No* atual = cabeca;
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

void liberar_lista(No* cabeca){
    No* temp;
    while (cabeca != NULL){
        temp = cabeca;
        cabeca = cabeca->prox;
        free(temp);
    }
}

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct endereco_academico{
  char rua [MAX], bairro [MAX];
  int cep, numero;
}endereco;

typedef struct dados_academico{
  char nome[MAX];
  int idade, cpf, rg;
  float altura;
  endereco moradia;
}academico;

int main(){

  academico A;
  printf("Digite seu nome:  \n");
  scanf("%s", A.nome);
  printf("Digite sua idade:  \n");
  scanf("%d", &A.idade);
  printf("Digite sua altura:  \n");
  scanf("%f", &A.altura);
  printf("Digite sua rua:  \n");
  scanf("%s", A.moradia.rua);
  printf("Digite seu bairro:  \n");
  scanf("%s", A.moradia.bairro);
  printf("Digite seu cep:  \n");
  scanf("%d", &A.moradia.cep);
  printf("Digite seu numero:  \n");
  scanf("%i", &A.moradia.numero);

  printf("---- Dados Pessoais ----\n");
  printf("Nome: %s\n", A.nome);
  printf("Idade: %d\n", A.idade);
  printf("Altura: %.2f\n", A.altura);
  printf("---- Endereco ----\n");
  printf("Rua: %s\n", A.moradia.rua);
  printf("Bairro: %s\n", A.moradia.bairro);
  printf("Numero: %d\n", A.moradia.numero);
  printf("Cep: %d\n", A.moradia.cep);
  return 0;
}
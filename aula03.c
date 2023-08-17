/*
  Disciplina de progamacao aplicada
  Data: 17/08/2023
  Exemplo01: Entrada e saida de dados/tipos de dados primitivos.
*/
#include <stdio.h>
int main(void) {
char nomePessoa[40];
int idade,x,y,z,media;
  printf("Hello World\n");//Funcao de saida de dados. \n adiciona nova linha
  printf("Iniciando a aprendizagem da linguagem C\n");
  
  printf("Qual e seu nome?\n");
  scanf("%s",nomePessoa); //como se fosse input() da linguagem python.
  printf("Seja bem-vindo, %s\n",nomePessoa);
  
  printf("Qual sua idade:\n");
  scanf("%i", &idade);
  printf("O dobro da sua idade e de: %i\n",2*idade);

  printf("Quais suas notas:\n");
  scanf("%d %d %d", & x, & y, & z);
  media = (x + y + z)/3;
  printf("Sua media e: %d",media);
  
  return 0;
}
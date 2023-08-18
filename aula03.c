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

/*
  A linguagem C possui 4 tipos de dados primitivos.
  cada um armazena um tipo de informacao e possui um tamanho diferente em bytes.
  
  Char   1 bytes Armazena caracteres.
  int    4 bytes Armazena numeros inteiro.
  float  4 bytes Armazena numeros reais ate 6 casas decimais.
  double 8 bytes Armazena numeros reais ate 15 casas decimais.
*/
  char minhaletra = 'C';
  int copaBrasil = 1991;
  float floatpi = 3.14159265358979323846;
  double doublepi = 3.14159265358979323846;
  printf("Caracter: \t\t%c \t\t\t\t\tTamanho %lu byte(s).\n" ,minhaletra, sizeof(minhaletra));
  printf ("Valor int: \t\t%i\t\t\t\tTamanho %lu byte(s).\n", copaBrasil, sizeof(copaBrasil));
  printf("Valor float: \t%.6f\t\t\tTamanho %lu byte(s).\n", floatpi, sizeof (floatpi));
  printf("Valor double: \t%.8f\t\t\tTamanho %lu byte(s).\n", doublepi, sizeof (doublepi));

  /*
A linguagem C possui 4 tipos de modificadores de tipo.
Estes modificadores definem um novo tamanho de sinal para as variaves
  
  short    Divide na metade o tamanho de uma variavel.
  long     Dobra o tamanho de uma variavel.
  signed   Define como numeros apenas positivos.
  unsigned Define como numeros positivos e negativos.
  */
/*
signed int x = 200;
unsigned int y = -100;
*/
  return 0;
}

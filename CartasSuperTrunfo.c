#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades 
  
                                    //Carta 1 
   
  /*quando alguém corrir, quero que saibam que não sei se vai funcionar usando as 
  variaveis para as duas cartas, então optei por fazer 
  variaveis para cada tipo de carta. */
  
  //VARIAVEIS
  char estado[5];
  char codico[5];
  char cidade[40];
  int populaçao;
  int turismo;
  float area;
  float pib;

  //defini as variaveis com base no numero de caractéres e padrão.

  // Área para entrada de dados
   
  printf("Qual é seu estado:");
  scanf("%s", estado);

  printf("Qual é seu códico:");
  scanf("%s", codico);

  printf("Qual é sua cidade:");
  scanf("%s", cidade);

  printf("Qual é a população da sua cidade:");
  scanf("%d", &populaçao);

  printf("Qual é o numero de pontos turisticos:");
  scanf("%d", &turismo);

  printf("Qual é área da cidade em quilômetros quadrados:");
  scanf("%f", &area);

  printf("Qual é o  Produto Interno Bruto da sua cidade:");
  scanf("%f", &pib);


  /* essa é a entrada de dados*/

  // Área para exibição dos dados da cidade

  printf("\n-----------Carta1----------\n");
  printf("seu estado é: %s\nseu códico é: %s\nsua cidade é: %s \n", estado, codico, cidade);
  printf("A população é: %d\nnumero de pontos turisticos: %d\n", populaçao, turismo);
  printf("a área em quilometros quadrados é: %.2fkm² \nO pib da cidade é: %2.fbi", area, pib);

  //coloquei tudo junto pra não ter que ficar dando varios printf.

return 0;
} 

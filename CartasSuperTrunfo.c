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

  //----CARTA1----
  char estado[10];
  char codico[10];
  char cidade[40];
  int populaçao;
  int turismo;
  float area;
  float pib;


  //----CARTA2----
  char estado2[10];
  char codico2[10];
  char cidade2[40];
  int populaçao2;
  int turismo2;
  float area2;
  float pib2;

  //defini as variaveis com base no numero de caractéres e padrão.

  // Área para entrada de dados
  
  //---------CARTA1----------
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


  //----------------CARTA2-------------------
    printf("Qual é seu estado:");
  scanf("%s", estado2);

  printf("Qual é seu códico:");
  scanf("%s", codico2);

  printf("Qual é sua cidade:");
  scanf("%s", cidade2);

  printf("Qual é a população da sua cidade:");
  scanf("%d", &populaçao2);

  printf("Qual é o numero de pontos turisticos:");
  scanf("%d", &turismo2);

  printf("Qual é área da cidade em quilômetros quadrados:");
  scanf("%f", &area2);

  printf("Qual é o  Produto Interno Bruto da sua cidade:");
  scanf("%f", &pib2);
  
  
  /* essa é a entrada de dados*/

  // Área para exibição dos dados da cidade
  //------Saida de dados da CARTA 1 -------
  printf("\n-----------Carta1----------\n");
  printf("seu estado é: %s\nseu códico é: %s\nsua cidade é: %s \n", estado, codico, cidade);
  printf("A população é: %d\nnumero de pontos turisticos: %d\n", populaçao, turismo);
  printf("a área em quilometros quadrados é: %.2fkm² \nO pib da cidade é: %2.fbi", area, pib);

  //------Saida de dados da CARTA 2 -------
  printf("\n-----------Carta2----------\n");
  printf("seu estado é: %s\nseu códico é: %s\nsua cidade é: %s \n", estado2, codico2, cidade2);
  printf("A população é: %d\nnumero de pontos turisticos: %d\n", populaçao2, turismo2);
  printf("a área em quilometros quadrados é: %.2fkm² \nO pib da cidade é: %2.fbi", area2, pib2);

  //coloquei tudo junto pra não ter que ficar dando varios printf.

return 0;
} 

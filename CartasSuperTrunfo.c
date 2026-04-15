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
  unsigned long int populaçao;
  int turismo;
  float area;
  float pib, dencidadepp, pibper;
  float super;
  float inversodencidade;

  //----CARTA2----
  char estado2[6];
  char codico2[10];
  char cidade2[40];
  unsigned long int populaçao2;
  int turismo2;
  float area2;
  float pib2, dencidadepp2, pibper2;
  float super2;
  float inversodencidade2;
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
  scanf("%lu", &populaçao);

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
  scanf("%lu", &populaçao2);

  printf("Qual é o numero de pontos turisticos:");
  scanf("%d", &turismo2);

  printf("Qual é área da cidade em quilômetros quadrados:");
  scanf("%f", &area2);

  printf("Qual é o  Produto Interno Bruto da sua cidade:");
  scanf("%f", &pib2);
  
  
  /* essa é a entrada de dados*/



//----------------Equações da carta 1-------------------
  dencidadepp = (float) populaçao / area;
  pibper = pib / populaçao; 
  inversodencidade = 1  / dencidadepp;
  super = (float) populaçao + area + pib + turismo + pibper + inversodencidade;
 
//----------------Equações da carta 2-------------------
 
  dencidadepp2 = (float) populaçao2 / area2;
  pibper2 = pib2 / populaçao2; 
  inversodencidade2 = 1  / dencidadepp2;
  super2 = (float) populaçao2 + area2 + pib2 + turismo2 + pibper2 + inversodencidade2;


  // Área para exibição dos dados da cidade
  //------Saida de dados da CARTA 1 -------
  printf("\n-----------Carta1----------\n");
  printf("seu estado é: %s\nseu códico é: %s\nsua cidade é: %s \n", estado, codico, cidade);
  printf("A população é: %lu\nnumero de pontos turisticos: %d\n", populaçao, turismo);
  printf("a área em quilometros quadrados é: %.2fkm² \nO pib da cidade é: %.2fbi\n", area, pib);
  printf("A  Densidade Populacional é : %.2f\nO PIB per Capita é : %.2f\nreais", dencidadepp, pibper);
  printf("O super poder da cartar 1 é: %.2f\n", super);
  
  //------Saida de dados da CARTA 2 -------
  printf("\n-----------Carta2----------\n");
  printf("seu estado é: %s\nseu códico é: %s\nsua cidade é: %s\n", estado2, codico2, cidade2);
  printf("A população é: %lu\nnumero de pontos turisticos: %d\n", populaçao2, turismo2);
  printf("a área em quilometros quadrados é: %.2fkm² \nO pib da cidade é: %.2fbi\n", area2, pib2);
  printf("A  Densidade Populacional é : %.2f\nO PIB per Capita é :%.2f\nreais", dencidadepp2, pibper2);
  printf("O super poder da cartar 2 é: %.2f\n", super2);

  //coloquei tudo junto pra não ter que ficar dando varios printf.


  //comparação entre as cartas
  // se der 0 é falso e 1 é verdadeiro
printf("\n-----------comparação da Carta 1----------\n");
printf("Poulação: A carta 1 venceu: %d\n ", (populaçao > populaçao2) );
printf("Área: A carta 1 venceu: %d\n ", (area > area2) );
printf("PIB: A carta 1 venceu: %d\n ", (pib > pib2) );
printf("Pontos Turísticos: A carta 1 venceu: %d\n ", (turismo > turismo2) );
printf("Densidade Populacional: A carta 1 venceu: %d\n ", (dencidadepp < dencidadepp2) );
printf("PIB per Capita: A carta 1 venceu: %d\n ", (pibper > pibper2) );
printf("Super Poder: A carta 1 venceu: %d\n ", (super > super2) );

printf("\n-----------comparação da Carta 2----------\n");
printf("Poulação: A carta 2 venceu: %d\n ", (populaçao2 > populaçao) );
printf("Área: A carta 2 venceu: %d\n ", (area2 > area) );
printf("PIB: A carta 2 venceu: %d\n ", (pib2 > pib) );
printf("Pontos Turísticos: A carta 2 venceu: %d\n ", (turismo2 > turismo) );
printf("Densidade Populacional: A carta 2 venceu: %d\n ", (dencidadepp2 < dencidadepp) );
printf("PIB per Capita: A carta 2 venceu: %d\n ", (pibper2 > pibper) );
printf("Super Poder: A carta 2 venceu: %d\n ", (super2 > super) );

return 0;
} 

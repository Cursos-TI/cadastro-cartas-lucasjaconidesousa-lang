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
  int atributo1;
  float valor1_carta1, valor1_carta2; 
  float valor2_carta1, valor2_carta2;
 

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
  int atributo2;
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


 //----inicil do menu interativo----
  printf("----Menu interativo, Faça suas escolhas para o Atributo 1----\n"); 
  printf("1.populaçao\n");
  printf("2.area\n");
  printf("3.turismo\n"); 
  printf("4.PIB\n"); 
  printf("5.dencidade demografica\n"); 
  scanf("%d", &atributo1);

  switch (atributo1)
  {
  case 1:
  printf("2.area\n");
  printf("3.turismo\n"); 
  printf("4.PIB\n"); 
  printf("5.dencidade demografica\n"); 
  scanf("%d", &atributo2);
    break;
  case 2:
  printf("1.populaçao\n");
  printf("3.turismo\n"); 
  printf("4.PIB\n"); 
  printf("5.dencidade demografica\n"); 
  scanf("%d", &atributo2);
    break;
  case 3:
  printf("1.populaçao\n");
  printf("2.area\n");
  printf("4.PIB\n"); 
  printf("5.dencidade demografica\n"); 
  scanf("%d", &atributo2);
    break;
  case 4:
  printf("1.populaçao\n");
  printf("2.area\n");
  printf("3.turismo\n"); 
  printf("5.dencidade demografica\n"); 
  scanf("%d", &atributo2);
    break;
    case 5:
    printf("1.populaçao\n");
    printf("2.area\n");
    printf("3.turismo\n");
    printf("4.PIB\n");
    scanf("%d", &atributo2);
    break;

    default:
    printf("Opção invalida");
    break;
  
  
  }

 switch (atributo1)
 {
 case 1:
  valor1_carta1 = populaçao;
  valor1_carta2 = populaçao2;
  break;
  case 2:
  valor1_carta1 = area;
  valor1_carta2 = area2;
  break;
  case 3:
  valor1_carta1 = turismo;
  valor1_carta2 = turismo2;
  break;
  case 4:
  valor1_carta1 = pib;
  valor1_carta2 = pib2;
  break;
  case 5:
  valor1_carta1 = dencidadepp;
  valor1_carta2 = dencidadepp2;
  break;
 }
  switch (atributo2)
 {
 case 1:
  valor2_carta1 = populaçao;
  valor2_carta2 = populaçao2;
  break;
  case 2:
  valor2_carta1 = area;
  valor2_carta2 = area2;
  break;
  case 3:
  valor2_carta1 = turismo;
  valor2_carta2 = turismo2;
  break;
  case 4:
  valor2_carta1 = pib;
  valor2_carta2 = pib2;
  break;
  case 5:
  valor2_carta1 = dencidadepp;
  valor2_carta2 = dencidadepp2;
  break;
 }


  float soma_carta1 = valor1_carta1 + valor2_carta1;
  float soma_carta2 = valor1_carta2 + valor2_carta2;


   
   if (soma_carta1 > soma_carta2) {
    printf("Carta 1 venceu\n");
} else if (soma_carta1 == soma_carta2) {
    printf("Empate\n");
} else {
    printf("Carta 2 venceu\n");
} 
return 0;

}

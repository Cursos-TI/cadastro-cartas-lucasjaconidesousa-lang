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
  int opcao;

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
  

  
  //ANTIGA COMPARAÇÂO entre as cartas
 /* printf("\n-----------comparação da Carta 1----------\n");
 printf("Área: A carta 1 venceu: %d\n ", (area > area2) );
 printf("PIB: A carta 1 venceu: %d\n ", (pib > pib2) );
 printf("Pontos Turísticos: A carta 1 venceu: %d\n ", (turismo > turismo2) );
 printf("Densidade Populacional: A carta 1 venceu: %d\n ", (dencidadepp < dencidadepp2) );
 printf("PIB per Capita: A carta 1 venceu: %d\n ", (pibper > pibper2) );
 printf("Super Poder: A carta 1 venceu: %d\n ", (super > super2) );

 printf("\n-----------comparação da Carta 2----------\n");
 printf("Área: A carta 2 venceu: %d\n ", (area2 > area) );
 printf("PIB: A carta 2 venceu: %d\n ", (pib2 > pib) );
 printf("Pontos Turísticos: A carta 2 venceu: %d\n ", (turismo2 > turismo) );
 printf("Densidade Populacional: A carta 2 venceu: %d\n ", (dencidadepp2 < dencidadepp) );
 printf("PIB per Capita: A carta 2 venceu: %d\n ", (pibper2 > pibper) );
 printf("Super Poder: A carta 2 venceu: %d\n ", (super2 > super) ); */

 //----inicil do menu interativo----
  printf("----Menu interativo, Faça suas escolhas----\n");
  printf("1.populaçao\n");
  printf("2.area\n");
  printf("3.turismo\n");
  printf("4.PIB\n");
  printf("5.dencidade demografica\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:

    printf("cidade 1:%s contra cidade 2:%s \n", cidade, cidade2);
    printf("populção da cidade 1:%lu contra população da cidade 2:%lu \n", populaçao, populaçao2);

   if (populaçao > populaçao2) {
    printf("A população da carta 1 ###GANHOU###\n com uma população de %lu \nsob a populção da carta 2 que é %lu", populaçao, populaçao2);
   } else if (populaçao2 > populaçao){
    printf("A população da carta 2 ganhou\n com uma população de %lu \nsob a populção da carta 1 que é %lu", populaçao2, populaçao);
   } else {
    printf("EMPATOU\n");
   }
    break;

    case 2:

    printf("cidade 1:%s contra cidade 2:%s \n", cidade, cidade2);
    printf("area da cidade 1:%f contra area da cidade 2:%f \n", area, area2);

   if (area > area2) {
    printf("A área da carta 1 ganhou, com uma área de %f, sob a área da carta 2 que é %f\n", area, area2);
   } else if (area2 > area){
    printf("A área da carta 2 ganhou, com uma área de %f, sob a área da carta 1 que é %f\n", area2, area);
   } else {
    printf("EMPATOU\n");
   }
    break;

    case 3:
    printf("cidade 1:%s contra cidade 2:%s \n", cidade, cidade2);
    printf("O turismo da cidade 1:%d contra o turismo cidade 2:%s \n", turismo, turismo2);
    
   if (turismo > turismo2) {
    printf("O turismo da carta 1 ganhou, com uma quantidade de pontos turisticos de %d, sob os pontos turisticos da carta 2 que é %d\n", turismo, turismo2);
   } else if (area2 > area){
    printf("O turismo da carta 2 ganhou, com uma quantidade de pontos turisticos de %d, sob os pontos turisticos da carta 1 que é %d\n", turismo2, turismo); 
    } else {
    printf("EMPATOU\n");
   }
    break;

    case 4:

    printf("cidade 1:%s contra cidade 2:%s \n", cidade, cidade2);
    printf("O PIB da cidade 1:%f contra O PIB da cidade 2:%f \n", pib, pib2);

   if (pib > pib2) {
    printf("O PIB da carta 1 ganhou, com O PIB de %f, sob O PIB da carta 2 que é %f\n", pib, pib2);
   } else if (pib2 > pib){
    printf("O PIB da carta 2 ganhou, com O PIB de %f, sob O PIB da carta 1 que é %f\n", pib2, pib);
   } else {
    printf("EMPATOU\n");
   }
    break;


    case 5:

    printf("cidade 1:%s contra cidade 2:%s \n", cidade, cidade2);
    printf("A dencidade demografica da cidade 1:%f contra A dencidade demografica da cidade 2:%f \n", dencidadepp, dencidadepp2);

   if (dencidadepp > dencidadepp2) {
    printf("A dencidade demografica da carta 1 ganhou, com uma dencidade demografica de %f, sob A dencidade demografica da carta 2 que é %f\n", dencidadepp, dencidadepp2);
   } else if (dencidadepp2 > dencidadepp){
    printf("A dencidade demografica da carta 2 ganhou, com uma dencidade demografica de %f, sob A dencidade demografica da carta 1 que é %f\n", dencidadepp2, dencidadepp);
   } else {
    printf("EMPATOU\n");
   }
    break;

  }







  //comparação com if-else, dos niveis anteriores
  /*printf("-----------comparação da população por if-else----------- \n");

  if(populaçao > populaçao2){
   printf("A população da Carta 1 Venceu!. com a quantidade populacional de %lu habitantes\n", populaçao);
  } else {
  printf("A população da Carta 2 Venceu!. com a quantidade populacional de %lu habitantes\n", populaçao2);
  } */
 

return 0;
} 

#include <stdio.h>

// Desafio Super Trunfo - Países nivel aventureiro.
// Tema 1 - Cadastro das cartas + updade calculo de densidade + calculo area per capita.
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 

//Rcode
//variaveis que guardam informações das cartas.

char carta1[3],carta2[3], estado1[20], estado2[20], cidade1[20], cidade2[20], codigo1[30],codigo2[30];
int populacao1,populacao2, pontosturisticos1, pontosturisticos2;
float areakm1, areakm2 , pib1, pib2, densidadepopulacional1,densidadepopulacional2, pibporcapita1,pibporcapita2;

//Esses códigos abaixo perdem informações da Carta 1

printf("Digite o numero da carta 1\n");
scanf("%s" , carta1);

printf("digite a letra correspondente ao estado \n");
scanf("%s" , estado1 );

printf("Digite o nome da codigo\n");
scanf("%s" , codigo1);

printf("Digite o nome da cidade\n");
scanf("%s" , cidade1);

printf("Digite a populacao\n");
scanf("%i", &populacao1);

printf("Digite a area do estado\n");
scanf("%f" , &areakm1);

printf("Digite o Pib\n");
scanf("%f" , &pib1);

printf("Quantidade de pontos turisticos\n");
scanf("%i" , &pontosturisticos1 );


//Esses códigos abaixo perdem informações da Carta 2

     printf("\nDigite o numero da carta2\n");
scanf("%s" , carta2);

printf("digite a letra correspondente ao estado \n");
scanf("%s" , estado2 );

printf("Digite o nome da codigo\n");
scanf("%s" , codigo2);

printf("Digite o nome da cidade\n");
scanf("%s" , cidade2);

printf("Digite a populacao\n");
scanf("%i", &populacao2);

printf("Digite a area do estado\n");
scanf("%f" , &areakm2);

printf("Digite o Pib\n");
scanf("%f" , &pib2);

printf("Quantidade de pontos turisticos\n");
scanf("%i" , &pontosturisticos2);

// essas declarações de variaveis fazem o calculo da densidade e pibprcapita.
densidadepopulacional1 = populacao1 / areakm1;
pibporcapita1 = pib1 / populacao1;

densidadepopulacional2 = populacao2 / areakm2;
pibporcapita2 = pib2 / populacao2;

//Esse código imprime as informações da carta1 e carta2 fornecidas pelo usuário

printf(
"Carta: %s\nEstado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turisticos: %i\nDensidade Populacional: %.2f\nPIB per capita: %.2f\n\n"

"Carta: %s\nEstado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turisticos: %i\nDensidade Populacional: %.2f\nPIB per capita: %.2f\n",

carta1, estado1, codigo1, cidade1,populacao1, areakm1, pib1, pontosturisticos1,
densidadepopulacional1, pibporcapita1,

carta2, estado2, codigo2, cidade2,populacao2, areakm2, pib2, pontosturisticos2,
densidadepopulacional2, pibporcapita2);

     
return 0;

}


#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    /*declarçao de variaveis para armazenar as informaçoes da carta 01 e da carta 02 
    Estado 
    codigo da carta
    nome da cidade 
    populaçao
    area em km2
    PIB
    N° de pontos turísticos
    */

    char estado1, estado2;
    char codigo_carta1 [4], codigo_carta2;
    char cidade1 [20], cidade2;
    int populaçao1;
    int populaçao2;
    float area1, area2;
    float PIB_1, PIB_2;
    int pontos_turisticos1, pontos_turisticos2

    printf("Olá, bem vindo ao Super Trunfo - Países \n"); //mensagem de boas vindas ao usuário

    printf("Vamos cadastras suas cartas, por favor, siga as intruções a seguir: \n");
//explicaçao para o cadastro das cartas
printf("Nesse jogo, imagine um país dividido em 8 estados (A-H), cada estado possui 4 cidades (01-04). \n");

//cadastramento da carta 01
printf("Carta 01 \n");

printf("Digite a letra do estado: ");
scanf("%c", &estado1);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade1);

printf("Escolha o numero da cidade (01-04): ");
scanf("%d",&codigo_cidade1);

printf("Digite o codigo da carta (letra do estado + numero da cidade): ");
scanf("%s", &codigo_carta1);

printf("Digite a população (sem pontuaçao, apenas numeros): ");
scanf("%d", &populaçao1);

printf("Digite a área da cidade : ");
scanf("%f",area1);

printf("Digite o PIB : ");
scanf("%f", &PIB_1);

printf("Quantos pontos turísticos essa cidade tem: ");
scanf("%d", &pontos_turisticos1);

//termino do cadastro da carta 01

//cadastro da carta 02

printf("Carta 02 \n");

printf("Digite a letra do estado: ");
scanf("%s", estado2);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade2);

printf("Escolha o numero da cidade (01-04): ");
scanf("%d",&codigo_cidade2);

printf("Digite o codigo da carta (letra do estado + numero da cidade): ");
scanf("%s", &codigo_carta2);

printf("Digite a população (sem pontuaçao, apenas numeros): ");
scanf("%d", &populaçao2);

printf("Digite a área da cidade : ");
scanf("%f", &area2);

printf("Digite o PIB : ");
scanf("%f", &PIB_2);

printf("Quantos pontos turísticos essa cidade tem: ");
scanf("%d", &pontos_turisticos2);

//termino do cadastro da carta 2

//impressao das cartas 01 e 02 cadastradas pelo usuario

printf("Parabéns, você terminou o cadastro das cartas, por favor verifique-as abaixo.\n");

//carta 01

printf("Carta 01\n"); //carta 01, resultado

  printf("Estado: %c\n", estado1);
  printf("Cidade: %s\n", cidade1);
  printf("Nº da cidade: %d\n", codigo_cidade1);
  printf("Codigo da carta: %s\n", codigo_carta1);
  printf("Populção: %d habitantes\n", populaçao1);
  printf("Área: %f km²\n", area1);
  printf("PIB: R$ %.2f\n", PIB_1);
  printf("Nº de pontos turísticos: %d\n", pontos_turisticos1);  

//carta 02  

printf("Carta 02\n"); //carta 02, resultado
   printf("Estado: %c\n", estado2);
   printf("Cidade: %s\n", cidade2);
   printf("Nº da cidade: %d\n", codigo_cidade2);
   printf("Codigo da carta: %s\n", codigo_carta2);
   printf("Populção: %d habitantes\n", populaçao2);
   printf("Área: %f km²\n", area2);
   printf("PIB: R$ %.2f\n", PIB_2);
   printf("Nº de pontos turísticos: %d\n", pontos_turisticos2);

return 0;


}
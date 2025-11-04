#include <stdio.h>

int main(){
  
   char estado[20];
   char codigo[20];
   char cidade[20];
   int populacao;
   float area;
   float pib;
   int pontos;


   printf("Desafio Super Trunfo!\n");
   printf("Carta 01\n");
   printf("Digite o Estado (A, B): \n");
     scanf("%s", &estado);
   printf("Digite o Código da Carta (ex: A01, B02): \n");
     scanf("%s", &codigo);
   printf("Nome da Cidade: \n");
     scanf("%s", &cidade);
   printf("Quantidade de Habitantes: \n");
     scanf("%d", &populacao);
   printf("Digite a Área (em km²): \n");
     scanf("%f", &area);
   printf("PIB da Cidade: ");
     scanf("%f", &pib);
   printf("Quantidade de Pontos Turísticos: \n");
     scanf("%d", &pontos);


   printf("Carta 01: \n");
   printf("Estado: %s\n", estado);
   printf("Código: %s\n", codigo);
   printf("Cidade: %s\n", cidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f\n", pib);
   printf("Pontos Turísticos: %d\n", pontos);

   return 0;

} 
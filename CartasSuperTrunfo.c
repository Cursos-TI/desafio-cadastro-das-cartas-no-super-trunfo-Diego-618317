#include<stdio.h>

int main(){
    printf("desfio super trunfo!\n");

    char estado1[50];
    char cidade1[50];
    char codigo1[50];
    int populacao1;
    float area1;
    float PIB1;
    int Pontos_Turisticos1;

    char estado2[50];
    char cidade2[50];
    char codigo2[50];
    int populacao2;
    float area2;
    float PIB2;
    int Pontos_Turisticos2;


    printf("digite o estado:\n");
    scanf("%s", &estado1);

    printf("digite a cidade:\n");
    scanf("%s", &cidade1);

    printf("digite o codigo:\n");
    scanf("%s", &codigo1);

    printf("digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("digite a area:\n");
    scanf("%f", &area1);

    printf("digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("digite os Pontos_Turisticos:\n");
    scanf("%d", &Pontos_Turisticos1);

    printf("o nome do estado1 é: %s\n", estado1);
    printf("o nome da cidade1 é: %s\n", cidade1);
    printf("o codigo1 é: %s\n", codigo1);
    printf("numero populacional1: %d\n", populacao1);
    printf("a area1 é: %f\n", area1);
    printf("o PIB1 é: %f\n", PIB1);
    printf("os Pontos_Turisticos1 sao: %d\n", Pontos_Turisticos1);

     printf("digite o estado:\n");
    scanf("%s", &estado2);

    printf("digite a cidade:\n");
    scanf("%s", &cidade2);

    printf("digite o codigo:\n");
    scanf("%s", &codigo2);

    printf("digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("digite a area:\n");
    scanf("%f", &area2);

    printf("digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("digite os Pontos_Turisticos:\n");
    scanf("%d", &Pontos_Turisticos2);

    printf("o nome do estado2 é: %s\n", estado2);
    printf("o nome da cidade2 é: %s\n", cidade2);
    printf("o codigo2 é: %s\n", codigo2);
    printf("numero populacional2: %d\n", populacao2);
    printf("a area2 é: %f\n", area2);
    printf("o PIB2 é: %f\n", PIB2);
    printf("os Pontos_Turisticos2 sao: %d\n", Pontos_Turisticos2);

    return 0;

}
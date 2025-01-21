#include <stdio.h>


int main(){
    printf("SEJA BEM VINDO!\n");
    printf("Desafio de cartas Super Trunfo!\n");

    float populacao, pib, area;
    int codigocarta, pontosturisticos;
    char nome[60], estado[60];
    char opcao;

do {
    printf("Digite o nome de uma cidade para cadastra-la no jogo:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("A qual estado ela pertence? \n");
    fgets(estado, sizeof(estado), stdin);


    printf("Agora digite o codigo da carta (6 digitos), e a quantia de pontos turisticos: \n ");
    scanf(" %d %d", &codigocarta, &pontosturisticos);

    printf("Desta vez preciraremos cadastrar o pib e a populacao, respectivamente: \n ");
    scanf(" %f %f", &pib, &populacao);

    printf("Para finalizar, cadastraremos a area em km quadrados: \n ");
    scanf(" %f", &area);
    

    printf("Resumo da carta cadastrada! \n");
    printf("Estado: %s \n", estado);
    printf("Codigo da Carta: %d \n", codigocarta);
    printf("Nome da cidade: %s \n", nome);
    printf("Populacao: %.2f \n", populacao);
    printf("Area em km quadrados: %.1f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Numero de pontos turisticos: %d \n", pontosturisticos);
    
    printf("Deseja salvar a carta em Super Trunfo Cidades \n e voltar ao menu principal? (s/n)");
    scanf(" %c", opcao);
    
} while(opcao == 's' || opcao == 'S' );

return 0;


}
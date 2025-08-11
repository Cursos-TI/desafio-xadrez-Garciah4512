#include <stdio.h>

// Desafio de Xadrez - Novato

int main() {
    //Declarando as variáveis
    int bispo = 0, rainha = 0;

    //Iniciando a variável torre e movendo 5 casas para direita
    printf("Movimentando a Torre:\n");
    for (int torre = 0; torre < 5; torre++) 
    {
        printf ("Para direita!\n"); //imprimindo direção do movimento
    }
    printf ("\n"); // print para organizar impressão

    //movendo bispo 5 casas para diagonal
    printf("Movimentando o Bispo:\n");
    while (bispo < 5 )
    {
        printf ("Diagonal: Acima, Direita\n"); //imprimindo direção do movimento

        bispo++; //Incrementando variável bispo
    }
    printf ("\n");
    
    //movendo rainha 8 casas para esquerda
    printf("Movimentando o Rainha:\n");
    do {
        printf ("Para esquerda!\n"); //imprimindo direção do movimento
       
        rainha++; //Incrementando variável rainha
    
    }while ( rainha < 8);

    return 0;
}

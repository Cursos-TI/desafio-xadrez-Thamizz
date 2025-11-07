#include <stdio.h>
int main(){
    int torre = 1, bispo = 1;


    //Movimentação Torre - 5 casas para direita

    printf("***Torre***\n\n");


    while (torre <= 5)
    {
        printf("Direita\n"); //impressão - movimento da peça
        torre++;
    }
    

    //Movimentação Bispo - 5 casas para Cima, Direita

    printf("\n***Bispo***\n\n");

    do
    {
        printf("Cima, Direita\n"); //impressão - movimento da peça
        bispo++;

    } while (bispo <= 5);
    



    //Movimentação Rainha - 8 casas para Esquerda

    printf("\n***Rainha***\n\n");

    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("Esquerda\n"); //impressão - movimento da peça
    }
    

    return 0;
}
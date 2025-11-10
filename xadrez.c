#include <stdio.h>

void movimento_torre(int casas_torre){
    if (casas_torre > 0 ){
        printf("Direita\n");
        movimento_torre(casas_torre - 1);
    }
}



void movimento_bispo(int casas_bispo){
    if(casas_bispo > 0){
        printf("Cima, Direita\n");
        movimento_bispo(casas_bispo - 1);
    }

}



void movimento_rainha(int casas_rainha){
    if (casas_rainha > 0 ){
        printf("Esquerda\n");
        movimento_rainha(casas_rainha - 1);
    }

}



void movimento_cavalo(){

    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
        if (i == 1)
        {
            continue;
        }
        
    }

    for (int j = 0; j < 3; j++)
    {
        if (j == 1)
        {
            printf("Direita\n");
            break;
        }
        
    }
    
    
}






void movimento_bispo2(int casas_bispo){
        for (int v = 0; v < casas_bispo; v++ ){
            for (int h = 0; h < casas_bispo; h++)
            {
                printf("Cima, Direita\n");
                break;
            }
            
        }
        
}




int main(){ 
    

    //Movimentação Torre - 5 casas para direita

    printf("***Torre***\n\n");
    movimento_torre(5);  

    

    //Movimentação Bispo1 - 5 casas para Cima, Direita

    printf("\n***Bispo***\n\n");
    movimento_bispo(5);



    //Movimentação Rainha - 8 casas para Esquerda

    printf("\n***Rainha***\n\n");
    movimento_rainha(8);
    

    //Movimentação Cavalo - 2 casas para cima e 1 para direita
    //Movimento em L

    printf("\n***Cavalo***\n\n");

    movimento_cavalo();


    //Movimentação Bispo2 - 5 casas para Cima, Direita

    printf("\n***Bispo 2***\n\n");
    movimento_bispo2(5);


return 0;
}
/*
T2 - Escreva um programa que imprima um menu com as seguintes opções:
1 - Área do retângulo
2 - Área do triângulo retângulo
3 - Área do círculo
4 - Sair

Leia a opção digitada pelo usuário. Em seguida realize o cálculo da área solicitada, lendo os valores pertinentes em cada caso.
Após a apresentação do resultado o programa deve imprimir o menu novamente.
Caso o usuário digite 4 o programa deve finalizar.

Observação: utilize obrigatoriamente o switch-case para executar cada caso das opções do menu.
*/

#include <stdio.h>



int main(){
    int user;

    while(user != 4){


        printf("1- Área do retângulo \n");
        printf("2- Área do triângulo retângulo \n");
        printf("3- Área do círculo \n");
        printf("4- Sair \n");

        scanf("%d", &user);

        switch(user){
            case 1:
                float base1, altura1;

                printf("Digite o valor da base do retângulo: \n");
                scanf("%f", &base1);

                printf("Digite o valor da altura do triângulo: \n");
                scanf("%f", &altura1);

                float areaRet = base1 * altura1;
                printf("A área do retângulo, com as medidas enviadas, é %.2f \n", areaRet);

                break;

            case 2:
                float base2, altura2;

                printf("Digite o valor da base do triângulo retângulo: \n");
                scanf("%f", &base2);

                printf("Digite o valor da altura do triângulo retângulo: \n");
                scanf("%f", &altura2);

                float areaTriRet = (base2 * altura2 / 2);
                printf("A área do triângulo retângulo, com as medidas enviadas, é %.2f \n", areaTriRet);

                break;

            case 3:
                float raio, pi;
                pi = 3.14;

                printf("Digite o valor do raio do círculo: \n");
                scanf("%f", &raio);

                float areaCirc = pi * (raio * raio);
                printf("A área do círculo, com as medidas enviadas, é %.2f \n", areaCirc);

                break;

            case 4:
                break;

            default:
                printf("Opção inválida! \n");
            
        };

    };

};
//ENUNCIADO: Escreva um programa em C/C++ que pergunte a idade, o peso e a altura de uma pessoa. Com base na idade, utilize a tabela correta em cada caso para calcular o IMC e imprima a classificação ("baixo peso", "peso normal", "sobrepeso" ou "obesidade") conforme os dados lidos. Siga as tabelas disponíveis em: https://viverbem.unimedbh.com.br/prevencao-e-controle/o-que-e-imc-como-calcular/

//Observação: Deve ser somente um programa que avalie inicialmente a idade, com base nessa idade imprima a classificação.


#include <stdio.h>

int main(){
    int idade;
    float peso, altura, imc;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);
    printf("O seu IMC está em %.2f\n", imc);

    if(idade >= 20 && idade <= 60) {
        if(imc < 18.5){
            printf("Você está abaixo do peso!\n");
        }else{
            if(imc >= 18.5 && imc <= 24.99){
                printf("Você está no peso normal!\n");
            }else{
                if(imc >= 24.99 && imc <= 29.99){
                    printf("Você está com sobrepeso!\n");
                }else{
                    if(imc > 30){
                        printf("Você está com obesidade\n");
                    };
                };
            };
        };
    }else{
        if(idade > 60) {
            if(imc < 22){
                printf("Você está abaixo do peso!\n");
            }else{
                if(imc >= 22 && imc <= 27){
                    printf("Você está no peso normal!\n");
                }else{
                    if(imc >= 27 && imc <= 29.99){
                        printf("Você está com sobrepeso!\n");
                    }else{
                        if(imc > 30){
                        printf("Você está com obesidade\n");
                    };
                };
            };
        };    
    };
};
};
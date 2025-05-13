#include <stdio.h>

int main (){
    float salario_receber,salario_base,gratificacao,imposto;
    int ver=0, op, opver=0;

    while(ver==0) {
        printf("Digite o valor do Salario:\n");
        scanf("%f", &salario_base);
        gratificacao=(salario_base*5)/100;
        imposto=(salario_base*7)/100;
        salario_receber=salario_base+gratificacao-imposto;
        printf("\nSalario a receber e %f", salario_receber);
        
        while(opver==0) {
            printf("\nDigite 1 para realizar um novo calculo ou 0 para sair: ");
            scanf("%d", &op);
            if (op==1) {
                opver++;
            }
            else if (op==0) {
                opver++;
                ver++;
            }
            else {
                printf("\nA operacao digitada eh invalida.");
            }
        }
    }
    return 0;
}

#include <stdio.h>
int main (){
    float salario_receber,salario_base,gratificacao,imposto;
    printf("Digite o valor do Salario:");
    scanf("%f", &salario_base);
    gratificacao=salario_base*5/100;
    imposto=salario_base*7/100;
    salario_receber=salario_base+gratificacao-imposto;
    printf("Salario a receber e %f", salario_receber);
    return 0;
}

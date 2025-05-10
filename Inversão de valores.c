#include <stdio.h>
int main(){
    float A,B,C;
    printf("Digite o valor de A:");
    scanf("%f", &A);
    printf("Digite o valor de B:");
    scanf("%f", &B);
    C=A;
    A=B;
    B=C;

    printf("O valor de A e: %f", A);
    printf("\nO valor de B e: %f", B);
    return 0;

}

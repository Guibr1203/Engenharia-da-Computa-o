#include <stdio.h>

int main(){
    float a, b, temp;
    printf("Digite o valor de A:\n");
    scanf("%f", &a);
    printf("Digite o valor de B:\n");
    scanf("%f", &b);
    temp=a;
    a=b;
    b=temp;
    printf("\nO valor de A agora eh: %f", a);
    printf("\nO valor de B agora eh: %f", a);
    return 0;
}

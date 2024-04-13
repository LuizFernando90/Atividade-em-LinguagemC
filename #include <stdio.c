#include <stdio.h>

int main(){

    float a[5], b[5];
    int i;

    printf("Digite 5 valores reais:\n");
    for (i = 0; i < 5; i++){
        printf("Numero %d: ", i + 1);
        scanf("%f", &a[i]);
    }
    for(i = 0; i < 5; i++){
        if(i == 0)[
            b[i] a[i];
        ] else if (i % 2 == 0) {
            b[i] = a[i] * 5;
        } else {
            b[i] = a[i] + 5;
        }
    }
printf("\nVetor a:\n");
for (i = 0; i < 5; i++){
    printf("%.2f ", a[i]);

}

printf("\n\nVetor b:\n");
for(i = 0; i < 5; i++){
    printf("%.2f ", b[i]);
}
printf("\n");

return 0;
}
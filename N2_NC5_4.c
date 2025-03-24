#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    float quociente = (double) a / b; // 'a' é explicitamente convertido para float

    //NA LINHA ACIMA PODE SER USADO  TAMBÉM (float) a / b; OU (DOUBLE) (a / b);

    printf("Quociente: %.2f\n", quociente);

    return 0;
}

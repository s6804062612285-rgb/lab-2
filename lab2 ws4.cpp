#include <stdio.h>
#include <math.h>

int main() {

    float a = 1, b = 1, c = 5, d = 1;  //4.1
    //float a = 9, b = 2, c = 0, d = 1;  //4.2
    //float a = 0, b = 3, c = 3, d = 3;  //4.3
    
    float A, B, C, D, E;

    A = (3.0 * a / 5.0) + (1.0 / b);
    B = (3.0 * a + 5.0 * b) / (2.0 + c);
    C = (2.0 / 7.0) * (pow(4.0, 3.0 + c) - 5.0 * d);
    D = sqrt((2.0 + 8.0 * b) / a);
    E = cbrt(pow(b, 2.0) - 4.0 * d);

    printf("Result A: %.2f\n", A);
    printf("Result B: %.2f\n", B);
    printf("Result C: %.2f\n", C);
    printf("Result D: %.2f\n", D);
    printf("Result E: %.2f\n", E);

    return 0;
}
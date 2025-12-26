#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    int max, second;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    max = (n1 > n2) ? n1 : n2;
    second = (n1 > n2) ? n2 : n1;

    second = (n3 > max) ? max : ((n3 > second) ? n3 : second);
    max = (n3 > max) ? n3 : max;

    second = (n4 > max) ? max : ((n4 > second) ? n4 : second);
    max = (n4 > max) ? n4 : max;

    printf("%d", second);

    return 0;
}
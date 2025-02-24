#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(b == 0) return -1;
    double result;
    result = (double) a / b;
    printf("%.9f", result);
    
    return 0;
}
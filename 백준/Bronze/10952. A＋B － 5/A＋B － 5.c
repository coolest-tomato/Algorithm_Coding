#include <stdio.h>

int main() {
    int a, b;
    
    while(1){
    scanf("%d %d\n", &a, &b);
    if(a <= 0 | a > 9 | b <= 0 | a > 9){
        break;
    }
    printf("%d\n", a + b);
    }
    return 0;
}
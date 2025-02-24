#include <stdio.h>

int main() {
    int a, b;
    while(scanf("%d %d\n", &a, &b) != EOF){
        if(a<1|a>9|b<1|b>9){
            break;
        }
        printf("%d\n", a+b);
    }
    return 0;
}
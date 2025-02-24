#include <stdio.h>

int main() {
    int cnt;
    scanf("%d\n", &cnt);
    int a, b;
    int sum;
    
    for (int i=0;i<cnt;i++){
        scanf("%d %d\n", &a, &b);
        sum = a + b;
        printf("%d\n", sum);
    }
    
    return 0;
}
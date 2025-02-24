#include <stdio.h>
#include <stdlib.h>

int main() {
    int test_num;
    scanf("%d", &test_num);
    
    for(int i=0;i<test_num;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}
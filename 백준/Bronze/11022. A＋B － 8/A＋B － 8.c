#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; 
    scanf("%d\n", &T);
    
    for(int i=0;i<T;i++){
        int a, b;
        scanf("%d %d\n", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }
    
    
    return 0; 
}
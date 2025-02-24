#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_case;
    scanf("%d\n", &num_case); 
    
    for(int i=1;i<=num_case;i++){
        int num1, num2;
        scanf("%d %d\n", &num1, &num2);
        int sum = num1 + num2;
        printf("Case #%d: %d\n", i, sum);
    }
    
    
    return 0;
}
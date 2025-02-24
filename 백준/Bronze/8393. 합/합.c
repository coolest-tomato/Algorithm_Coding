#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    int sum = 0;
    for(int i=0;i<num;i++){
        
        sum = sum + (i + 1);
    }
    printf("%d\n", sum);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;
    scanf("%d", &input);
    for(int i=0;i<input;i++){
        for(int j=1;j<input-i;j++){
            printf(" ");
            }
        for(int k=0;k<=i;k++){
        printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

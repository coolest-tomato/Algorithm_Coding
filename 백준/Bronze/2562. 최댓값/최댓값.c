#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[9];
    
    for(int i=0;i<9;i++){
        scanf("%d\n", &arr[i]);
        
    }
    
    int max = 0;
    int num;
    
    for (int j=0;j<9;j++){
        if(arr[j]>max){
            max = arr[j];
            num = j;
        }
    }
    printf("%d\n", max);
    printf("%d", num+1);
    
    return 0;
}
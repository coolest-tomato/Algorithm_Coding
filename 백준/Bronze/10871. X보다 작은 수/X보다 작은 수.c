#include <stdio.h>
#include <stdlib.h>

int main() {
    int cmp;
    int num;
    scanf("%d ", &num);
    scanf("%d\n", &cmp);
    
    int arr[num];
    
    for(int i=0;i<num;i++){
        scanf("%d ", &arr[i]);
    }
    for(int j=0;j<num;j++){
        if(arr[j] < cmp){
            printf("%d ", arr[j]);
        }
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, sum;
    int max = 0;
    float result = 0;
    scanf("%d", &N);
     
    if (N > 1000) {
        return 1; 
    }
    
    int arr[N];
    
    for (int i=0; i<N; i++){
        scanf("%d ", &arr[i]);
        if (arr[i] > 100 | arr[i] < 0){
            return 1;
        }
    }
    
    // Find the maximum value out of grades
    for (int i=0;i<N;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    for (int i=0;i<N;i++){
            result += (float)arr[i]/max*100;
    }
    
    
    printf("%f\n", result/N);
    
    return 0;
}
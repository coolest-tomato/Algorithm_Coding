#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d\n", &N, &M);
    int basket[N];
    for (int i=0; i<N; i++){
        basket[i] = i+1;
    }
    for (int i=0; i<M; i++){
        int N1, N2;
        scanf("%d %d\n", &N1, &N2);
        int temp = basket[N2-1];
        basket[N2-1] = basket[N1-1];
        basket[N1-1] = temp;
    }
    for (int i=0; i<N; i++){
        printf("%d ", basket[i]);
    }
}
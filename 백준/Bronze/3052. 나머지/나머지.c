#include <stdio.h>

int main() {
    int input;
    int result = 0;
    int arr[10];
    
    for (int i=0;i<10;i++){
        scanf("%d", &input);
        arr[i] = input % 42;
    }
    
    for (int i=0;i<10;i++) {
        int cnt = 0;
        for (int j=i+1;j<10;j++){
            if(arr[i]==arr[j]) cnt++; // 같은 값 있으면 체크
        }
        if (cnt == 0) result++; // 같은 값이 없다면 다른 값 + 1 해줌
    }
        
        printf("%d", result);
     
}
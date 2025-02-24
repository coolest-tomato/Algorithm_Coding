#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[6] = {1,1,2,2,2,8}; // 있어야 할 체스말의 각 개수 
    int input[6];
    
    // 사용자에게 입력값 받기 
    for(int i=0;i<6;i++){
        scanf("%d ", &input[i]);
        if(input[i] > 10 | input[i] < 0){
            return 0;
        }
    }
    // 몇개를 더해야하는지 또는 빼야하는지에 대한 값 출력 
    for(int j=0;j<6;j++){
        printf("%d ", num[j]-input[j]);
    }
    
    return 0;
}
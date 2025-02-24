#include <stdio.h>
#include <stdlib.h>

int main() {
    int input_price;
    int total_num;
    int price = 0;
    int total_price = 0;
    int num = 0;
    scanf("%d\n", &input_price);
    scanf("%d\n", &total_num);  
    for(int i=0;i<total_num;i++){
        scanf("%d %d\n", &price, &num);
        int sum = price * num;
        total_price = total_price + sum; 
    }
    if(input_price == total_price){
        printf("Yes");
    }
    else{
        printf("No");
}
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, c;
    int price;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c){
        price = 10000 + a * 1000;
    }
    else if(a == b || a == c){
        price = 1000 + a * 100;
    }
    else if(b == c){
        price = 1000 + b * 100;
    }
    else{
        if(a > b && a > c)
            price = a * 100;
        else if(b > a && b > c)
            price = b * 100;
        else if(c > a && c > b)
            price = c * 100;
    }
    printf("%d", price);
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int main() {
    int num_arr, num, i, j;
    int arr[101] = {0, };
    int temp;
    // b : basket's number 
    scanf("%d %d", &num_arr, &num);
    
    
    // create array
    for (int a=0; a<num_arr; a++) {
        arr[a] = a+1;
    }

    // input from user to decide make reverse from where and to
    for (int b=0; b<num; b++) {
        scanf("%d %d", &i, &j);
            for (int c=i-1; c<j; c++){
                temp = arr[c];
                arr[c] = arr[j-1];
                arr[j-1] = temp;
                j--;
        }
    }
    
    /*** logic explanation ********* 
    // i,j : 0,5->1,4->2,3 switching 
    ********************************/
    
    // output completed array 
    for (int i=0; i<num_arr; i++){
        printf("%d ", arr[i]);
    }
  
    return 0;
}

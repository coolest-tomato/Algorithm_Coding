#include <stdio.h>

int main(void)
{
    int student[30] = { 0 };
    int submit_num;

    for (int i = 0; i < 28; i++) {  
        scanf("%d\n", &submit_num);   
        student[submit_num-1] = submit_num;   // 출석(제출)한 학생의 번호 입력을 받음. 
    }                                         // 입력받지 않은 학생은 그대로 값 0 유지
    
    for (int i = 0; i < 30; i++) {  
        if (student[i] == 0)        // 0이 유지된 인덱시, 즉 출석(제출)하지 않은 학생 
            printf("%d\n", i+1);      // 번호 출력 
    }


    return 0;
}
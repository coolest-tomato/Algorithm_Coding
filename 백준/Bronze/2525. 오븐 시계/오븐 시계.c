#include <stdio.h>

int main()
{
    int H,M,Cook, total, hour;
    scanf("%d %d\n %d", &H, &M, &Cook);
    if(H < 0 || H > 23 || M < 0 || M > 59 || Cook < 0 || Cook > 1000) return -1;
    total = M + Cook;
    hour = (M+Cook) / 60;
    H = H + hour;
    if(H>23){
        H = H - 24;
        if(total % 60 == 0)
        { 
            total = 0;
        }
        else
        {
            total = total % 60;
        }
    }
    if(H<=23){
        if(total > 60 && (total % 60 == 0))
        {
             total = 0;
        }
        if(total <= 60 && (total % 60 == 0))
        {
             total = 0;
        }
        else if(total > 60 && total % 60 != 0)
        {
            total = total % 60;
        }
    }
    printf("%d %d", H, total);
    
    return 0;
}
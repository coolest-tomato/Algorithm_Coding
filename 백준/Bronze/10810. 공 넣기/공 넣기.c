#include<stdio.h>

int main()
{
    int N,M;
    int S,E,NUM;
    int basket[101]={0, };
    
    scanf("%d %d",&N,&M);
    
    for(int i=0; i<M; i++)
    {
        scanf("%d %d %d",&S,&E,&NUM);
        
        for(int j=S; j<=E; j++)
        {
            basket[j]=NUM;
        }
    }
    
    for(int k=1; k<=N; k++)
    {
        printf("%d ",basket[k]);
    }
    
    
    return 0;
}
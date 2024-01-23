#include <stdio.h>

void main(){
    int N = 50;
    int sum = 0;
    for (int i=1;i<=N;i++){
        sum += i;
    }
    printf("%d",sum);
    
    int mus = N*(N+1)/2;
    printf("\n%d",mus);
    return;
}

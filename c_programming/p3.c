#include <stdio.h>

void PrimeChecker(int N){
    int flag=1;
    for (int i=2;i<=N/2;i++){
        if (N%i == 0){
            flag = 0;
            break;
        }
    }
    if (flag){
        printf("Prime Number");
    }
    else{
        printf("Composite Number");
    }
    return;
}

int main()
{
    printf("\033c");
    int a;
    scanf("%d",&a);
    PrimeChecker(a);
    return 0;
}
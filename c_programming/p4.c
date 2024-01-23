#include <stdio.h>

float multiply(float A,float B){
    return A*B;
}

int main(){
    float A=2.11313,B=13.15552,ans;
    ans = multiply(A,B);
    printf("%.4f",ans);
    return 0;
}
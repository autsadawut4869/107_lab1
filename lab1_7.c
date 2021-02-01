#include <stdio.h>
int main(){
    float n;
    scanf("%f",&n);
    if(n>=0.00&&n<=11.59){
        printf("%.2f a.m",n);
    }
    if(n>11.59&&n<24.00)
    {
        printf("%.2f p.m",n);
    }

    return 0;
}

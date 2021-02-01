#include <stdio.h>
int main(){
    float n;
    scanf("%f",&n);
    if(n>0&&n<11.59){
        printf("%.2f a.m",n);
    }
    else
    {
        printf("%.2f p.m",n);
    }

    return 0;
}

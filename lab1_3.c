#include <stdio.h>
int main(){
    unsigned long long int n;
    long int a,b;
    scanf("%d",&n);
    if(0.3*n<1000000000000){
        a=n%3;
        b=n%11;
    }

    printf("%d %d",a,b);

    return 0;
}

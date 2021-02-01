#include <stdio.h>
int main(){
    long long int n,a,b;

    scanf("%lld",&n);
    a=n%3;
    b=n%11;
    printf("%d %d",a,b);

    return 0;
}

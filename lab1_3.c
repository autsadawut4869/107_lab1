#include <stdio.h>
int main(){
    unsigned long int n;
    long int a,b;
    scanf("%ul",&n);
    a=n%3;
    b=n%11;
    printf("%ld %ld",a,b);

    return 0;
}

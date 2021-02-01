#include <stdio.h>
int main(){
    unsigned long int n,a,b;

    scanf("%ul",&n);
    a=n%3;
    b=n%11;
    printf("%d %d",a,b);

    return 0;
}

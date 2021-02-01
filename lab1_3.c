#include <stdio.h>
int main(){
    unsigned long long int n;
    int a,b;
    scanf("%d",&n);
    a=n%3;
    b=n%11;
    printf("%d %d",a,b);

    return 0;
}

#include <stdio.h>
int main(){
    long long n;
    int m3,m11;
    scanf("%d",&n);
    m3=n%3;
    m11=n%11;
    printf("%d %d",m3,m11);

    return 0;
}

#include <stdio.h>
int main()
{
    long long int n;
    long int a,b;
    scanf("%d",&n);
    a=n%3;
    b=n%11;
    printf("%d %d",a,b);

    return 0;
}

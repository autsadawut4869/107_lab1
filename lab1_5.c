#include <stdio.h>
int main (){
    long long int n,j=0,i=0,max;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
            j=i+1;
        }
    }
    printf("%lld %lld",j,max);

    return 0;
}

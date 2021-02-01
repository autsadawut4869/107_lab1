#include <stdio.h>
int main (){
    int n,j=0,i=0,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
            j=i+1;
        }
    }

    printf("%d %d",j,max);

    return 0;
}

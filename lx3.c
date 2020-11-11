#include<stdio.h>

void swap(int a[],int i,int n){
    a[i] = a[i]+a[n-i-1];
    a[n-i-1] = a[i]-a[n-i-1];
    a[i] = a[i]-a[n-i-1];
}

int main(int argc, char const *argv[])
{
    int i,a[100],n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);
        //waring
    for (i = 1; i < (n-1)/2; i++)
        swap(a,i,n);
    for ( i = 0; i < n; i++)
        printf("%d ",a[i]);
    return 0;
}

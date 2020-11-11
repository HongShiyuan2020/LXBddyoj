#include<stdio.h>
#include<malloc.h>
float getave(int *p,int n);
void in(int *p,int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",p+i);
    }
}

int ss(int *p,int n){
    int sum = 0,i;
    for ( i = 0; i < n; i++)
    {
        if (*(p+i) < getave(p,n))
        {
            sum++;
        }
    }
    return sum;    
}

float getave(int *p,int n){
    return 1.0*Sum(p,n)/n;
}

int Sum(int *p,int n){
    int i,sum =0;
    for ( i = 0; i < n; i++)
    {
        sum += *(p+i);
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int i,n,sum;
    int *p;
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    in(p,n);
    sum = ss(p,n);
    printf("%d",sum);
    free(p);
    return 0;
}

#include<stdio.h>
#include<malloc.h>
#include<math.h>
int isP(int a){
    int i;
    for ( i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            break;
        }
    }
    if(i > sqrt(a))
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int j,i,n,k;
    int *p;
    scanf("%d%d",&n,&k);
    p = (int*)malloc(sizeof(int)*n);
    for ( i = 0; i < n; i++)
    {
        *(p+i) = -1;
    }
    for ( i = 2; i <= k; i++)
    {
        if (isP(i))
        {
            for ( j = 0; j < n; j++)
            {
                if ((j+1)%i == 0)
                {
                    *(p+j) = -*(p+j);                 
                }
            }
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        if (*(p+i) == 1)
        {
            printf("%d ",i+1);
        }
    }
    free(p);


    return 0;
}

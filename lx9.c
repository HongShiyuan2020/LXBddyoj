#include<stdio.h>

void jiaoji(int a[6],int b[6]){
    int i,j;
    printf("{");
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d,",a[i]);
                break;
            }
        }
    }
    printf("\b}\n");
}
void bing(int a[6],int b[6]){
    int i,j,x=1,m = 1;
    int c[12] = {0};
    c[0] = a[0];
    for( i = 1; i < 6; i++)
    {
        for ( j = 0; j < x; j++)
        {
            if (c[j] == a[i])
            {
                m = 0;
            }
        }
            if (m)
            {
                c[x] = a[i];
                x++;
            }
    }
     for( i = 1; i < 6; i++)
    {
        for ( j = 0; j < x; j++)
        {
            if (c[j] == b[i])
            {
                m = 0;
            }
        }
            if (m)
            {
                c[x] = b[i];
                x++;
            }
    }
    printf("{");
    for ( i = 0; i < x; i++)
    {
        printf("%4d",c[i]);
    }
    printf("}\n");    
}

void chaji(int a[6],int b[6]){
    int i,j;
    printf("{");
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if (j == 6)
        {
            printf("%4d",a[i]);
        }
    }
    printf("}");
}

int main(int argc, char const *argv[])
{
    int a[] ={1,3,5,7,8,9};
    int b[] ={2,4,6,8,9,10};
    
    bing(a,b);
    jiaoji(a,b);
    chaji(a,b);
    chaji(b,a);
    return 0;
}
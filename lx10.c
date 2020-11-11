#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    int a[3][4] = {0};
    int T[4][3] = {0};
    for(i = 0;i < 3;i++){
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            T[i][j] = a[j][i];
        }
        
    }
    printf("+-------------+\n");   
    for ( i = 0; i < 4; i++)
    {
        printf("|");
        for (j = 0; j < 3; j++)
        {
            printf("%4d",T[i][j]);
        }
        printf("|\n");
    }
    printf("+-------------+");   

    
    return 0;
}

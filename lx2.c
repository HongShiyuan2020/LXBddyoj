#include<stdio.h>

int main(int argc, char const *argv[]){
    int i,data[100],n,sum = 0;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&data[i]);
        if (data[i] < 60) sum++;
    }
    printf("%d",sum);
    return 0;
}

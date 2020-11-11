#include<stdio.h>

int getmax(int a[]){
	int i,max = a[0];
	for ( i = 1; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		
	}
	return max;
}

int getindex(int a[]){
	int i,index = 0;
	for ( i = 1; i < 10; i++)
	{
		if (a[i] > a[index])
		{
			index = i;
		}
		
	}
	return index;
}

void add(int x,int a[]){
	int i;
	while(x != 0){
		i = x%10;
		switch(i){
			case 0: a[i]++;break;
			case 1: a[i]++;break;
			case 2: a[i]++;break;
			case 3: a[i]++;break;
			case 4: a[i]++;break;
			case 5: a[i]++;break;
			case 6: a[i]++;break;
			case 7: a[i]++;break;
			case 8: a[i]++;break;
			case 9: a[i]++;break;
		}
		x = x/10;
	}
}
int main(int argc, char const *argv[])
{
    	int a[10] = {0};
	int i,n,x;
	printf("请输入：N的值：");
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&x);
		add(x,a);
	}
	printf("\n数字：%d 次数：%d\n",getmax(a),getindex(a));
	return 0 ;
    
}



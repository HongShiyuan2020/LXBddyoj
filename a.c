#include<stdio.h>

int getdays(int y,int M,int d){
    int sum = d;
    if (isLeapYear(y))
    {
        switch (M)
        {
        case 1:sum+=0;break;
        case 2:sum+=31;break;
        case 3:sum+=60;break;
        case 4:sum+=91;break;
        case 5:sum+=121;break;
        case 6:sum+=152;break;
        case 7:sum+=182;break;
        case 8:sum+=213;break;
        case 9:sum+=244;break;
        case 10:sum+=274;break;
        case 11:sum+=305;break;
        case 12:sum+=335;break;
        }        
    }else{
        switch (M)
        {
        case 1:sum+=0;break;
        case 2:sum+=31;break;
        case 3:sum+=59;break;
        case 4:sum+=90;break;
        case 5:sum+=120;break;
        case 6:sum+=151;break;
        case 7:sum+=181;break;
        case 8:sum+=212;break;
        case 9:sum+=243;break;
        case 10:sum+=273;break;
        case 11:sum+=304;break;
        case 12:sum+=334;break;
        }
    }
    return sum;
}

int getyeardays(int y){
    if (isLeapYear(y))
    {
        return 366;
    }else
    {
        return 365;
    }
}

int get(int y1,int y2){
    int i,sum = 0;
    for ( i = y1+1; i < y2; i++)
    {
        sum += getyeardays(i);
    }
    return sum;
}

int isLeapYear(int y){
    if ((y%4 == 0 && y%100 != 0)||(y %400 == 0))
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int y1,M1,d1;
    int y2,M2,d2;
    int dd,DD,dx;
    scanf("%d%d%d%d%d%d",&y1,&M1,&d1,&y2,&M2,&d2);
    dd = getdays(y1,M1,d1);
    DD = getdays(y2,M2,d2);
    dx = getyeardays(y1)-dd+DD+get(y1,y2);
    printf("%d",dx);
    return 0;
}

#include<stdio.h>

int getdays(int y,int M,int d){
    int sum = d;
    int M1[12] = {0,31,60,91,121,152,182,213,244,274,305,335};
    int M2[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
    if (isLeapYear(y))
    {
        sum += M1[M-1];        
    }else{
        sum += M2[M-1];
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

int getseconds(int y1,int M1,int d1,int h1,int m1,int s1,int y2,int M2,int d2,int h2,int m2,int s2){
    int ss,dd,DD,dx;
    dd = getdays(y1,M1,d1);
    DD = getdays(y2,M2,d2);
    dx = y1 == y2 ? (DD-dd)-1:getyeardays(y1)-dd+DD+get(y1,y2)-1;
    ss = dx*3600*24+h2*3600+m2*60+s2+(86400-h1*3600-m1*60-s1);
    return ss;
}

int main(int argc, char const *argv[])
{
    int y1,M1,d1,h1,m1,s1;
    int y2,M2,d2,h2,m2,s2;
    int ss;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&y1,&M1,&d1,&h1,&m1,&s1,&y2,&M2,&d2,&h2,&m2,&s2);
    ss = getseconds(y1,M1,d1,h1,m1,s1,y2,M2,d2,h2,m2,s2);
    printf("%d",ss);
    return 0;
}
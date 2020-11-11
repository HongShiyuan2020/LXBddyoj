#include<stdio.h>

int M1[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int M2[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
void settime(int y,int M,int d,int h,int m,int s,int t,int *outy,int *outM,int *outd,int *outh,int *outm,int *outs){
    int i,dd;
   
    *outy = y;
    *outM = M;
    *outd = d;
    *outh = h;
    *outm = m;
    *outs = s+t;

    *outm += *outs/60;
    *outs = *outs%60;
    *outh += *outm/60;
    *outm = *outm%60;
    dd = *outh/24;
    *outh = *outh%24;

    addday(outy,outM,outd,dd);     
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

void addday(int *outy,int *outM,int *outd,int dd){
    int xd;
    while (dd != 0)
    {   
        if (isLeapYear(*outy))
        {
            xd = M2[*outM - 1]-*outd;
            if (dd<=xd)
            {
                *outd = *outd+dd;
                dd = 0; 
            }else
            {
                dd -= xd;
                *outd = 0;
                *outM = *outM+1;
                if (*outM > 12)
                {
                    *outM = 1;
                    *outy = *outy + 1;
                }
            }
        }
        else
        {
            xd = M1[*outM-1]-*outd;
            if (dd<=xd)
            {
                *outd += dd;
                dd = 0; 
            }else
            {
                dd -= xd;
                *outd = 0;
                *outM = *outM + 1;
                if (*outM > 12)
                {
                    *outM = 1;
                    *outy = *outy + 1;
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int y,M,d,h,m,s,t;
    int outy,outM,outd,outh,outm,outs;
    scanf("%d%d%d%d%d%d%d",&y,&M,&d,&h,&m,&s,&t);
    settime(y,M,d,h,m,s,t,&outy,&outM,&outd,&outh,&outm,&outs);
    printf("\n%d %d %d %d %d %d\n",outy,outM,outd,outh,outm,outs);
    return 0;
}
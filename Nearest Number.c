#include<stdio.h>
int main()
{
    int i,j,n,c,k,tmp;
    int num[5];
    scanf("%d %d",&n,&c);
    tmp=n;
    k=1;
    while(k)
    {
        i=0;
        while(n>0)
        {
            num[i]=n%10;
            n/=10;
            i++;
        }
        for(j=0;j<i;j++)
        {
            if(num[j]==c)
            {
                printf("%d",tmp);
                k=0;
                break;
            }
        }
        tmp+=1;
        n=tmp;
    }
    return 0;
}

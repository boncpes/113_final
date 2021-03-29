#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char like[10000]="";
    char loob[10000]="";
    char w;
    int loli[10000]={0};
    int n,i,j,k,c;
    scanf("%d",&n);
    scanf(" %[^\n]s",like);
    char *pch=strtok(like," ");
    while(pch!=NULL)
    {
        k=atoi(pch);
        loli[k-1]++;
        pch=strtok(NULL," ");
    }
    int max=loli[0];
    for(i=0;i<10000;i++)
    {
        if(loli[i]>max)
        {
            max=loli[i];
        }
    }
    for(i=0;i<10000;i++)
    {
        if(loli[i]==max)
        {
            printf("%d ",i+1);
        }
    }
    return 0;
}

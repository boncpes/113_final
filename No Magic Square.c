#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j,c=0,v=0,q=0;
    scanf("%d %d %d",&n1,&n2,&n3);
    int mat1[n1][n1],mat2[n2][n2],mat3[n3][n3];
    int co[20]= {0},row[20]= {0},t1=0,t2=0;
    for(i=0; i<n1; i++)
    {
        co[i]=0;
        row[i]=0;
        for(j=0; j<n1; j++)
        {
            scanf("%d",&mat1[i][j]);
            co[i]+=mat1[i][j];
            if(i==j)
            {
                t1+=mat1[i][j];
            }
        }
        t2+=mat1[i][(i-(n1-1))*-1];
    }
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n1; j++)
        {
            row[i]+=mat1[j][i];
        }
    }
    if(t1==t2)
    {
        for(i=0; i<n1; i++)
        {
            if(co[i]==row[i])
            {
                c++;
            }
        }
    }

    for(i=0; i<n2; i++)
    {
        co[i]=0;
        row[i]=0;
        for(j=0; j<n2; j++)
        {
            scanf("%d",&mat2[i][j]);
            co[i]+=mat2[i][j];
            if(i==j)
            {
                t1+=mat2[i][j];
            }
        }
        t2+=mat2[i][(i-(n2-1))*-1];
    }
    for(i=0; i<n2; i++)
    {
        for(j=0; j<n2; j++)
        {
            row[i]+=mat2[j][i];
        }
    }
    if(t1==t2)
    {
        for(i=0; i<n2; i++)
        {
            if(co[i]==row[i])
            {
                v++;
            }
        }
    }
    for(i=0; i<n3; i++)
    {
        co[i]=0;
        row[i]=0;
        for(j=0; j<n3; j++)
        {
            scanf("%d",&mat3[i][j]);
            co[i]+=mat3[i][j];
            if(i==j)
            {
                t1+=mat3[i][j];
            }
        }
        t2+=mat3[i][(i-(n3-1))*-1];
    }
    for(i=0; i<n3; i++)
    {
        for(j=0; j<n3; j++)
        {
            row[i]+=mat3[j][i];
        }
    }
    if(t1==t2)
    {
        for(i=0; i<n3; i++)
        {
            if(co[i]==row[i])
            {
                q++;
            }
        }
    }
    if(c==n1)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    if(v==n2)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    if(q==n3)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }

    return 0;
}


#include<stdio.h>
void print(int c);
int main()
{
    int n1,n2,n3,i,j,c=0;
    scanf("%d %d %d",&n1,&n2,&n3);
    int mat1[n1][n1],mat2[n2][n2],mat3[n3][n3];
    int m1[4]= {0},m2[4]= {0},m3[4]= {0};
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n1; j++)
        {
            scanf("%d",&mat1[i][j]);
            m1[0]+=mat1[i][j];
            if(j==0)
            {
                m1[1]+=mat1[i][j];
            }
            if(i==j)
            {
                m1[2]+=mat1[i][j];
            }

        }
        printf("\t\t%d\n",mat1[i][i-(n1-1)]);
    }
    for(i=0; i<n2; i++)
    {
        for(j=0; j<n2; j++)
        {
            scanf("%d",&mat2[i][j]);
            m2[0]+=mat2[i][j];
            if(j==0)
            {
                m2[1]+=mat2[i][j];
                if(i==j)
                {
                    m2[2]+=mat2[i][j];
                }
            }
        }
        m2[3]+=mat2[i][i-n1];
    }
    for(i=0; i<n3; i++)
    {
        for(j=0; j<n3; j++)
        {
            scanf("%d",&mat3[i][j]);
            m3[0]+=mat3[i][j];
            if(j==0)
            {
                m3[1]+=mat3[i][j];
            }
             if(i==j)
            {
                m3[2]+=mat3[i][j];
            }
        }
    }
    printf("%d %d",m1[2],m1[3]);
    return 0;
}
void print(int c)
{
    if(c==16)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
}

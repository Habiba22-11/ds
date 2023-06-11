#include<stdio.h>
int main()
{
    int i,j,matrix[10][10],uppersum=0,lowersum=0,r1,c1,sum=0;
    printf("Rows and columns for matrix=");
    scanf("%d %d",&r1,&c1);
     printf("Elements of Matrix=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf("matrix[%d][%d]=",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nMatrix=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%d  ",matrix[i][j]);
            printf("\n");

    }
    //transpose
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            if(i<j)
            uppersum=uppersum+matrix[i][j];
            if(i>j)
            lowersum=lowersum+matrix[i][j];
        }
    }
    printf("\nSum of upper traingle elements of Matrix=%d\n",uppersum);
     printf("\nSum oflower traingle elements of Matrix=%d\n",lowersum);


}



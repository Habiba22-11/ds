#include<stdio.h>
int i,temp,j,n;
int bubble_sort(int b[],int x)
{
    for(i=0; i<x-1; i++)
    {
        for(j=0; j<x-i-1; j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
            for(int k=0; k<x; k++)
        {
            printf("%d\t",b[k]);
        }
}
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int a[size];
    for(i=0; i<size; i++ )
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,size);
}


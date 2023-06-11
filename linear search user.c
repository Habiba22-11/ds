#include<stdio.h>
int linear_search(int b[],int len,int k)
{
    int j;
    for(int j=0; j<len; j++)
    {
        if(b[j]==k)
        {
            printf("%d",j+1);
        }
    
    else
{
        printf("Not found");
}
}
int main()
{
    int i,item,size;
    scanf("%d",&size);
    scanf("%d",&item);
    int a[size];
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    linear_search(a,size,item);
}
}


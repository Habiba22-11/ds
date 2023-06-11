#include <stdio.h>
int main()
{
    int n,pos=-1,i;;
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    int item;
    scanf("%d",&item);
    for( i=0;i<7;i++)
    {
        if(item==num[i])
        {
            pos=i+1;
        break;
}
}
    if(pos==-1)
    {
    printf("item is not found");
}
   else
{
        printf("position=%d",pos);
    }

   return 0;
}


#include<stdio.h>
int main()
{
    int num[]={12,34,6,8,63,27,0};
    int item=34,pos=-1,i;
    for(i=0;i<7;i++)
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

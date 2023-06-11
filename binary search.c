#include<stdio.h>
int main()
{
    int arr[7]={1,20,21,36,67,78};
    int item=36;
    int left=0,right=5,middle;
    while(left<=right)
    {
        middle=(left+right)/2;
        if(arr[middle]==item)
        {
            printf("%d",middle);
            return 0;
        }
        else if(arr[middle]<item)
        {
            left=middle+1;
        }
        else{
                right=middle-1;
        }
       
    }
    printf("item not found"); 
    
    return 0;


}

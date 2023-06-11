 #include<stdio.h>
int main()
{
    int data[6]={5,3,7,6,9,4};
    int i,ptr,n=6;
    for(i=0;i<n-1;i++)
    {
    
        for(ptr=0;ptr<n-1-i;ptr++)
         
    {
        if(data[ptr]>data[ptr+1])
        {
            int temp=data[ptr];
        data[ptr]=data[ptr+1];
        data[ptr+1]=temp;
        
        }
     
    }
    printf("%d ",data[i]); 
    }

for(i=0;i<n;i++){

    printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}

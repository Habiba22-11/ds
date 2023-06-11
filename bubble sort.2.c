#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int data[n];
    for(int i=0; i<n; i++){
        scanf("%d", &data[i]);
    }
    for(int k=0; k<n; k++){
            printf("Steps : ");
        for(int ptr=0; ptr<n-k-1; ptr++){
            if(data[ptr]>data[ptr+1]){
                int temp = data[ptr];
                data[ptr] = data[ptr+1];
                data[ptr+1] = temp;
            }
        }
        for(int i=0; i<n; i++){
                printf("%d ", data[i]);
        }
        printf("\n");
    }
return 0;
}

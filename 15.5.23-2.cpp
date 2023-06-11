#include<iostream>
using namespace std;
class matrix
{
    int **p;
    int d1,d2;
public:
    matrix1(int x,int y);
    void get_element1(int i,int j,int value)
    {
        p[i][j]=value;
    }
     matrix2(int x,int y);
    void get_element2(int i,int j,int value)
    {
        p[i][j]=value;
    }
    int & put_element(int i,int j)
   /* {
        for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
    for(int k=0;k<c1;k++)
    {
        sum=sum+matrix1[i][k]*matrix2[k][j];
    }
    mulmatrix[i][j]=sum;
        sum=0;
        }
    }

    }*/
    return matrix1[i][j];
   // return matrix2[i][j];
};

matrix::matrix(int x,int y)
{
    d1=x;
    d2=y;
    p=new int*[d1];
    for(int i=0;i<d1;i++)
        p[i]=new int[d2];
}

int main()
{
    int m,n;
    cout<<"Enter size of matrix1: ";
    cin>>m>>n;
    matrix A(m,n);
    int i,j,value;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        cin>>value;
        A.get_element1(i,j,value);

    }
    int m,n;
    cout<<"Enter size of matrix2: ";
    cin>>m>>n;
    matrix B(m,n);
    int i,j,value;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        cin>>value;
        B.get_element1(i,j,value);

    }

    cout<<endl;
    //cout<<A.put_element();
    return 0;
}

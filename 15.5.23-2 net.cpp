#include <iostream>
    #include <cassert>

    int main()
    {
       int rowsA = 3; // number of rows
       int colsA= 3; // number of coloumns
       // dynamically allocating A
       double** A;
       A = new double* [rowsA];
       A[0] = new double [rowsA*colsA];
       for (int i = 1; i < rowsA; i++)
       {
          A[i] = A[i-1] + colsA;
       }

       // Storing elements of matrix A
       for(int i = 0; i < rowsA; ++i)

       {
          for(int j = 0; j < colsA; ++j)

          {

             std::cout << "Enter element A" << i + 1 << j + 1 << " : ";
             std::cin >> A[i][j];

          }
       }

       int rowsB = 3; // number of rows
       int colsB = 3; // number of coloumns
       // dynamically allocating B
       double** B;
       B = new double* [rowsB];
       B[0] = new double [rowsB*colsB];
       for (int i = 1; i < rowsB; i++)
       {
          B[i] = B[i-1] + colsB;
       }

       // Storing elements of matrix B
       for(int i = 0; i < rowsB; ++i)

       {
          for(int j = 0; j < colsB; ++j)

          {

             std::cout << "Enter element B" << i + 1 << j + 1 << " : ";
             std::cin >> B[i][j];

          }
       }

       // checking matrix multiplication qualification
       assert(colsA == rowsB);

       // dynamically allocating C
       double** C;
       C = new double* [rowsA];
       C[0] = new double [rowsA*colsB];
       for (int i = 1; i < rowsA; i++)
       {
          C[i] = C[i-1] + colsB;
       }

       // Initializing elements of matrix C to 0
       for(int i = 0; i < rowsA; ++i)

       {
          for(int j = 0; j < colsB; ++j)
          {

             C[i][j]=0;

          }
       }

       // multiplication
      for(int i = 0; i < rowsA; ++i)

       {
          for(int j = 0; j < colsB; ++j)

          {
             for(int k = 0; k < colsB; ++k)
             {
                C[i][j] += A[i][k] * B[k][j];

             }
          }
       }

       // Displaying the multiplication of matrices A, B

       std::cout<< "Matrix C: " << std::endl;

       for(int i = 0; i < rowsA; ++i)

       {
          for(int j = 0; j < colsB; ++j)

          {

              std::cout << " " << C[i][j];

              if(j == colsB-1)

              {
                  std::cout << std::endl;

              }
          }
       }
       // deallocation
       delete[] C[0];
       delete[] C;
       delete[] B[0];
       delete[] B;
       delete[] A[0];
       delete[] A;
     }


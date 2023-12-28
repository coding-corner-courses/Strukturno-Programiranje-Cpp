#include <iostream>
#include <cmath>

using namespace std;

//Задача 13
// Напиши програма каде ќе се внеси матрица од 5-ти ред преку тастатура и ќе се определи максималната сума по редици. Резултатот да се отпечати.

void insertMatrix(int matrix[][5], int n, int m)
{

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            int number;

            cin>>number;

            matrix[i][j]=number;
        }
    }
}

void printMatrix(int matrix[][5], int n, int m)
{

    cout<<"Matrix: "<<endl;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            cout<<matrix[i][j]<<"\t";
        }

        cout<<endl;
    }
}

int main()
{
    int n=5;

    int matrix[5][5];

    insertMatrix(matrix, n, n);

    printMatrix(matrix, n, n);

    int maxSum = 0;
    int maxI = 0;

    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            sum+=matrix[i][j];
        }

        if(maxSum<sum){
            maxSum=sum;
            maxI=i;
        }
    }

    cout<<"Row "<<maxI<<" has max sum of "<<maxSum<<endl;

    return 0;
}

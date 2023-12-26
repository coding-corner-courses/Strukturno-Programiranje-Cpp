#include <iostream>
using namespace std;

// Задача 3
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од 6-ти ред
// и да се определи максималниот елемент во матрицата. Резултатот да се отпечати.

void insertMatrix(int matrix[][6], int n, int m)
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

void printMatrix(int matrix[][6], int n, int m)
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

int findMax(int matrix[][6], int n, int m)
{

    int maxElement = matrix[0][0];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(maxElement<matrix[i][j])
            {

                maxElement=matrix[i][j];
            }
        }
    }

    return maxElement;
}

int main()
{
    int matrix[6][6];

    insertMatrix(matrix, 6, 6);

    printMatrix(matrix, 6, 6);

    int maxElement = findMax(matrix, 6, 6);

    cout<<"Max: "<<maxElement<<endl;

    return 0;
}

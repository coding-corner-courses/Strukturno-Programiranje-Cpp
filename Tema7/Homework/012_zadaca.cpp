#include <iostream>
#include <cmath>

using namespace std;

//Задача 12
// Напиши програма каде ќе се внеси матрица од 5-ти ред преку тастатура и ќе се формира низа од сумата по колони. Резултатот да се отпечати

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
    int newArray[5];

    insertMatrix(matrix, n, n);

    printMatrix(matrix, n, n);

    for(int j=0; j<n; j++)
    {
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum+=matrix[i][j];
        }

        newArray[j]=sum;
    }

    cout<<"The array is: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<newArray[i]<<" "<<endl;
    }

    return 0;
}

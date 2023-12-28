#include <iostream>
#include <cmath>

using namespace std;

//Задача 11
//  Напиши програма каде ќе се добие матрица од 3-ти ред како следната:
//0      	1      	2
//1      	2      	3
//2      	3      	4
//Резултатот да се отпечати.

void printMatrix(int matrix[][3], int n, int m)
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
    int matrix[3][3];
    int n=3;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
           matrix[i][j]=i+j;
        }
    }

    printMatrix(matrix, 3, 3);


    return 0;
}

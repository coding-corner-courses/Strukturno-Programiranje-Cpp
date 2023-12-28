#include <iostream>
#include <cmath>

using namespace std;

//Задача 8
// Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред и
// ќе ја определи сумата на главна дијагонала и сумата на споредна дијагонала. Двете суми да се отпечатат.

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
    int matrix[5][5];
    int n=5;
    insertMatrix(matrix, n, n);
    printMatrix(matrix, n, n);

    int sumMainDiagonal=0;
    int sumSecondaryDiagonal=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i==j){
                sumMainDiagonal+=matrix[i][j];
            }

            if(i+j==n-1){
                sumSecondaryDiagonal+=matrix[i][j];
            }
        }
    }

    cout<<"The sum of main diagonal is: "<<sumMainDiagonal<<endl;
    cout<<"The sum of secondary diagonal is: "<<sumSecondaryDiagonal<<endl;

    return 0;
}

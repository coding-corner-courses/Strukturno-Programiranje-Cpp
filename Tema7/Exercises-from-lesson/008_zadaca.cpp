#include <iostream>
using namespace std;

// Задача 8
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од  n-ти ред
//и да се определи производот од сите парни вредности кои се наоѓаат на споредна дијагонала. Резултатот да се отпечати.

void insertMatrix(int matrix[][10], int n, int m)
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

void printMatrix(int matrix[][10], int n, int m)
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

int findProductSecondDiagonal(int matrix[][10], int n){

    int product = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i+j==n-1 && matrix[i][j]%2==0){

                product*=matrix[i][j];
            }
        }
    }

    return product;
}

int main()
{
    int n;
    cin>>n;

    int matrix[10][10];

    insertMatrix(matrix,n, n);

    printMatrix(matrix, n, n);

    int product = findProductSecondDiagonal(matrix, n);

    cout<<"Result: "<<product<<endl;

    return 0;
}

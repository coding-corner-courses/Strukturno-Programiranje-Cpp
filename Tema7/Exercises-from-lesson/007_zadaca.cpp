#include <iostream>
using namespace std;

// Задача 7
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од  n-ти ред
//и да се определи сума на главна дијагонала. Резултатот да се отпечати.

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

int findSumMainDiagonal(int matrix[][10], int n)
{

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j){
                sum+=matrix[i][j];
            }
        }
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;

    int matrix[10][10];

    insertMatrix(matrix,n, n);

    printMatrix(matrix, n, n);

    int sum = findSumMainDiagonal(matrix, n);

    cout<<"The result is: "<<sum<<endl;

    return 0;
}

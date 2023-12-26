#include <iostream>
#include <cmath>

using namespace std;

//Задача 11
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица
//од  n-ти ред така што елементите на споредна дијагонала ќе имаат вредност 0,
//елементите под споредна дијагонала ќе имаат вредност -1,
//и елементите над споредна дијагонала ќе имаат вредност 1.
//Резултантната матрица да се отпечати.

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

void transformMatrix(int matrix[][10], int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            // дали лежи на споредна дијагонала
            if(i+j==n-1){
                matrix[i][j]=0;
            }
            // дали лежи над споредна дијагонала
            else if(i+j<n-1){
                matrix[i][j]=1;
            }
            else if(i+j>=n){
                matrix[i][j]=-1;
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;

    int matrix[10][10];

    insertMatrix(matrix,n, n);

    printMatrix(matrix, n, n);

    transformMatrix(matrix, n);

    printMatrix(matrix, n, n);

    return 0;
}

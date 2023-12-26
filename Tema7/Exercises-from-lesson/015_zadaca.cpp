#include <iostream>
#include <cmath>

using namespace std;

//Задача 15
//Да се напиши програма со која ќе може да се добие матрица од  n-ти ред (за даден n преку тастатура) како следната:
//1	2	3
//4	5	6
//7	8	9
//Резултатот да се отпечати.

void printMatrix(int matrix[][10], int n)
{

    cout<<"Matrix: "<<endl;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n; j++)
        {

            cout<<matrix[i][j]<<"\t";
        }

        cout<<endl;
    }
}

void createMatrix(int matrix[][10], int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]= i*n+j+1;
        }
    }
}


int main()
{

    int n;
    cin>>n;

    int matrix[10][10];

    createMatrix(matrix, n);

    printMatrix(matrix, n);

    return 0;
}

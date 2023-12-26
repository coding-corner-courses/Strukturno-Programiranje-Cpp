#include <iostream>
#include <cmath>

using namespace std;

//Задача 13
//Да се напиши програма со која ќе може да се добие матрица од  3-ти ред како следната:
//	0	0	0
//	0	1	2
//	0	2	4
//Резултатот да се отпечати.



void printMatrix(int matrix[][3], int n)
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

void createMatrix(int matrix[][3], int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         matrix[i][j]=i*j;
        }
    }
}


int main()
{
    int matrix[3][3];

    createMatrix(matrix, 3);

    printMatrix(matrix, 3);

    return 0;
}

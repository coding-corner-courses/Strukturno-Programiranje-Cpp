#include <iostream>
#include <cmath>

using namespace std;

//Задача 12
//Да се напиши програма со која ќе се креира матрица од  3-ти ред како следната
//	0	1	2
//	10	11	12
//	20	21	22
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
            matrix[i][j]=10*i+j;
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

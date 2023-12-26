#include <iostream>
using namespace std;

// Задача 4
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од n-ти ред
//и да се определи минималниот елемент и неговите позиции.  Резултатот да се отпечати.

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

void printMinElement (int matrix[][10], int n, int m){

    int minElement = matrix[0][0];
    int minI = 0;
    int minJ = 0;

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(minElement>matrix[i][j]){
                minElement= matrix[i][j];
                minI=i;
                minJ=j;
            }
        }
    }

    cout<<"Min: "<<minElement<<" on position ["<<minI<<", "<<minJ<<"]"<<endl;
}

int main()
{
    int n;
    cin>>n;

    int matrix[10][10];

    insertMatrix(matrix,n , n);

    printMatrix(matrix, n, n);

    printMinElement(matrix, n, n);

    return 0;
}

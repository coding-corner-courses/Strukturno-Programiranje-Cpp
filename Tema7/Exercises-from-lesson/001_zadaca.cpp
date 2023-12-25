#include <iostream>
using namespace std;

// Задача 1
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од 3х4
//и да се определи сумата на сите парни вредности. Резултатот да се отпечати.

void insertMatrix(int matrix[][4], int n, int m)
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

int findSum(int matrix[][4], int n, int m)
{

    int sum=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            sum+=matrix[i][j];
        }
    }

    return sum;
}

void printMatrix(int matrix[][4], int n, int m){

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cout<<matrix[i][j]<<"\t";
        }

        cout<<endl;
    }
}

int main()
{

    int matrix[3][4];

    insertMatrix(matrix, 3, 4);
    int sum = findSum(matrix, 3, 4);
    printMatrix(matrix, 3, 4);

    cout<<"Result: "<<sum<<endl;

    return 0;
}


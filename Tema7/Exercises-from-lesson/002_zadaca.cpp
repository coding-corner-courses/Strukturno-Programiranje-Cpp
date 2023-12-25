#include <iostream>
using namespace std;

// Задача 2
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од 5-ти ред
//и да се определи полузбир од сите вредности деливи со 10. Резултатот да се отпечати.

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

void printMatrix(int matrix[][5], int n, int m){

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cout<<matrix[i][j]<<"\t";
        }

        cout<<endl;
    }
}

double findHalfSum(int matrix[][5], int n, int m){

    int sum = 0;

    for(int i=0;i<n;i++){

        for(int j=0; j<m; j++){

            sum+=matrix[i][j];
        }
    }

    return sum/2.0;
}

int main()
{
    int matrix[5][5];

    insertMatrix(matrix, 5, 5);

    printMatrix(matrix, 5, 5);

    double halfSum = findHalfSum(matrix, 5, 5);

    cout<<"Half sum: "<<halfSum<<endl;

    return 0;
}

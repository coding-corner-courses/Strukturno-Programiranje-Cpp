#include <iostream>
#include <cmath>

using namespace std;

//Задача 16
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од  n-ти ред
//и да се формира нова низа која како елементи ќе ја содржи сумата на елементите од секој ред.
//Резултатот да се отпечати.

void insertMatrix(int matrix[][10], int n)
{

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n; j++)
        {

            int number;

            cin>>number;

            matrix[i][j]=number;
        }
    }
}

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

int main()
{

    int n;
    cin>>n;

    int matrix[10][10];

    insertMatrix(matrix, n);

    printMatrix(matrix, n);

    int resultArray[n];

    for(int i=0;i<n;i++){

        int sum = 0;

        for(int j=0; j<n;j++){
            sum+=matrix[i][j];
        }

        resultArray[i]=sum;
    }

    for(int i=0;i<n;i++){

        cout<<resultArray[i]<<" ";
    }
    return 0;
}

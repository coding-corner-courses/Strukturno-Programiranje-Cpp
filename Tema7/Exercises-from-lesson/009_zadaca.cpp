#include <iostream>
using namespace std;

// Задача 9
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од  n-ти ред
// и да се избројат колку елементи се деливи со 4 кои се наоѓаат над главната дијагонала. Резултатот да се отпечати.

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

int countNumbers(int matrix[][10], int n){

    int counter = 0;

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            if(j>i && matrix[i][j]%4==0){
                counter++;
            }
        }
    }

    return counter;
}

int main()
{
    int n;
    cin>>n;

    int matrix[10][10];

    insertMatrix(matrix,n, n);

    printMatrix(matrix, n, n);

    int counter = countNumbers(matrix, n);

    cout<<"Result: "<<counter<<endl;

    return 0;
}

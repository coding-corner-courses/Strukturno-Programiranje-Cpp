#include <iostream>
#include <cmath>

using namespace std;

//Задача 10
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од  n-ти ред
//и да се одреди производот од елементите кои се наоѓаат под главна дијагонала и сумата од
//елементите кои се наоѓаат под споредна дијагонала.
//Резултатот да се отпечати.

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

int findProduct(int matrix[][10], int n){

    int product = 1;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(i>j){
                product*=matrix[i][j];
            }
        }
    }

    return product;
}

int findSum(int matrix[][10], int n){

    int sum = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i+j>=n){
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

    int product = findProduct(matrix, n);

    int sum = findSum(matrix, n);

    cout<<"Product: "<<product<<endl;
    cout<<"Sum: "<<sum<<endl;

    return 0;
}

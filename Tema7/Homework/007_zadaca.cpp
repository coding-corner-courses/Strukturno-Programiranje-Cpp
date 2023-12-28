#include <iostream>
#include <cmath>

using namespace std;

//Задача 7
//Напиши програма која од стандарден влез ќе прочита две матрици од природни броеви.
//Програмата е потребно да провери дали двете матрици се еднакви. Да се испечати резултатот од споредбата.

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

// Return 1 if the matrices are equal, return 0 otherwise
int checkEquality(int matrix1[][10], int n1, int m1, int matrix2[][10], int n2, int m2)
{
    if(n1!=n2 || m1!=m2)
    {
        return 0;
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m1; j++)
        {
            if(matrix1[i][j]!=matrix2[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{

    int n1,m1;
    cin>>n1>>m1;

    int matrix1[10][10];
    insertMatrix(matrix1, n1, m1);

    int n2,m2;
    cin>>n2>>m2;

    int matrix2[10][10];
    insertMatrix(matrix2, n2, m2);

    printMatrix(matrix1, n1, m1);
    printMatrix(matrix2, n2, m2);

    int areEqual =checkEquality(matrix1, n1, m1, matrix2, n2, m2);

    if(areEqual == 1)
    {
        cout<<"The matrices are equal"<<endl;
    }
    else
    {
        cout<<"The matrices are not equal"<<endl;
    }

    return 0;
}

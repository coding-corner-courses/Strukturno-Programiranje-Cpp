#include <iostream>
using namespace std;

// Задача 5
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица
//од  n-ти ред и да се определи максималниот елемент во 3-та редица.
//(Внимавај на ситуација кога имаме матрица со 2 редици). Резултатот да се отпечати.

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

int main()
{
    int n;
    cin>>n;

    int matrix[10][10];

    insertMatrix(matrix,n, n);

    printMatrix(matrix, n, n);

    if(n<3)
    {
        cout<<"No max element"<<endl;
    }
    else
    {

        int maxElement = matrix[2][0];

        for(int j=0; j<n; j++)
        {

            if(maxElement<matrix[2][j])
            {
                maxElement=matrix[2][j];
            }
        }

        cout<<"Max element "<<maxElement<<endl;
    }

    return 0;
}

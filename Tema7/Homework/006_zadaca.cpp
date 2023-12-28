#include <iostream>
#include <cmath>

using namespace std;

//Задача 6
//Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10, m <= 10)
//што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси ги елементите на матрицата.
//Програмата е потребно да го провери секој ред и секоја колона од матрицата и да отпечати дали
//редот/колоната е строго растечки, строго опаѓачки или ниту строго растечки ниту строго опаѓачки.
//Резултатот за секој ред/колона да се отпечати.

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

void checkByRow(int matrix[][10], int n, int m)
{

    for(int i = 0; i<n; i++)
    {
        int isStrictlyIncreasing = 1;
        int isStrictlyDecreasing = 1;

        for(int j=0; j<m-1; j++)
        {

            if(matrix[i][j]>matrix[i][j+1])
            {
                isStrictlyIncreasing=0;
            }
            else if(matrix[i][j]<matrix[i][j+1])
            {
                isStrictlyDecreasing=0;
            }
            else
            {
                isStrictlyDecreasing=0;
                isStrictlyIncreasing=0;

            }
        }

        if(isStrictlyDecreasing==0 && isStrictlyIncreasing==0)
        {
            cout<<"Row "<<i<<" is not strictly increasing nor strictly decreasing"<<endl;
        }

        if(isStrictlyDecreasing==1)
        {
            cout<<"Row "<<i<<" is strictly decreasing"<<endl;
        }

        if(isStrictlyIncreasing==1)
        {
            cout<<"Row "<<i<<" is strictly increasing"<<endl;
        }
    }
}

void checkByColumn(int matrix[][10], int n, int m)
{

    for(int j = 0; j<m; j++)
    {
        int isStrictlyIncreasing = 1;
        int isStrictlyDecreasing = 1;

        for(int i=0; i<n-1; i++)
        {

            if(matrix[i][j]>matrix[i+1][j])
            {
                isStrictlyIncreasing=0;
            }
            else if(matrix[i][j]<matrix[i+1][j])
            {
                isStrictlyDecreasing=0;
            }
            else
            {
                isStrictlyDecreasing=0;
                isStrictlyIncreasing=0;

            }
        }

        if(isStrictlyDecreasing==0 && isStrictlyIncreasing==0)
        {
            cout<<"Column "<<j<<" is not strictly increasing nor strictly decreasing"<<endl;
        }

        if(isStrictlyDecreasing==1)
        {
            cout<<"Column "<<j<<" is strictly decreasing"<<endl;
        }

        if(isStrictlyIncreasing==1)
        {
            cout<<"Column "<<j<<" is strictly increasing"<<endl;
        }
    }
}

int main()
{

    int n,m;
    cin>>n>>m;

    int matrix[10][10];

    insertMatrix(matrix, n, m);

    printMatrix(matrix, n, m);

    checkByRow(matrix, n, m);

    checkByColumn(matrix, n, m);

    return 0;
}

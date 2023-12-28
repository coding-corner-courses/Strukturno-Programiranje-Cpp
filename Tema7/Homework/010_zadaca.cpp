#include <iostream>
#include <cmath>

using namespace std;

//Задача 10
//Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред
// и да се определи аритметичката средина над споредна дијагонала од сите
// вредности и аритметичката средина под споредна дијагонала од сите вредности.
// Резултатите да се отпечатат.

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

void printMatrix(int matrix[][5], int n, int m)
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
    int matrix[5][5];
    int n=5;
    insertMatrix(matrix, n, n);
    printMatrix(matrix, n, n);

    int sum1=0;
    int count1=0;
    int sum2=0;
    int count2=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j+i<n-1)
            {
                sum1+=matrix[i][j];
                count1++;

            }

            if(j+i>n-1)
            {
                sum2+=matrix[i][j];
                count2++;
            }
        }
    }

    cout<<"The sum above secondary diagonal is: "<<sum1*1.0/count1<<endl;
    cout<<"The sum below secondary diagonal is: "<<sum2*1.0/count2<<endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

////Задача 1
//Напиши ги следните функции:
//a. Функција преку која ќе може да се внеси матрица од n x m елементи (n<10, m<10)
//b. Функција која ќе отпечати дадена матрица.
//c. Функција која ќе ја пронајде максималната вредност во дадена матрица и ќе ја отпечати вредноста и позицијата на елементот
//d. Функција која ќе ја пронајде минималната вредност во дадена матрица и ќе ја отпечати вредноста и позицијата на елементот
//e. Функција која за дадена матрица ќе ја пронајди сумата на сите броеви во матрицата. Отпечати ја вратената вредност од функцијата.
//f. Функција која за дадена матрица ќе ја пронајди просечната вредност на сите броеви во матрицата. Отпечати ја вратената вредност од функцијата.

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

void printMax(int matrix[][10], int n, int m)
{

    int maxElement=matrix[0][0];
    int maxI=0;
    int maxJ=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(maxElement < matrix[i][j])
            {
                maxElement=matrix[i][j];
                maxI=i;
                maxJ=j;
            }
        }
    }

    cout<<"The max element is: "<<maxElement<<" on position "<<maxI<<", "<<maxJ<<endl;
}

void printMin(int matrix[][10], int n, int m)
{

    int minElement=matrix[0][0];
    int minI=0;
    int minJ=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(minElement > matrix[i][j])
            {
                minElement=matrix[i][j];
                minI=i;
                minJ=j;
            }
        }
    }

    cout<<"The min element is: "<<minElement<<" on position "<<minI<<", "<<minJ<<endl;
}

int findSum(int matrix[][10], int n, int m)
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

double findAverage(int matrix[][10], int n, int m)
{
    return findSum(matrix, n, m) *1.0/(m*n);
}

int main()
{

    int n,m;
    cin>>n>>m;

    int matrix[10][10];

    insertMatrix(matrix, n, m);

    printMatrix(matrix, n, m);

    printMax(matrix, n, m);

    printMin(matrix, n, m);

    int sum = findSum(matrix, n, m);
    double average = findAverage(matrix, n, m);

    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;

    return 0;
}

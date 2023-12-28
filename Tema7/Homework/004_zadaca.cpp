#include <iostream>
#include <cmath>

using namespace std;

//Задача 4
// Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10, m <= 10)
// што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси ги елементите на матрицата.
//Програмата да го пресмета збирот на парните елементи во матрицата и збирот на непарните елементи во матрицата.
//Резултатот да се испечати.

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

void findSums(int matrix[][10], int n, int m)
{
    int sumEven=0;
    int sumOdd=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j]%2==0)
            {
                sumEven+=matrix[i][j];
            }
            else
            {
                sumOdd+=matrix[i][j];
            }
        }
    }

    cout<<"The sum of even elements: "<<sumEven<<endl;
    cout<<"The sum of odd elements: "<<sumOdd<<endl;
}

int main()
{

    int n,m;
    cin>>n>>m;

    int matrix[10][10];

    insertMatrix(matrix, n, m);

    printMatrix(matrix, n, m);

    findSums(matrix, n, m);

    return 0;
}

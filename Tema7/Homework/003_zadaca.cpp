#include <iostream>
#include <cmath>

using namespace std;

//Задача 3
//Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10, m <= 10)
//што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси ги елементите на матрицата.
//Креирај нова матрица која ќе биди трансформација на внесената матрица така што секој елемент ќе биди
//трансформиран во својот број на десетки (пр. 175 -> 7, 87-> 8, 5 ->0). Отпечати ја добиената матрица.

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

void transformMatrix(int matrix[][10], int n, int m)
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int tensDigit = (matrix[i][j]%100)/10;

            matrix[i][j]=tensDigit;
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

    transformMatrix(matrix, n, m);

    printMatrix(matrix, n, m);

    return 0;
}

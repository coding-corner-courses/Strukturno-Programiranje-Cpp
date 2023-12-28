#include <iostream>
#include <cmath>

using namespace std;

////Задача 2
//Напиши програма која од стандарден влез ќе прочита број на редици
//и колони (n <= 10, m <= 10) што ќе ги содржи една матрица од природни броеви.
//Од стандарден влез внеси ги елементите на матрицата.
//Програмата е потребно да ги промени местата на минималната и максималната вредност во матрицата.

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

    int n,m;
    cin>>n>>m;

    int matrix[10][10];

    insertMatrix(matrix, n, m);

    printMatrix(matrix, n, m);

    int maxElement=matrix[0][0];
    int maxI=0;
    int maxJ=0;

    int minElement=matrix[0][0];
    int minI=0;
    int minJ=0;

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

            if(minElement > matrix[i][j])
            {
                minElement=matrix[i][j];
                minI=i;
                minJ=j;
            }
        }
    }

    matrix[minI][minJ]=maxElement;
    matrix[maxI][maxJ]=minElement;

    printMatrix(matrix, n, m);

    return 0;
}

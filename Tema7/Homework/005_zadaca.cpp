#include <iostream>
#include <cmath>

using namespace std;

//Задача 5
//Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10, m <= 10)
//што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси ги елементите на матрицата.
//Програмата е потребно да креира нова матрица која ќе ги содржи елементите од матрицата,
//но дупликатите да бидат заменети со -1. Резултатот да се испечати.


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

// returns 1 if the element exist in the matrix, otherwise returns 0
int checkIfElementExist(int element, int matrix[][10], int n, int m)
{
    int sumEven=0;
    int sumOdd=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(element == matrix[i][j])
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{

    int n,m;
    cin>>n>>m;

    int matrix[10][10];
    int matrixWithoutDuplicates[10][10];

    insertMatrix(matrix, n, m);

    printMatrix(matrix, n, m);

    
    // initialize the new matrix to have all -1
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            matrixWithoutDuplicates[i][j]=-1;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(checkIfElementExist(matrix[i][j], matrixWithoutDuplicates, n, m)==0)
            {
                matrixWithoutDuplicates[i][j]=matrix[i][j];
            }
        }
    }

    printMatrix(matrixWithoutDuplicates, n, m);

    return 0;
}

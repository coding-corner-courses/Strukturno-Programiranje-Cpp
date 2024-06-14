#include <iostream>

using namespace std;

//Испит Јуни 13, 2024 (Задача 3)
//Напиши програма каде што се внесува матрица преку тастатура.
//Програмата е потребно да провери колку пати се содржи внесена колона во матрицата. Резултатот да се отпечати.
//
//Пр.
// Влез:
// 3 4 
// 2    4	  5	  4
// 1	  9	  0	  9
// 2	  0	  1	  0
// 4 9 0 

// 4 9 0 - колона која ја бараме

//Излез: 2
int main()
{
    int n,m;
    cin>>n>>m;
    int matrix[10][10];
    int column[n];

    // INSERT MATRIX
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            int number;

            cin>>number;

            matrix[i][j]=number;
        }
    }

    // INSERT COLUMN
    for(int i=0; i<n; i++)
    {
        int number;

        cin>>number;

        column[i]=number;
    }

    int matchingColumns=0;

    for(int j=0; j<m; j++)
    {


        // We make a prediction that the column that we are iterating through
        // is equal with the one which was entered by the user
        bool isMatching = true;

        for(int i=0; i<n; i++)
        {

            // if we find an element which is not equal, we can say that the columns are not equal
            if(matrix[i][j]!=column[i])
            {
                isMatching = false;
                break;
            }
        }

        if(isMatching)
        {
            matchingColumns++;
        }
    }

    cout<<matchingColumns<<endl;

    return 0;
}

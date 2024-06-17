#include <iostream>

using namespace std;

//Испит Јуни 13, 2024 (Задача 3)
//Напиши програма каде што се внесува матрица преку тастатура.
//Програмата е потребно да провери колку пати се содржи секоја колона во матрицата и да се отпечати
//бројот на појавувања на колоната како прв ред во матрицата.

//Пр.
// Влез:
// 3 4
// 2    4	  5	  4
// 1	9	  0	  9
// 2    0	  1	  0


//Излез:
// 1   2     1    2
// 2   4	  5	  4
// 1	9	  0	  9
// 2    0	  1	  0

int main()
{
    int n,m;
    cin>>n>>m;
    int matrix[10][10];

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


    // Iterate through columns
    for(int columnIndex=0; columnIndex<m; columnIndex++)
    {

        int column[n];
        int matchingColumns=0;

        // Current column
        for(int i=0; i<n; i++)
        {
            column[i]=matrix[i][columnIndex];
        }


        // Compare all columns with the column which we iterate through
        for(int j=0; j<m; j++)
        {

            // We make a prediction that the column that we are iterating through
            // is equal with the one that is compared to
            bool isMatching = true;

            for(int i=0; i<n; i++)
            {

                if(matrix[i][j]!=column[i])
                {
                    isMatching = false;
                }
            }

            if(isMatching)
            {
                matchingColumns++;
            }
        }

        cout<<matchingColumns<<"\t";
    }

    cout<<endl;

    // Print the matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }

        cout<<endl;
    }

    return 0;
}

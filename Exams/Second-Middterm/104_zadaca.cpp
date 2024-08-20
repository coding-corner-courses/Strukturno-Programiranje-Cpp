#include <iostream>

using namespace std;

//Задача 4 - Дополнителни задачи за вежбање
//Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи.
//Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
//Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната k се заменуваат
//со минималната вредност од матрицата А.
//Пример
//Влез
//4 6 // m и n
//2 3 // r и k
//1 2 3 4 5 1
//2 9 4 5 1 3
//4 5 6 7 3 2
//1 2 3 3 2 8
//
//Излез
//1 1 1 4 5 1
//1 1 1 5 1 3
//4 5 6 7 3 2
//1 2 3 3 2 8

int main()
{
    int m,n,r,k;

    int matrix[30][30];

    cin>>n>>m>>r>>k;

    // Read the matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int number;
            cin>>number;
            matrix[i][j]=number;
        }
    }

    int minNumber = matrix[0][0];

    // Find min number in matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j]<minNumber)
            {
                minNumber=matrix[i][j];
            }
        }
    }

    // Change the elements which meet the condition with the min value
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i<r && j<k)
            {
                matrix[i][j]=minNumber;
            }

        }
    }

    // Print the transformed matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            cout<<matrix[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}

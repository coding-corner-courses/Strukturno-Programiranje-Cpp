#include<iostream>
#include<cstring>

using namespace std;

//Задача 6
//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
//На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
//Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.
// 1 1 1 0
// 1 0 1 1
// 1 0 0 1

int main()
{

    int n,m;

    cin>>n>>m;

    int matrix[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int number;
            cin>>number;
            matrix[i][j]=number;
        }
    }

    int counter=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m-2; j++)
        {
            if(matrix[i][j]==1 && matrix[i][j+1]==1 && matrix[i][j+2]==1)
            {
                counter++;
                break;
            }
        }
    }

    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n-2; i++)
        {
            if(matrix[i][j]==1 && matrix[i+1][j]==1 && matrix[i+2][j]==1)
            {
                counter++;
                break;
            }
        }
    }

    cout<<counter<<endl;

    return 0;
}

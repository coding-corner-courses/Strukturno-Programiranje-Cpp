#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

//Задача 13
//Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N (цели броеви). Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
//
//Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
//Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
//Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
//Променетата матрица да се испечати на екран.

int getElementValue(int sum, int x)
{
    if(sum>x)
    {
        return 1;
    }
    else if(sum<x)
    {
        return -1;
    }

    return 0;
}
int main()
{
    int x;
    cin>>x;

    int m,n;
    cin>>m>>n;

    int matrix[m][n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int number;
            cin>>number;

            matrix[i][j]=number;
        }
    }

    // Transform matrix
    for(int i=0; i<m; i++)
    {
        int sum=0;

        for(int j=0; j<n; j++)
        {
            sum+=matrix[i][j];
        }

        int element=getElementValue(sum, x);

        for(int j=0; j<n; j++)
        {
            matrix[i][j]=element;
        }
    }

    // Print matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

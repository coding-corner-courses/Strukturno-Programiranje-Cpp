#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

//Задача 14
//Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50). 
//Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона
//ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.
//
//Пример за N = 3 Влез:
//
//1  2  3  4  5  6
//7  8  9  10 11 12
//13 14 15 16 17 18
//
//Излез: 
//1  2  3 
//7  8  9
//13 14 15 
//4  5  6
//10 11 12
//16 17 18

int main()
{
    int n;
    cin>>n;

    int matrix[n][2*n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*n; j++)
        {
            int number;
            cin>>number;

            matrix[i][j]=number;
        }
    }
    
    int transformedMatrix[2*n][n];


    // Transform matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            transformedMatrix[i][j]=matrix[i][j];
        }
    }
    
    for(int i=n;i<2*n;i++){
        for(int j=0; j<n; j++)
        {
            transformedMatrix[i][j]=matrix[i-n][j+n];
        }
    }

    // Print matrix
    for(int i=0; i<2*n; i++)
    {
        for(int j=0; j<n; j++)
        {

            cout<<transformedMatrix[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

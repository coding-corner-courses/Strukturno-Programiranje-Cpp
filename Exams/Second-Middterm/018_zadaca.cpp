#include<iostream>
#include<math.h>

using namespace std;

//Задача 18
//За квадратна матрица А со димензии n x n, од стандарден влез се внесува бројот n (n > 2)
//и елементите на матрицата (реални броеви). Нека X e збирот од елементите под главната дијагонала во матрицата А.
//Нека Y е збирот од елементите под споредната дијагонала во матрицата А. Да се креира нова матрица B на следниот начин:
//сите елементи од главната дијагонала во матрицата B треба да имаат вредност X
//сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y
//ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B, тогаш неговата вредност e X+Y
//сите останати елементи во матрицата B имаат вредност 0
//Новата матрица B да се испечати на стандарден излез.

int main()
{
    int n;

    cin>>n;

    double matrix[n][n];

    // Insert matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            double number;
            cin>>number;
            matrix[i][j]=number;
        }
    }

    double sumaPodGlavna=0;
    double sumaPodSporedna=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<i)
            {
                sumaPodGlavna+=matrix[i][j];
            }

            if(i+j>=n)
            {
                sumaPodSporedna+=matrix[i][j];
            }
        }
    }

    // Transform matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            // element shto lezi na glavna i sporedna dijagonala
            if(i==j && i+j==n-1)
            {
                matrix[i][j]=sumaPodGlavna+sumaPodSporedna;
            }
            // element shto lezi na sporedna dijagonala
            else if(i+j==n-1)
            {
                matrix[i][j]=sumaPodSporedna;
            }
            // element shto lezi na glavna dijagonala
            else if(i==j)
            {
                matrix[i][j]=sumaPodGlavna;
            }
            else
            {
                matrix[i][j]=0;
            }
        }
    }

    // Print matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

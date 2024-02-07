#include<iostream>
#include<math.h>

using namespace std;

//Задача 17
//Од тастатура се внесуваат димензиите на една матрица (m,n <= 100),
//а потоа и елементите од матрицата. Да се трансформира матрицата така
//што средниот елемент во секоја редица ќе се замени со разликата
//(по апсолутна вредност) на сумата на елементите во првата половина
//од редицата и сумата на елементите во втората половина на редицата.
//Ако матрицата има парен број колони, се менува вредноста на средните два елемента.
//Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони,
//средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица.

int main()
{
    int m,n;

    cin>>m>>n;

    int matrix[m][n];

    // Insert matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int number;
            cin>>number;
            matrix[i][j]=number;
        }
    }

    // n=3; 1 2 3
    // n=4; 1 2 3 4

    int limit = n%2==0? n/2: (n/2) +1;
    int firstSum =0;
    int secondSum=0;

    // Find sum of each row
    for(int i=0; i<m; i++)
    {
        firstSum=0;
        secondSum=0;

        for(int j=0; j<limit; j++)
        {

            firstSum+=matrix[i][j];

            secondSum+=matrix[i][n-j-1];
        }

        int result = abs(firstSum-secondSum);

        int newJ = n%2 == 0? limit: limit-1;
        
        // middle element when n%2!=0, 
        // or the second element of the elements in the middle when n%2==0
        matrix[i][newJ]=result;

        if(n%2==0)
        {
            // the first element of the elements in the middle
            matrix[i][limit-1]=result;
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

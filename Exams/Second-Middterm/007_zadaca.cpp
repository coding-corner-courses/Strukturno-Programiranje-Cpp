#include<iostream>
#include <cmath>

using namespace std;

//Задача 7
//Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
//Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот
//во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
//Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
//Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
//
//Пример:
//
//Влез:
//
//3 6
//
//1 2 2 3 4 5
//
//1 1 2 2 3 3
//
//1 2 3 4 5 6
//
//Излез:
//
//5 1 1

int main()
{

    int n,m;

    cin>>m>>n;

    int matrix[m][n];

    int newArray[m];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int number;
            cin>>number;
            matrix[i][j]=number;
        }
    }


    for(int i=0; i<m; i++)
    {

        int sum=0;

        for(int j=0; j<n; j++)
        {
            sum+=matrix[i][j];
        }

        double average = ((double)sum) / n;

        double maxDifference = -1;

        double element = 0;

        for(int j=0; j<n; j++)
        {
            double currentDifference = abs(matrix[i][j]-average);

            if(currentDifference>maxDifference){
                maxDifference = currentDifference;
                element = matrix[i][j];
            }
        }

        newArray[i]=element;
    }


    for(int i=0;i<m;i++){
        cout<<newArray[i]<<" ";
    }

    return 0;
}

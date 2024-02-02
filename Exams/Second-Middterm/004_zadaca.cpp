#include<iostream>

using namespace std;

//Задача 4
//Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата).
//Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).
//
//Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100).
//Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.
//
//Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез.
//Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот.
//Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.

int main()
{

    int n, m;
    cin>>n>>m;

    int matrix[n][m];

    int sum1=0, sum2=0, sum3=0, sum4=0;

    // Read matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int number;
            cin>>number;
            matrix[i][j]=number;
        }
    }

    // Position of the element which separates the matrix
    int elementI, elementJ;
    cin>>elementI>>elementJ;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i<elementI && j>=elementJ)
            {
                sum1+=matrix[i][j];
            }
            else if(i<elementI && j<elementJ)
            {
                sum2+=matrix[i][j];
            }
            else if(i>=elementI && j<elementJ)
            {
                sum3+=matrix[i][j];
            }
            else if(i>=elementI && j>=elementJ)
            {
                sum4+=matrix[i][j];
            }
        }
    }

    cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<endl;

    return 0;
}

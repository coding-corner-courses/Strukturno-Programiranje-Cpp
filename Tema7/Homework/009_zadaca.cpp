#include <iostream>
#include <cmath>

using namespace std;

//Задача 9
//Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред
//и да се определи полузбир од сите вредности деливи со 3 над главна дијагонала
// и полузбир под главна дијагонала од сите вредности поголеми од 10. Резултатите да се отпечатат.

void insertMatrix(int matrix[][5], int n, int m)
{

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            int number;

            cin>>number;

            matrix[i][j]=number;
        }
    }
}

void printMatrix(int matrix[][5], int n, int m)
{

    cout<<"Matrix: "<<endl;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            cout<<matrix[i][j]<<"\t";
        }

        cout<<endl;
    }
}

int main()
{
    int matrix[5][5];
    int n=5;
    insertMatrix(matrix, n, n);
    printMatrix(matrix, n, n);

    int sum1=0;
    int sum2=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(j>i && matrix[i][j]%3==0){
                sum1+=matrix[i][j];
            }

            if(i>j&& matrix[i][j]>10){
                sum2+=matrix[i][j];
            }
        }
    }

    cout<<"The sum above main diagonal is: "<<sum1<<endl;
    cout<<"The sum below main diagonal is: "<<sum2<<endl;

    return 0;
}

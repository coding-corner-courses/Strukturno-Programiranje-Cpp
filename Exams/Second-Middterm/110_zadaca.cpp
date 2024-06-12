#include <iostream>
using namespace std;

//Задача 10 - Дополнителни задачи за вежбање
//Од стандарден влез се читаат елементите на една матрица (A), составена од цели броеви. 
//Прво се читаат бројот на редици N и бројот на колони M на матрицата (N, M < 120), 
//а потоа и самите елементи на матрицата.
//Да се испечати колку индексни броеви има во секоја колона поединечно.
//Индексен број е број чија вредност е идентична со вредноста што се добива со спојување 
//
//на индексот од редицата и колоната на елементот.
//Помош:
//Индексен елемент: вредноста на елементот Aij е иста со ij како број
//- ако i=10, j=31, елементот Aij треба да има вредност 1031 за да биде индексен број

int main()
{
    int n,m;

    cin>>n>>m;

    int matrix[120][120];

    // Insert matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int number;
            cin>>number;
            matrix[i][j]=number;
        }
    }


    for(int j=0; j<m; j++)
    {

        int counter=0;

        for(int i=0; i<n; i++)
        {

            int multiplier = 10;

            if(j>=10)
            {
                multiplier = 100;
            }

            if(j>=100)
            {
                multiplier = 1000;
            }

            if(i*multiplier+j == matrix[i][j])
            {
                counter++;
            }
        }

        cout<<counter<<endl;
    }


    return 0;
}

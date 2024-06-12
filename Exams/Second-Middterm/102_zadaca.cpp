#include <iostream>

using namespace std;

/*
Задача 2 - Дополнителни задачи за вежбање

Од тастатура се чита природен број N (N < 400).
Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед на следниот начин: во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн. Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N. Доколку има преостанати празни места, тие да се пополнат со нули.

Пример.
Влез
22

Излез
1	10	11	20	21
2	9	12	19	22
3	8	13	18	0
4	7	14	17	0
5	6	15	16	0 
*/


int main()
{
    int matrix[10][10];
    int number;
    cin>>number;

    int n = sqrt(number);

    int currentNumber = 1;

    if(n*n < number)
    {
        n++;
    }

    for(int j=0; j<n; j++)
    {

        if(j%2==0)
        {

            for(int i=0; i<n; i++)
            {
                if(currentNumber<=number)
                {
                    matrix[i][j]=currentNumber;
                }
                else
                {
                    matrix[i][j]=0;
                }

                currentNumber++;

            }
        }
        else
        {
            for(int i=n-1; i>= 0; i--)
            {

                if(currentNumber<=number)
                {
                    matrix[i][j]=currentNumber;
                }
                else
                {
                    matrix[i][j]=0;
                }

                currentNumber++;

            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
    }


    return 0;
}

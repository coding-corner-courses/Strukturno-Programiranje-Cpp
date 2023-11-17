#include <iostream>

using namespace std;

//Задача 8
//Од стандарден влез се внесуваат два цели броја N и Х.
//Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//Еден број е тотално различен од друг ако
//и само ако во него не се појавува ниту една од цифрите на другиот број.
//Задачата да се реши без употреба на низи и матрици.
//For example:
//Input    Result
//88 7
//86
int main()
{
    int n,x;
    cin>>n>>x;

    int totallyDifferent = 0;

    for(int i=n-1; i>0; i--)
    {

        int newNumberI = i;
        bool isTotallyDifferent = 1;

        while(newNumberI !=0 && isTotallyDifferent==1)
        {
            int newXNumber = x;

            int digitI = newNumberI % 10;

            while (newXNumber != 0)
            {

                int digitX = newXNumber %10;

                if(digitI == digitX)
                {
                    isTotallyDifferent = 0;
                    break;
                }

                newXNumber = newXNumber /10;
            }

            newNumberI = newNumberI / 10;
        }

        if(isTotallyDifferent==1)
        {
            totallyDifferent = i;
            break;
        }
    }

    cout<<totallyDifferent<<endl;

    return 0;
}

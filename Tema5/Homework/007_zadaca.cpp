#include <iostream>

using namespace std;

//Задача 7
//Од стандарден влез се внесуваат два цели броја N и Х. Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
//Задачата да се реши без употреба на низи и матрици.
//For example:
//Input: 88 7
//Result: 86
//
//А. Да се направи функција која ќе проверува дали еден број е тотално различен од даден број. Функцијата како резултат да враќа 0 или 1, соодветно.

bool checkTotallyDifferent(int firstNumber,int secondNumber){

        int newFirstNumber = firstNumber;
        int newSecondNumber = secondNumber;

         while(newFirstNumber !=0)
        {
            int digitOfFirstNumber = newFirstNumber % 10;

            while (newSecondNumber != 0)
            {

                int digitOfSecondNumber = newSecondNumber %10;

                if(digitOfSecondNumber == digitOfFirstNumber)
                {
                    return 0;
                }

                newSecondNumber = newSecondNumber /10;
            }

            newFirstNumber = newFirstNumber / 10;
        }

        return 1;
}

int main()
{
    int n,x;
    cin>>n>>x;

    int totallyDifferent = 0;

    for(int i=n-1; i>0; i--)
    {

        bool isTotallyDifferent = checkTotallyDifferent(i, x);

        if(isTotallyDifferent==1)
        {
            totallyDifferent = i;
            break;
        }
    }

    cout<<totallyDifferent<<endl;

    return 0;
}

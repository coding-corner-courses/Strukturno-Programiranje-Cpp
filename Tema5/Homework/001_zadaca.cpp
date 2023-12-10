#include <iostream>

using namespace std;

//Задача 1
//Напиши функција која е потребно да провери дали даден број е прост (бројот е зададен како аргумент во функцијата).
//Функцијата треба да врати 0, доколку бројот не е прост и 1, доколку бројот е прост.

int isPrime(int number)
{

    for(int i=2; i<number; i++)
    {

        if(number % i == 0)
        {

            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;

    cin>>n;

    int result = isPrime(n);

    cout<<"Is prime: "<<result<<endl;

    return 0;
}

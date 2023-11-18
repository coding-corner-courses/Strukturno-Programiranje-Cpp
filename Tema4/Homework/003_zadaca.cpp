#include <iostream>

using namespace std;

//Задача 3
//Напиши програма каде што во ранг од [100, 500] ќе се избројат колку елементи
//завршуваат на 5, и колку елементи завршуваат на 6 и од кој елемент има повеќе.
//Резултатот да се отпечати.
int main()
{
    int endsWith5=0;
    int endsWith6=0;

    for(int i=100; i<=500; i++)
    {
        int lastDigit = i%10;

        if(lastDigit == 5)
        {
            endsWith5++;
        }

        if(lastDigit == 6)
        {
            endsWith6++;
        }
    }

    cout<<"Numbers that ends with 5: "<<endsWith5<<endl;
    cout<<"Numbers that ends with 6: "<<endsWith6<<endl;

    if(endsWith5 > endsWith6)
    {
        cout<<"There are more numbers that end with 5"<<endl;
    }
    else if(endsWith5 < endsWith6)
    {
        cout<<"There are more numbers that end with 6"<<endl;
    }
    else
    {
        cout<<"There are equal numbers that end with 5 and 6"<<endl;
    }

    return 0;
}

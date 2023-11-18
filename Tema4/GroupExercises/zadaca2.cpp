#include <iostream>

using namespace std;

//Задача 2 (Колегијален број)
//Од тастатура се внесува четирицифрен број N што во себе содржи барем 2 цифри со вредност 5.
//Колега на тој број е бројот кој на позициите на кои има 5-ки во првиот број ќе има 6-ка
//во бројот колега. (Пр. колега на 5551 е 6661)
//На екран да се испечати за колку проценти едниот број е поголем/помал од другиот број.
//Да се има во предвид дека некогаш може да биде поголем бројот n, а некогаш неговиот колега.
//Доколку бројот n не содржи најмалку 2 цифри со вредност 5, да се испечати дека е внесен грешен број.
int main()
{
    int number;

    cin>>number;

    // 1234

    int newNumber = number;
    int countFives = 0;
    int coleagueNumber = 0;
    int multiplier = 1;
    float percentage = 0;

    while(newNumber != 0)
    {

        int digit = newNumber % 10;

        if(digit == 5)
        {
            digit = 6;
            countFives++;
        }

        coleagueNumber = digit * multiplier + coleagueNumber;

        multiplier = multiplier * 10;

        newNumber = newNumber /10;
    }

    if(countFives < 2)
    {
        cout<<"Gresen broj"<<endl;
    }
    else
    {
        if(coleagueNumber>number)
        {

            percentage =((coleagueNumber - number)*1.0/number) * 100;
        }
        else
        {
            percentage =((number - coleagueNumber)*1.0/coleagueNumber) * 100;
        }

        cout<<coleagueNumber<<endl;
        cout<<percentage<<endl;
    }

    return 0;
}

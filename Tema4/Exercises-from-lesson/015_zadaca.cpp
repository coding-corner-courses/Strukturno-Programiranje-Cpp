#include <iostream>

using namespace std;

//Напиши програма каде за внесен број преку тастатура ќе се изброи колку цифри се 4,6,7,
//а колку се останатите цифри. Да се провери од кои има повеќе и резултатот да се испечати на екран.
//Пр. Brojot na cifrite 4,6,7 e 3
//Brojot na ostanati cifri e 4.
//Pogolem e brojot na ostanati cifri.
int main()
{

    int number;

    cin>>number;

    int expectedDigit = 0;
    int otherDigit = 0;
    int newNumber = number;

    // Пр. 246
    // Итерација 1
    // newNumber = 246/10 = 24
    // digit = 246 % 10 = 6
    // Итерација 2
    // newNumber = 24/10 = 2
    // digit = 24 % 10 = 4
    // Итерација 3
    // newNumber = 2/10 = 0
    // digit = 2 % 10 = 2

    while(newNumber != 0)
    {

        int digit = newNumber % 10;

        if(digit == 4 || digit == 6 || digit == 7)
        {
            expectedDigit++;
        }
        else
        {
            otherDigit++;
        }

        newNumber = newNumber / 10;
    }

    cout<<"Brojot na cifrite 4,6,7 e "<<expectedDigit<<endl;
    cout<<"Brojot na ostanati cifri e "<<otherDigit<<endl;

    if(expectedDigit > otherDigit)
    {
        cout<<"Brojot na cifrite 4, 6, 7 e pogolem"<<endl;
    }
    else if(otherDigit > expectedDigit)
    {
        cout<<"Brojot na ostanati cifri e pogolem"<<endl;
    }

    return 0;
}

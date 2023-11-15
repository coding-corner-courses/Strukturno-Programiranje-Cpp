#include <iostream>

using namespace std;

//Задача 12
//Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри)
//се додека не се внесе нешто различно од број. За секој број треба да се најде позицијата
//(од десно на лево) на првото појавување на најголемата цифра во составот на бројот
//(цифрата на единици се наоѓа на позиција 0).
//Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:
//
//[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]
//0: 2
//1: 3
//2: 1
//3: 1
//4: 1
//за броевите 97654 48654 12345 12343 1263 12443 12643 12777
int main()
{
    int number;

    cin>>number;

    int maxPosition0 = 0;
    int maxPosition1 = 0;
    int maxPosition2 = 0;
    int maxPosition3 = 0;
    int maxPosition4 = 0;

    while(number!=0)
    {
        int newNumber = number;

        int maxDigit = -1;
        int maxPosition = -1;
        int currentPosition = 0;
        while(newNumber != 0)
        {

            int digit = newNumber % 10;

            if(digit > maxDigit)
            {
                maxPosition = currentPosition;
                maxDigit = digit;
            }

            currentPosition++;
            newNumber = newNumber /10;
        }

        switch(maxPosition)
        {
        case 0:
            maxPosition0++;
            break;
        case 1:
            maxPosition1++;
            break;
        case 2:
            maxPosition2++;
            break;
        case 3:
            maxPosition3++;
            break;
        case 4:
            maxPosition4++;
            break;
        }

        cin>>number;
    }

    cout<<"0: "<<maxPosition0<<endl;
    cout<<"1: "<<maxPosition1<<endl;
    cout<<"2: "<<maxPosition2<<endl;
    cout<<"3: "<<maxPosition3<<endl;
    cout<<"4: "<<maxPosition4<<endl;

    return 0;
}

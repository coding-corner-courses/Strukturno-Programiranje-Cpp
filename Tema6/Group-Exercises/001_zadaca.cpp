#include <iostream>
#include <cmath>

using namespace std;

//Да се напише програма која од стандарден влез чита димензија на низа (n<=100) и нејзините вредности.
//Потоа низата треба да се трансформира на следниот начин:
//Секој елемент од низата се заменува со неговиот двојник број.
//Двојник број е бројот кој што се добива со замена на неговите парни цифри што се наоѓаат на парни позиции со 0.
//Се смета дека најмалку значајната цифра се наоѓа на позиција 1 (пр. 12345 -> 10305, 212121 -> 10101, 22222 -> 20202).
//Трансформацијата на секој од елементите (поединечно) треба да се направи со помош на функцијата “dvojnik”, која задолѓително треба да е рекурзивна.
//На излез да се испечатат само изменетите елементи од влезната низа.
//
//Пример:
//
//Влезна низа: 53 2131 10 421 2240 12345
//Меѓуниза: 53 131 10 401 200 10305
//Излез: 131 401 200 10305

void fillArray(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {

        int number;
        cin>>number;

        numbers[i]=number;
    }
}

void printArray(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;
}

int dvojnik(int inputNumber, bool lastDigitIsEvenPosition, int counter)
{
    //Ако е последниот број
    if(inputNumber<9)
    {

        if(lastDigitIsEvenPosition==1 && inputNumber%2==0)
        {
            return 0;
        }
        else
        {
            return inputNumber * pow(10, counter);
        }
    }

    // моментална најзначајна цифра
    int digit = inputNumber % 10;

    if(digit%2==0 && lastDigitIsEvenPosition==1)
    {

        return dvojnik(inputNumber/10, !lastDigitIsEvenPosition, counter+1);
    }

    return  digit * pow(10, counter) + dvojnik(inputNumber/10, !lastDigitIsEvenPosition, counter+1);
}

void transformArray(int numbers[], int n)
{

    cout<<"Transformed array: "<<endl;

    for(int i=0; i<n; i++)
    {

        int transformedNumber = dvojnik(numbers[i], 0, 0);

        if(transformedNumber != numbers[i])
        {
            numbers[i]= transformedNumber;
            cout<<transformedNumber<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int numbers[n];

    fillArray(numbers, n);
    printArray(numbers, n);
    transformArray(numbers, n);

    return 0;
}

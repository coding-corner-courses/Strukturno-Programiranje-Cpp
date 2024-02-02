
#include<iostream>
#include<cstring>

using namespace std;

//Задача 3
//Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
//
//Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата)
//и бројот на валидни елементи во низата. Функцијата треба да врати сумата на сите елементи почнувајќи
//од дадениот индекс ind па се до крајот на низата. Ако индексот ind е поголем од Nфункцијата треба да врати 0.
//
//НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).
//
//Пример
//
//влез:
//
//10
//2 4 6 8 1 3 9 12 33 44
//6
//излез:
//
//98
//98 = 9+12+33+44


int sum_pos(int numbers[], int ind, int n)
{

    int sum=0;

    int index = ind;

    for(index; index<n; index++)
    {
        sum+=numbers[index];
    }

    return sum;
}

void insertArray(int numbers[], int n)
{
    char line[100];

    cin.getline(line, 100);

    int index=0;
    int previousDigit=0;

    for(int i=0; i<strlen(line); i++)
    {
        if( !isspace(line[i]))
        {
            int digit = ((int)line[i]) - '0';
            previousDigit=previousDigit*10+digit;
        }
        else
        {

            numbers[index]=previousDigit;
            index++;
            previousDigit=0;
        }
    }
    
    numbers[index]=previousDigit;
}

int main()
{
    char firstLine[100];

    cin.getline(firstLine, 100);

    // converts string to integer
    int n=stoi(firstLine);

    int numbers[100];

    insertArray(numbers, n);

    int index;

    cin>>index;

    int result = sum_pos(numbers, index, n);

    cout<<result;

    return 0;
}

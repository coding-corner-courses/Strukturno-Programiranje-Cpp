#include <iostream>

using namespace std;

// РЕШЕНИЕ СО ФУНКЦИИ

//Од тастатура се читаат непознат број позитивни цели броеви се додека не се
//внесе нешто различно од број. За секој број треба да се пресмета збирот на цифрата
//со максимална вредност од претходно внесениот број  и сумата на цифрите на тековниот
//број (за првиот внесен број се пресметува само сумата на неговите цифри).
//За секој внесен број резултатот треба да се испечати во следниот формат:
//
//
//[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]
//
//342: 9   //3+4+2
//345: 16 //3+4+5+4
//123: 11 //1+2+3+5
//456: 18 //4+5+6+3

// Ја наоѓа сумата на цифрите на даден број
// Пр. 5843 -> 3 + 4 + 8 + 5 = 20
int findSum(int number){

    int sum = 0;

    int newNumber = number;

    // После прва итерација за бројот 876
    // newNumber = 87
    // digit = 6
    // После втора итерација за бројот 87
    // newNumber = 8
    // digit = 7
    // После трета итерација за бројот 8
    // newNumber = 0
    // digit = 8
    while(newNumber != 0)
    {
        int digit = newNumber % 10;
        newNumber = newNumber /10;
        sum+=digit;
    }

    return sum;
}

// Ја наоѓа максималната цифра на даден број
// Пр. 5843 -> 8
int findMax(int number){

    int maxDigit = -1;

    int newNumber = number;

    // После прва итерација за бројот 876
    // newNumber = 87
    // digit = 6
    // После втора итерација за бројот 87
    // newNumber = 8
    // digit = 7
    // После трета итерација за бројот 8
    // newNumber = 0
    // digit = 8
    while(newNumber !=0){
        int digit = newNumber % 10;
        newNumber = newNumber / 10;

        if(digit > maxDigit){
            maxDigit = digit;
        }
    }

    return maxDigit;
}

int main()
{

    int number;

    cin>>number;

    int previousMaxDigit = 0;

    while(number != 0){

       int sum = findSum(number);
       int maxDigit = findMax(number);

       int result = sum + previousMaxDigit;

        cout<<number<<": "<<result<<endl;

        previousMaxDigit = maxDigit;

        cin>>number;
    }

    return 0;
}

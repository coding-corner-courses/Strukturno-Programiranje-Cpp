#include <iostream>

using namespace std;

//Напиши програма каде за внесен број преку тастатура ќе се провери дали внесениот број е делив со сумата од неговите цифри.
//(Бројот може да содржи к цифри)
//Да се испечати резултатот.
int main()
{

    int number;

    cin>>number;

    int sum = 0;
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

    while(newNumber != 0){

        int digit = newNumber % 10;
        cout<<newNumber<<" -> "<<digit<<endl;
        sum+=digit;
        newNumber = newNumber / 10;
    }

    if(number % sum == 0){
        cout<<"TRUE"<<endl;
    }
    else {
        cout<<"FALSE"<<endl;
    }

    return 0;
}

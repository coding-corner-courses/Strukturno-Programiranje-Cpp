#include <iostream>

using namespace std;

// Задача 7
//Напиши програма каде преку тастатура ќе бидат внесени три цели броеви.
//Најди го најголемиот и најмалиот број и пресметај ја нивната сума.
int main()
{
    int number1, number2, number3;

    cin>>number1>>number2>>number3;

    int minNumber, maxNumber;

    if(number1>number2 && number1>number3){
        maxNumber=number1;
    }
    else if(number2>number1 && number2>number3){
        maxNumber=number2;
    }
    else{
        maxNumber=number3;
    }

    if(number1<number2 && number1<number3){
        minNumber=number1;
    }
    else if(number2<number1 && number2<number3){
        minNumber=number2;
    }
    else {
        minNumber=number3;
    }

    cout<<"Result is: "<<minNumber+maxNumber<<endl;

    return 0;
}

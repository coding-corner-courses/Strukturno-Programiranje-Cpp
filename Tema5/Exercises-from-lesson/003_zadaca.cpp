#include <iostream>
#include <cmath>


using namespace std;

//Задача 3
//Да се напише програма која што ќе ги отпечати сите четирицифрени природни броеви кои
//се деливи со збирот на двата броеви(првиот број се првите две цифри, вториот број се третата и четвртата цифра)
//кои ги формира четирицифрениот број.
//Пр. Бројот 4598 → broj1 -  45, broj2 - 98
//Да се отпечатат броевите и на крај да се отпечати колку вакви броеви се пронајдени.

int findSum(int number){

    // ex. number 4598
    
    // 45
    int firstNumber = number / 100;

    // 98
    int secondNumber = number % 100;


    return firstNumber + secondNumber;
}

int main()
{
    int counter = 0;

    for(int i=1000; i<=9999; i++){

        int sum = findSum(i);

        if(i % sum == 0){
            cout<<i<<endl;
            counter++;
        }
    }

    cout<<"Counter: "<<counter<<endl;

    return 0;
}

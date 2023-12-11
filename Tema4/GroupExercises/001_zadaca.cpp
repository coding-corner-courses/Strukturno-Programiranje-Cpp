#include <iostream>

using namespace std;

//Задача 1 (Магичен број)
//Да се напише програма каде од тастатура се внесува еден шестцифрен број. Програмата печати DA доколку бројот е магичен,
//а NE во спротивно. Еден број е магичен доколку за него важи дека е делив со својата прва цифра и не е делив со збирот на последните две
//или доколку не е делив со својата втора цифра и не е делив со збирот на последните две.
//Да се внимава на делење со 0, односно да се испечати соодветна порака во таков случај.
int main()
{
    int number;

    cin>>number;

    // 123456

    // Наоѓање на прва цифра
    // 123456 / 100000 = 1
    int firstDigit = number / 100000;

    // Наоѓање на втора цифра
    // (123456 / 10000)%10 = 2
    int secondDigit = (number / 10000)%10;

    // Наоѓање на претпоследна цифра
    // (123456 % 100) / 10 = 5
    int fifthDigit = (number % 100) / 10;

    // Наоѓање на последна цифра
    // 123456 % 10 = 6
    int sixthDigit = number % 10;

    int sum = fifthDigit + sixthDigit;

    if((number % firstDigit == 0 && sum != 0 && number%sum != 0) || (secondDigit != 0 && number%secondDigit != 0 && sum!= 0 && number % sum !=0))
    {
        cout<<"DA"<<endl;
    }
    else if(sum==0 || secondDigit==0)
    {
        cout<<"Imame delenje so 0"<<endl;
    }
    else
    {
        cout<<"NE"<<endl;
    }

    return 0;
}

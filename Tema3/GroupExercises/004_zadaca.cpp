#include <iostream>

using namespace std;

//Задача 4
//Напиши програма каде што преку тастатура ќе може да се внеси број кој ќе претставува основица на плата.
//Според внесената основна плата, треба да се пресмета вкупната плата која ќе ја добие работникот според следните услови:
//Основна плата <= 10000, HRA = 20%, DA=80%
//Основна плата во ранг [10001, 20000] , HRA = 25%, DA=90%
//Основна плата поголема 20001 , HRA = 30%, DA=95%
//totalSalary = basic + hra +da.
int main()
{
    int baseSalary;
    float hraPercentage, daPercentage, hra, da, totalSalary;

    cin>>baseSalary;

    if(baseSalary<=10000)
    {
        hraPercentage = 0.2;
        daPercentage = 0.8;
    }
    else if(baseSalary>=10001 && baseSalary<=20000){
        hraPercentage = 0.25;
        daPercentage = 0.9;
    }
    else {
        hraPercentage = 0.3;
        daPercentage = 0.95;
    }

    hra = baseSalary * hraPercentage;
    da = baseSalary * daPercentage;

    totalSalary = baseSalary + hra + da;

    cout<<"The total salary is: "<<totalSalary<<endl;

    return 0;
}

#include <iostream>

using namespace std;

//Задача 23
//Напиши програма каде преку тастатура ќе биде внесен еден број
//и за него ќе се провери дали производот на последните три цифри од бројот е парен.
//Резултатот да се отпечати на екран.
int main()
{
    int number;

    cin>>number;

    int onesDigit, tensDigit, hundreadsDigit;

    onesDigit=number%10;

    // Пр. Бројот (355627/10)=35562, 35562%10=2
    tensDigit=(number/10)%10;

    // Пр. Бројот (355627%1000)=5627, 5627/100=56, 56%10=6
    hundreadsDigit=((number%1000)/100)%10;

    if((onesDigit*tensDigit*hundreadsDigit)%2==0)
    {
        cout<<"Proizvodot na poslednite tri cifri e paren broj"<<endl;
    }
    else
    {
        cout<<"Proizvodot na poslednite tri cifri ne e paren broj"<<endl;
    }

    return 0;
}

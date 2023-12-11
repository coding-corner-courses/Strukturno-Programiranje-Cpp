#include <iostream>

using namespace std;

//Задача 21
//Напиши програма каде преку тастатура ќе биде внесен еден број
//и за него ќе се провери дали цифрите на единици, десетки и стотки се еднакви.
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

    if(onesDigit==tensDigit && tensDigit==hundreadsDigit)
    {
        cout<<"Cifrite na edinici, desetki i stotki se ednakvi"<<endl;
    }
    else
    {
        cout<<"Cifrite na edinici, desetki i stotki se razlichni"<<endl;
    }

    return 0;
}

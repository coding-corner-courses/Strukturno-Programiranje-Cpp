#include <iostream>

using namespace std;

//Задача 22
//Напиши програма каде преку тастатура ќе биде внесен еден број
//и за него ќе се провери дали сумата од цифрите на единици
//и десетки е еднаква со цифрата на стотки. Резултатот да се отпечати на екран.
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

    if(onesDigit+tensDigit==hundreadsDigit)
    {
        cout<<"Sumata na cifrite na edinici i desetki e ednakva so cifrata na stotki"<<endl;
    }
    else
    {
        cout<<"Sumata na cifrite na edinici i desetki e razlicna so cifrata na stotki"<<endl;
    }

    return 0;
}

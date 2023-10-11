#include <iostream>
#include <cmath>

using namespace std;

//Задача 10
//Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Ако првиот број е делив со 8 или вториот број завршува на 4 да се пресмета нивната сума,
//во спротивно да се пресмета сума од нивните корени.
//Резултатот да се отпечати на екран.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    double result;

    if(number1%8==0 || number2%10==4)
    {
        result = number1+number2;
    }
    else
    {
        result = sqrt(number1) + sqrt(number2);
    }

    cout<<"The result is: "<<result<<endl;

    return 0;
}

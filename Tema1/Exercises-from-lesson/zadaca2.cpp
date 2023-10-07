#include <iostream>

using namespace std;

//Напиши програма коjа ќе прави конверзија на Целзиусови во Фаренхајтови степени.
//Целзиусовите степени се внесуваат од тастатура, а резултатот е потребно да се отпечати на екран.
//Формулата за претворањето е f = 1.8C + 32.
int main()
{

    int celsius;

    cin>>celsius;

    float result = 1.8 * celsius + 32;

    cout<<"The result is: "<<result;

    return 0;
}

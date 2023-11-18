#include <iostream>
#include <cmath>

using namespace std;

//Задача 22
//Напиши програма каде што ќе внесуваш броеви се додека да внесеш број кој е делив со 5. 
//Пресметај полузбир од сите внесени броеви и отпечати го резултатот на екран. 
int main()
{
    int number;

    cin>>number;

    int sum = 0;

    while(number % 5 != 0)
    {
        sum+=number;

        cin>>number;
    }

    float result = sum *1.0 / 2;

    cout<<result<<endl;

    return 0;
}

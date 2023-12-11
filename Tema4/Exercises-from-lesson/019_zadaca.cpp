#include <iostream>

using namespace std;

//Напиши програма каде ќе внесуваш броеви се додека не внесеш број кој е поголем од 20.
//Пресметај аритметичка средина од сите внесени броеви и отпечати го резултатот на екран.
int main()
{

    int number;

    cin>>number;

    int sum = number;
    int counter = 1;

    while( number <= 20)
    {
        cin>>number;
        sum+=number;
        counter++;
    }

    float result = sum *1.0 / counter;

    cout<<result<<endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

//Задача 19
//Напиши програма каде што ќе внесуваш броеви се додека да внесеш 0.
//Пресметај сума на сите внесени броеви и отпечати го резултатот.
int main()
{
    int number;

    cin>>number;

    int sum = 0;

    while(number != 0)
    {
        sum+=number;

        cin>>number;
    }

    cout<<"Sum: "<<sum<<endl;

    return 0;
}

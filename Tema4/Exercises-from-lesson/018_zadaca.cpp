#include <iostream>

using namespace std;

//Напиши програма каде што ќе внесуваш броеви се додека да внесеш 0.
//Пронајди го бројот на внесени броеви, максималниот внесен број и
//пресметај го збирот на внесените броеви. Резултатот да се отпечати.
int main()
{

    int number;

    cin>>number;

    int counter = 1;
    int maxNumber = number;
    int sum = 0;

    while(number != 0)
    {

        counter++;
        sum+=number;

        if(number > maxNumber)
        {
            maxNumber = number;
        }

        cin>>number;
    }

    cout<<"Counter: "<<counter<<endl;
    cout<<"Max number: "<<maxNumber<<endl;
    cout<<"Sum: "<<sum<<endl;

    return 0;
}

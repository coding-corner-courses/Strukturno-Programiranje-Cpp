#include <iostream>

using namespace std;

// Задача 3
//Напишете програма која ќе проверува дали внесен број е позитивен, негативен или нула. Отпечатете го резултатот на екран.
int main()
{
    int number;

    cin>>number;

    if(number > 0){
        cout<<"POSITIVE"<<endl;
    }
    else if(number<0){
        cout<<"NEGATIVE"<<endl;
    }
    else {
        cout<<"ZERO"<<endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

//Задача 9
int main()
{
    int n;

    cin>>n;

    float sum = 0;

    // 1/1 + 1/4 + 1/9 + 1/25 ... 1/n
    for(int i=0; i<n; i++){
        double number = 1.0 / pow(i+1, 2);

        sum+=number;
    }

    cout<<"The result: "<<sum<<endl;

    return 0;
}

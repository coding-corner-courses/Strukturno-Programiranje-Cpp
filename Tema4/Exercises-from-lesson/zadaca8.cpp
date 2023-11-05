#include <iostream>

using namespace std;

//Задача 8
int main()
{
    int n;

    cin>>n;

    float sum = 0;

    // 1/1 + 1/3 + 1/5 + 1/7 ... 1/n
    // i=0: 0*2 + 1 =1
    // i=1: 1*2 + 1 =3
    // i=2: 2*2 + 1 =5
    // i=3: 3*2 + 1 =7
    // (i * 2) +1
    for(int i=0; i<n; i++){
        float number = 1.0/((i*2)+1);
        sum+=number;
    }

    cout<<"The result: "<<sum<<endl;

    return 0;
}

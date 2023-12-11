#include <iostream>

using namespace std;

//Задача 7
int main()
{
    int n;

    cin>>n;

    float sum = 0;

    // 1/1, 1/2, 1/3, 1/4 ... 1/n
    for(int i=0; i<n; i++){
        float number = 1.0 / (i+1);

        sum+=number;
    }

    cout<<"The result: "<<sum<<endl;

    return 0;
}

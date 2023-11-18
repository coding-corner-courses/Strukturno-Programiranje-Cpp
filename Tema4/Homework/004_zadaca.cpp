#include <iostream>
#include <cmath>

using namespace std;

//Задача 4
//Напиши програма која ќе го пресмета изразот за дадена вредност на n преку тастатура, n>0
int main()
{
    int n;

    cin>>n;

    float sum = 0;

    for( int i=1; i<=n; i++){
        sum += 1.0/ pow(2, i);
    }

    cout<<sum<<endl;

    return 0;
}

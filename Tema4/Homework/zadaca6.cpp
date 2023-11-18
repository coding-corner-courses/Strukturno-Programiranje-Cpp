#include <iostream>
#include <cmath>

using namespace std;

//Задача 6
//Напиши програма која ќе го пресмета изразот за дадена вредност на n и x преку тастатура, n>0
int main()
{
    int n;

    cin>>n;

    int sum = 0;

    for( int i=1; i<=n; i++){
        sum += i;
    }

    float result = sum * 1.0 / pow(n, 2);

    cout<<result<<endl;

    return 0;
}

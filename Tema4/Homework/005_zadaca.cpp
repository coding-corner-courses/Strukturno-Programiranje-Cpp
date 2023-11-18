#include <iostream>

using namespace std;

//Задача 5
//Напиши програма која ќе го пресмета изразот за дадена вредност на n и x преку тастатура, n>0
int main()
{
    int n, x;

    cin>>n>>x;

    float sum = 0;

    for( int i=1; i<=n; i++){
        sum += x*1.0/ i*10;
    }

    cout<<sum<<endl;

    return 0;
}

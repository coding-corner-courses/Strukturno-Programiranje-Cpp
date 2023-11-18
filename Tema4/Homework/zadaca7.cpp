#include <iostream>
#include <cmath>

using namespace std;

//Задача 7
//Напиши програма која ќе го пресмета изразот за дадена вредност на n преку тастатура, n>0
int main()
{
    int n;

    cin>>n;

    float sum = 0;

    for( int i=1; i<=n; i++){
        sum +=1.0/ i;
    }

    float result = pow(n,3) / sum;

    cout<<result<<endl;

    return 0;
}

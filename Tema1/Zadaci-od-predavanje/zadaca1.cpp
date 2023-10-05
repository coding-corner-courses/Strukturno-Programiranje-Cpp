#include <iostream>

using namespace std;

//Внеси преку тастатура два цели броеви a и b. Отпечати ги броевите на екран, најди ја нивата разлика и отпечати го резултатот.
int main()
{

    int a,b;

    cin>>a;
    cin>>b;

    cout<<"The numbers are: "<<a<<" "<<b<<endl;

    int result = a - b;

    cout<<"The result is: "<<result;

    return 0;
}

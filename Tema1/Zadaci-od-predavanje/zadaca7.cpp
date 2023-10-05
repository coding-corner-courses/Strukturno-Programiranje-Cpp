#include <iostream>
#include <cmath>

using namespace std;

//Да се внеси преку тастатура еден број и да се провери дали бројот е делив со 3. Резултатот од проверката да се отпечати на екран.
int main()
{

    int broj;

    cin>>broj;

    bool isDivisbleWith3 = broj % 3 == 0;

    cout<<"The result is: "<<isDivisbleWith3;

    return 0;
}

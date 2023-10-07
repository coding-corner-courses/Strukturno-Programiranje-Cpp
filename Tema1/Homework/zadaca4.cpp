#include <iostream>
#include <cmath>

using namespace std;

//Напиши програма каде што преку тастатура ќе може да се внесат три броеви (b,h,l),
//пронајди го волуменот(V) според наведената формула и отпечати го резултатот на екран.
int main()
{
    int base, height, length;

    cin>>base>>height>>length;

    float volume=base*height*length/2.0;

    cout<<"The result is: "<<volume<<endl;

    return 0;
}

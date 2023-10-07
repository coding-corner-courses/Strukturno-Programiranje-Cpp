#include <iostream>
#include <cmath>

using namespace std;

//Задача 5
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви (l,w,h),
//пронајди го волуменот(V) според наведената формула и отпечати го резултатот на екран.
int main()
{
    int length, width, height;

    cin>>length>>width>>height;

    float volume=length*width*height;

    cout<<"The result is: "<<volume<<endl;

    return 0;
}

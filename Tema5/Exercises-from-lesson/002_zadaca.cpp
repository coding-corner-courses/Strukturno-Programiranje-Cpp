#include <iostream>
#include <cmath>


using namespace std;

//Задача 2
//Да се напише програма каде преку тастатура ќе се внесува радиус на круг.
//Програмата е потребно да пресмета дијаметар, периметар и плоштина на кругот и резултатот соодветно да го отпечати.

int findD(int r){

    return 2*r;
}

float findL(int r){

    float result = 2 * 3.14 * r;

    return result;
}

float findP(int r){

    float result = 3.14 * pow(r, 2);

    return result;
}

int main()
{
    int r;

    cin>>r;

    int d = findD(r);

    cout<<"D: "<<d<<endl;

    float l = findL(r);

    cout<<"L: "<<l<<endl;

    float p = findP(r);

    cout<<"P: "<<p<<endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;
//
//Да се внесат преку тастатура трите страни на разностран триаголник и да се пресмета плоштината на триаголникот по херонова формула.
//Да се испечати добиениот резултат на екран.
int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    float s= (a+b+c)/2.0;

    float p = sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"The result is "<<p<<endl;

    return 0;
}

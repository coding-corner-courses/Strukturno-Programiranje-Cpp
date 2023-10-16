#include <iostream>

using namespace std;

//Задача 3
//Направи програма каде што преку тастатура ќе се внесaт два карактери,
//кастирај ги и пронајди ја нивната разлика. Отпечати го резултатот.
int main()
{
    char character1, character2;

    cin>>character1>>character2;

    int result = (int)character1 - (int)character2;

    cout<<"The result is: "<<result<<endl;

    return 0;
}

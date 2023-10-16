#include <iostream>

using namespace std;

//Задача 1
//Направи програма каде што преку тастатура ќе се внесе цел број
//и истиот ќе биде кастиран во карактер. Отпечати ја променетатат вредност.
int main()
{
    int number;

    cin>>number;

    char character = (char) number;

    cout<<"The character: "<<character<<endl;

    return 0;
}

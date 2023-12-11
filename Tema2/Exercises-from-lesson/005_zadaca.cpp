#include <iostream>

using namespace std;

//Задача 5
//Направи програма каде што преку тастатура ќе се внеси цел број.
//Доколку бројот е парен отпечати “Number is even”, во спротивно отпечати “Number is odd”.
int main()
{

    int number;

    cin>>number;

    string message = number % 2 == 0 ? "Number is even" : "Number is odd";

    cout<<message<<endl;

    return 0;
}

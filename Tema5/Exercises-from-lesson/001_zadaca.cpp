
#include <iostream>

using namespace std;

//Задача 1
//Напиши програма каде преку стандарден влез се внесува еден цел број - n.
//Програмата треба да овозможи внесување на n-парови природни броеви и потребно е за секој пар да го отпечати збирот на броевите.
void findSum(){

    int number1, number2;

    cin>>number1>>number2;

    int result = number1 + number2;

    cout<<"Result: "<<result<<endl;
}

int main()
{
    int n;

    cin>>n;

    for(int i=0; i<n; i++){

        findSum();
    }

    return 0;
}

#include <iostream>

using namespace std;

//Задача 7.
//Напиши програма која ќе најде факториел за даден број и отпечати го резултатот.
//** Решението треба да биде со помош на рекурзија

// 5! = 5 *4 *3 *2 *1
int findFactoriel(int number)
{

    if(number == 1)
    {

        return 1;
    }

    return number * findFactoriel(n-1);
}

int main()
{
    int n;

    cin>>n;

    int factoriel = findFactoriel(n);

    cout<<factoriel<<endl;

    return 0;
}

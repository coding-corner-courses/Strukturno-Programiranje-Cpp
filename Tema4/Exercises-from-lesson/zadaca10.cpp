#include <iostream>

using namespace std;

//Напиши програма која ќе пресмета n!,
//за вредност на n внесена преку стандарден влез. Резултатот да се отпечати.
int main()
{

    int n;
    cin>>n;

    int factoriel = 1;

    // 5! = 5 *4 * 3* 2* 1;
    for(int i =1; i<=n; i++)
    {
        factoriel *= i;
    }

    cout<<factoriel;

    return 0;
}

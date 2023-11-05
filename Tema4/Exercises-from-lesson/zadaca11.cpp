#include <iostream>

using namespace std;

//Напиши програма која ќе пресмета (n+2k)!,
//за вредност на n и k внесена преку стандарден влез. Резултатот да се отпечати.
int main()
{
    int n,k;

    cin>>n>>k;

    int factoriel = 1;

    for(int i=1; i<= n+2*k; i++){
        factoriel*=i;
    }

    cout<<"The result: "<<factoriel<<endl;

    return 0;
}

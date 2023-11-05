#include <iostream>

using namespace std;

//Напиши програма која за внесен број ќе провери дали бројот е прост.
//Резултатот да се отпечати.
//Дефиниција: Прост број е број кој што е делив со 1 и сам со себе.
int main()
{
    int n;

    cin>>n;

    bool isPrime = 1;

    for(int i=2; i<n; i++){
        if(n%i==0){
            isPrime =0;
            break;
        }
    }

    cout<<isPrime<<endl;

    return 0;
}

#include <iostream>

using namespace std;

//Напиши програма која за внесен број ќе првери дали бројот е совршен.
//Резултатот да се отпечати.
//Дефиниција: Совршен број е број чија сума од неговите делители (без самиот број) го дава истиот тој број.
//Пр. Бројот 6 е совршен број
int main()
{
    int n;
    cin>>n;

    int sum = 0;

    for(int i=1;i<n;i++) {
        if(n%i==0) {
            sum+=i;
        }
    }

    if(n == sum) {
        cout<<"Sovrshen"<<endl;
    }
    else {
        cout<<"Ne e sovrshen"<<endl;
    }

    return 0;
}

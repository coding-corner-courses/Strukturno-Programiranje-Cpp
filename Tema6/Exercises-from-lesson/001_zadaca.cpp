
#include <iostream>

using namespace std;

// Задача1
// Да се напише програма со која ќе може да се внесат преку тастатура 10 броеви кои ќе бидат запишани во низа. Отпечати ја низата.
int main()
{
    int numbers[10];

    for(int i=0; i<10; i++){

        int number;

        cin>>number;

        numbers[i]=number;
    }

    for(int i=0; i<10; i++){

        cout<<numbers[i]<<" ";
    }

    return 0;
}

#include <iostream>

using namespace std;

//Напиши програма каде ќе се пресмета сума од сите броеви од 1-100
//кои се деливи со 5. Резултатот да се отпечати.
int main()
{

    int sum = 0;

    for(int i=0; i<100; i++)
    {
        if((i+1)%5==0)
        {
            sum+=i+1;
            cout<<"The number is: "<<i+1<<endl;
        }
    }

    cout<<"The sum: "<<sum<<endl;

    return 0;
}

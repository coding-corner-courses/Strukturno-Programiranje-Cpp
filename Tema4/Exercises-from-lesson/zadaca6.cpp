#include <iostream>

using namespace std;

//Напиши програма која ќе пресмета сума од сите парни вредности од
//1-100 кои се деливи со 5 и сума од сите останати вредности. Резултатот да се отпечати.
int main()
{

    int sum1=0, sum2=0;

    for(int i=0; i<100; i++){

        int number = i+1;

        if(number%2==0 && number%5==0){
            sum1+=number;
        }
        else {
            sum2+=number;
        }
    }

    cout<<"Sum1: "<<sum1<<endl;
    cout<<"Sum2: "<<sum2<<endl;

    return 0;
}

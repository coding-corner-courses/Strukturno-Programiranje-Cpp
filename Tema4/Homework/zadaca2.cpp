#include <iostream>

using namespace std;

//Задача 2
//Напиши програма каде ќе се избројат вредностите помеѓу 1-100 кои се деливи со 9
//и ќе се избројат вредностите кои се деливи со 12. Резултатот да се отпечати.
int main()
{
    int divisibleWith9=0;
    int divisibleWith12=0;


    for(int i=0; i<100; i++)
    {
        if((i+1)%9==0 )
        {
            divisibleWith9++;
        }

        if((i+1)%12==0 )
        {
            divisibleWith12++;
        }
    }

    cout<<"Divisible with 9: "<<divisibleWith9<<endl;
    cout<<"Divisible with 12: "<<divisibleWith12<<endl;

    return 0;
}

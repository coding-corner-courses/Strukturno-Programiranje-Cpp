#include <iostream>
#include <cmath>

using namespace std;

//Влезна низа: 53 2131 10 421 2240 12345
//Меѓуниза: 53 131 10 401 200 10305
//Излез: 131 401 200 10305

int dvojnik(int inputNumber, bool lastDigitIsEvenPosition, int counter)
{
    //Ако е последниот број
    if(inputNumber<9)
    {

        if(lastDigitIsEvenPosition==1 && inputNumber%2==0)
        {
            return 0;
        }
        else
        {
            return inputNumber * pow(10, counter);
        }
    }

    // моментална најзначајна цифра
    int digit = inputNumber % 10;

    if(digit%2==0 && lastDigitIsEvenPosition==1){

        return dvojnik(inputNumber/10, !lastDigitIsEvenPosition, counter+1);
    }

    return  digit * pow(10, counter) + dvojnik(inputNumber/10, !lastDigitIsEvenPosition, counter+1);
}

int main()
{
    int n;

    cin>>n;

    int number = dvojnik(n, false, 0);

    cout<<number;

    return 0;
}

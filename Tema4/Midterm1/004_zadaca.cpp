#include <iostream>

using namespace std;

//Задача 4.
//Од стандарден влез се читаат знаци се додека не се прочита извичник.
//Во вака внесениот текст се скриени цели броеви (помали од 100).
//Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
//Напомена: cin во C++ ги игнорира празните места (space).
//За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)
//For example:
//Input    Result
//a1ko34D neka12em bashka41mewr20!
//107
int main()
{
    char character;
    cin>>noskipws>>character;

    int number = 0;
    int sum = 0;

    while(character != '!')
    {

        if(character >= '0' && character <= '9')
        {
            int digit = character - '0';
            number = number * 10 + digit;
        }
        else
        {
            sum += number;
            number = 0;
        }

        cin>>character;
    }

    sum += number;

    cout<<sum<<endl;

    return 0;
}

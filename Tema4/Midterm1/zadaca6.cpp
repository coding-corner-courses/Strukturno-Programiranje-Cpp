#include <iostream>

using namespace std;

//Задача 6.
//Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z,
//а потоа последователно се внесуваат парови цели броеви (a, b).
//Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0).
//Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b,
//како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z
//(ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).
//For example:
//Input    Result
//100
//50 50
//-50 -50
//-99 199
//32 98
//0 0
//Vnesovte 2 parovi od broevi chij zbir e 100
//Procentot na parovi so zbir 100 e 50%
int main()
{
    int z;
    cin>>z;

    int number1, number2;
    cin>>number1>>number2;
  
    int totalPairs = 0;
    int equalToZPairs = 0;

    while(number1!= 0 || number2 != 0)
    {
        totalPairs++;

        if(number1 + number2 == z)
        {
            equalToZPairs++;
        }

        cin>>number1>>number2;
    }

    cout<<"Vnesovte "<<equalToZPairs<<" parovi cij zbir e "<<z<<endl;
    cout<<"Procentot na parovi so zbir "<<z<<" e "<<(equalToZPairs * 100.0)/totalPairs<<"%"<<endl;

    return 0;
}

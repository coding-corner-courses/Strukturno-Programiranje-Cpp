#include<iostream>
#include<cstring>

using namespace std;

//Задача 5
//Од стандарден влез се чита ливче во спортска обложувалница.
//
//Во првиот ред е запишана сумата на уплата (цел број).
//
//Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат:
//
//ab12 1 1.25
//Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2)
//додека третиот број е коефициентот (реален број).
//
//Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето.
//Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
//
//Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

int main()
{

    int uplata;
    cin>>uplata;

    char shifra[9];
    cin>>shifra;

    float dobivka=uplata;
    
    // Inicijalizacija na max vrednosti
    float maxKoeficient=0;
    char maxShifra[9];
    int maxTip;

    while(strcmp(shifra, "#")!=0)
    {

        int tip;
        cin>>tip;

        float koeficient;
        cin>>koeficient;

        dobivka*=koeficient;

        if(maxKoeficient<koeficient){
                
            maxKoeficient=koeficient;
            strcpy(maxShifra, shifra);
            maxTip=tip;
        }

        cin>>shifra;
    }


    cout<<maxShifra<<" "<<maxTip<<" "<<maxKoeficient<<endl;
    cout<<dobivka<<endl;

    return 0;
}

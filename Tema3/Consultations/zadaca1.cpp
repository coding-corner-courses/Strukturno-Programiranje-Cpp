#include <iostream>
#include <cmath>

using namespace std;

//За еден студент се читаат освоени поени од 5 активности за еден предмет.
//Услов за еден предмет да биде положен е да се имаат над 50 освоени поени.
//Ако студентот има 0-50 поени не го положил предметот, ако има 51-60 го положил
//предметот со 6, 61-70 го положил со 7, 71-80 го положил со 8, 81-90 го положил
//со 9 и над 90 го положил со 10.
//Да се испечати оценката која ја имал студентот, неговите поени и да се испечати
//"Ima uslov za povisoka ocenka" доколку има услов да добие повисока оценка, а во
//спротивно да се испечати "Nema uslov za povisoka ocenka".
//Услов за повисока оценка има само ако недостига 1 поен за добивање на повисока оценка.
//Input: 10 20 3 5 6, Output: Predmetot ne e polozen
//Input: 30 40 5 10 3, Output: Ocenka: 9, poeni: 88
//			      Nema uslov za povisoka ocenka.
//Input 10 30 11 20 9, Output: Ocenka 8, poeni: 80
//			      Ima uslov za povisoka ocenka.
int main()
{

    int activity1, activity2, activity3, activity4, activity5;

    cin>>activity1>>activity2>>activity3>>activity4>>activity5;

    int points = activity1 + activity2 + activity3 + activity4 + activity5;

    if(points <= 50)
    {
        cout<<"Predmetot ne e polozen"<<endl;
    }
    else if(points <= 60)
    {
        cout<<"Ocenka 6, poeni: "<<points<<endl;
    }
    else if(points <= 70)
    {
        cout<<"Ocenka 7, poeni: "<<points<<endl;
    }
    else if(points <= 80)
    {
        cout<<"Ocenka 8, poeni: "<<points<<endl;
    }
    else if(points <= 90)
    {
        cout<<"Ocenka 9, poeni: "<<points<<endl;
    }
    else
    {
        cout<<"Ocenka 10, poeni: "<<points<<endl;
    }

    if(points>= 50 && points<100 && points%10==0)
    {
        cout<<"Ima uslov za povisoka ocenka"<<endl;
    }

    if(points>= 50 && points<100 && points%10!=0)
    {
        cout<<"Nema uslov za povisoka ocenka"<<endl;
    }

    return 0;
}

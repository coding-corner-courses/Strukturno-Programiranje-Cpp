#include <iostream>

using namespace std;

//Задача 5
//Од стандарден влез се чита еден природен број n.
//Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
//Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
//For example:
//Input: 10
//Result: 8
//
//a.Направи функција која ќе го наоѓа збирот на делители на даден број


int najdiZbirNaDeliteli(int number)
{
    int zbirNaDeliteli = 0;

    for(int i=1; i < number; i++)
    {
        if(number % i == 0)
        {
            zbirNaDeliteli += i;
        }
    }

    return zbirNaDeliteli;
}

int main()
{
    int broj;

    cin>>broj;

    int maxZbirNaDeliteli = 0;
    int brojSoMaxZbir = 0;

    for(int i=0; i<broj; i++){

        int zbirNaDeliteli = najdiZbirNaDeliteli(i);

        if(zbirNaDeliteli > maxZbirNaDeliteli){
            maxZbirNaDeliteli = zbirNaDeliteli;
            brojSoMaxZbir = i;
        }
    }

    cout<<brojSoMaxZbir<<endl;

    return 0;
}

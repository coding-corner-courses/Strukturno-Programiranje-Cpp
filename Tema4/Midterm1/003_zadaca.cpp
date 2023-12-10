#include <iostream>

using namespace std;

//Задача 3.
//Од стандарден влез се чита еден природен број n.
//Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
//Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
//For example:
//Input    Result
//10
//8
int main()
{
    int n;

    cin>>n;

    int maxZbirNaDeliteli = 0;
    int broj = 0;

    for(int i=0; i<n; i++){

        int zbirNaDeliteli = 0;

        for(int j=1; j < i; j++){
            if(i % j == 0){
                zbirNaDeliteli += j;
            }
        }

        if(zbirNaDeliteli > maxZbirNaDeliteli){
            maxZbirNaDeliteli = zbirNaDeliteli;
            broj = i;
        }
    }

    cout<<broj<<endl;

    return 0;
}

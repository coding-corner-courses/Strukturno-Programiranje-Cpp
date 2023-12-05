#include <iostream>
#include <cmath>


using namespace std;

//Задача 5
// Напиши програма која ќе го пресмета збирот:
//1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)!  и ќе го отпечати резултатот

int findSum(int number){

    int sum = 0;

    for(int i=0; i<=number ; i++){

        sum+=i;
    }

    return sum;
}


int findFactoriel (int number){

    int factoriel = 1;

    for(int i=1; i<=number; i++){
        factoriel*=i;
    }

    return factoriel;
}

int main()
{

    int n;

    cin>> n;

    int sum = 0;

    for(int i=1; i<=n; i++){

        int sumForNumber = findSum(i);

        int factoriel = findFactoriel(sumForNumber);

        sum+=factoriel;
    }

    cout<<sum<<endl;


    return 0;
}

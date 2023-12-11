#include <iostream>

using namespace std;

//Задача 25
//Напишете програма каде што ќе може да се внесе број од 1 до 12 и за истиот да се испечати соодветниот месец во годината
//	Пр. За внесен број 3, треба да се отпечати “MART”
//	За внесен број 12, треба да се отпечати “DEKEMVRI”
int main()
{
    int number;

    cin>>number;

    switch(number){
        case 1:
            cout<<"JANUARI"<<endl;
            break;
        case 2:
            cout<<"FEBRUARI"<<endl;
            break;
        case 3:
            cout<<"MART"<<endl;
            break;
        case 4:
            cout<<"APRIL"<<endl;
            break;
        case 5:
            cout<<"MAJ"<<endl;
            break;
        case 6:
            cout<<"JUNI"<<endl;
            break;
        case 7:
            cout<<"JULI"<<endl;
            break;
        case 8:
            cout<<"AVGUST"<<endl;
            break;
        case 9:
            cout<<"SEPTEMVRI"<<endl;
            break;
        case 10:
            cout<<"OKTOMVRI"<<endl;
            break;
        case 11:
            cout<<"NOEMVRI"<<endl;
            break;
        case 12:
            cout<<"DEKEMVRI"<<endl;
            break;
        default:
            cout<<"BROJOT NE PRETSTAVUVA MESEC"<<endl;
            break;
    }

    return 0;
}

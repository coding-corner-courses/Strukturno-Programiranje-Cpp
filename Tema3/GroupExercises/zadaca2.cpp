#include <iostream>

using namespace std;

//Задача 2
//Напиши програма каде што за внесен бренд на автомобил ќе биде отпечатена државата на потекло на брендот.
int main()
{
    string brand;

    cin>>brand;

    cout<<brand;

    if(brand == "Mercedes" || brand=="Audi" || brand=="BMW" || brand== "Opel" || brand=="Porsche")
    {
        cout<<"Germany"<endl;
    }
    else if(brand == "Renault" ||brand == "Peugeut" || brand== "Citroen")
    {
        cout<<"France"<<endl;
    }
    else  if(brand == "Mazda" || brand == "Lexus" || brand == "Toyota" || brand == "Honda")
    {
        cout<<"Japan"<<endl;
    }
    else if(brand == "Alfa Romeo" || brand == "Ferrari" || brand == "Lamborghini" || brand == "Fiat")
    {
        cout<<"Italy"<<endl;
    }
    else if(brand == "Jeep" || brand == "Tesla" || brand == "Cadillac")
    {
        cout<<"USA"<<endl;
    }
    else
    {
        cout<<"Invalid brand"<endl;
    }

    return 0;
}

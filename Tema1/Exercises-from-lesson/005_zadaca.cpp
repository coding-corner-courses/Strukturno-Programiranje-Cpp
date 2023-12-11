#include <iostream>
#include <cmath>

using namespace std;

//Да се внесат коефициентите на квадратна равенка и да се пресмета нејзината дискриминанта.
//Да се испечатат внесените коефициенти и добиеното решение на екран.
//d=b^2-4ac
int main()
{

    int a,b,c;

    cin>>a>>b>>c;

    cout<<"The coeficients are: "<<a<<" "<<b<<" "<<c<<endl;

    int d = pow(b,2) - 4*a*c;

    cout<<"The result is: "<<d;

    return 0;
}

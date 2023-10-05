#include <iostream>
#include <cmath>

using namespace std;

//Да се внесат два броеви од тастатура и да се пронајде корен од нивната сума.
//Да се испечатат внесените броеви и добиениот резултат на екран.
int main()
{

    int number1, number2;

    cin>>number1>>number2;

    cout<<"The numbers are: "<<number1<<" "<<number2<<endl;

    float result = sqrt(number1+number2);

    cout<<"The result is: "<<result;

    return 0;
}

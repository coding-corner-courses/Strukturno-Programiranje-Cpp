#include <iostream>

using namespace std;

//Задача 4
//Напиши програма која преку тастатура ќе овозможува да се внесат две променливи x и y.
//Доделија поголемата вредност од x или y на променлива наречена maxValue и прикажи го резултатот на екран.
//(реши ја задачата со помош на тернарен опратор)

int main()
{

    int x, y;

    cin>>x>>y;

    int maxValue = x > y ? x : y;

    cout<<"The result max value is: "<<maxValue;

    return 0;
}

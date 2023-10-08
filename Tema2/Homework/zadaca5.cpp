#include <iostream>

using namespace std;

//Задача 5
//Напиши програма која преку тастатура ќе овозможува да се внесат две променливи x и y.
//Доделија апсолутната разлика помеѓу променливите x и y на променлива наречена absDif
//и прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор).

int main()
{

    int x, y;

    cin>>x>>y;

    int absDif = x > y ? x-y : (x-y)*-1;

    cout<<"The absolute difference is: "<<absDif;

    return 0;
}

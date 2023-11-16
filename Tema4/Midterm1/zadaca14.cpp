#include <iostream>

using namespace std;

// Од тастатура се вчитува природен број N,
//    а потоа се вчитуваат последователно информации за N пиксели.
//    За секој пиксел се внесуваат три цели броеви коишто ги претставуваат
//    r, g и b вредностите за соодветниот пиксел. Пикселот е валиден ако
//    секоја од внесените r, g и b вредности е во опсег [0, 255].
//    Пикселите коишто не се валидни не се земаат во предвид.
//
//    Да се имплементира max rgb филтер,
//    којшто за секој валиден пиксел го
//    наоѓа максимумот од вредностите r, g и b и
//    секоја вредност на компонентите на истиот пиксел
//    што е помала од максимумот ја заменува со нула.
//    За секој валиден пиксел се печатат новите вредности
//    по извршената трансформација.
//
//Влез:
//5
//200 100 30
//255 123 255
//100 100 100
//300 120 8
//40 80 255
//
//Излез:
//200 0 0
//255 0 255
//100 100 100
//0 0 255
int main()
{
    int n, r, g, b;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> r >> g >> b;

        if ((r >= 0 && r <= 255) && (g >= 0 && g <= 255) && (b >= 0 && b <= 255))
        {
            int maxNumber = -1;

            if(r>=g && r>=b)
            {
                maxNumber = r;
            }
            else if(g>=r && g>=b)
            {
                maxNumber=g;
            }
            else
            {
                maxNumber=b;
            }

            if(r != maxNumber)
            {
                r = 0;
            }

            if(g != maxNumber)
            {
                g = 0;
            }

            if(b != maxNumber)
            {
                b = 0;
            }

            cout<<r<<" "<<g<<" "<<b<<endl;
        }
    }

    return 0;
}

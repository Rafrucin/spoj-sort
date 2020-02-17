//SPOJ submission 23206979 (CPP14)plaintext list.Status: AC, problem PP0506A, contest SPOJPL.By ravruc(ravruc), 2019 - 02 - 10 21 : 32 : 12.
#include <iostream>
#include <cmath>

using namespace std;

class Punkt
{
public:
    double x, y, odl;
    string name;

    void dodaj()
    {
        cin >> name >> x >> y;
        odl = sqrt(x * x + y * y);
    }

    void show()
    {
        cout << name << " " << x << " " << y << endl;
    }


};

int main()
{



    int a, ile;
    cin >> ile;
    for (int r = 1; r <= ile; r++)

    {
        cin >> a;
        Punkt* pkt;
        pkt = new Punkt[a];
        for (int i = 0; i < a; i++)
        {

            pkt[i].dodaj();

        }

        for (int i = 0; i <= a - 1; i++)
        {
            for (int j = 0; j <= a - 1; j++)
            {
                if (pkt[j].odl < pkt[j + 1].odl)
                {
                    Punkt temp = pkt[j];
                    pkt[j] = pkt[j + 1];
                    pkt[j + 1] = temp;
                }
            }
        }

        for (int i = a - 1; i >= 0; i--)
        {
            pkt[i].show();
        }
    }
    return 0;
}

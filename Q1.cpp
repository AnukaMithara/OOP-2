#include <iostream>
using namespace std;

class Prism
{
public:
    double Edge_1;
    double Edge_2;
    double Height;

    Prism()
    {
        Edge_1 = 0;
        Edge_2 = 0;
        Height = 0;
    }

    Prism(double a, double b, double c)
    {
        Edge_1 = a;
        Edge_2 = b;
        Height = c;
    }

    double volume()
    {
        double vol = abs(0.5*Edge_1*Edge_2*Height);
        return vol;
    }

    void dispVolume()
    {
        cout<< "Volume of the third prism = " << volume() << endl;
    }
};

Prism operator -(Prism prism1, Prism prism2)
{
    Prism prism3(prism1.Edge_1, prism1.Edge_2, prism1.Height - prism2.Height);
    return prism3;
}

main()
{
    Prism prism1(9,12,18);
    Prism prism2(9,12,10);

    Prism prism3 = prism1 - prism2;
    prism3.dispVolume();

    return 0;
}

#include <iostream>
using namespace std;

class Distance
{
private:
    double meter;
    double centimeter;

public:
    Distance(double a, double b)
    {
        meter = a;
        centimeter = b;
    }

    void print()
    {
        cout << meter << " meter " << centimeter << " centimeter " <<endl<<endl;
    }

    double getmeter()
    {
        return meter;
    }

    double getcmeter()
    {
        return centimeter;
    }

};

Distance operator +(Distance D1, Distance D2)
{
    int D1Totcm = (D1.getmeter() * 100)+ D1.getcmeter();
    int D2Totcm = (D2.getmeter() * 100)+ D2.getcmeter();


    int D3Totcm = D1Totcm + D2Totcm;

    int D3meter = D3Totcm/100;
    int D3centimeter = D3Totcm%100;

    Distance D3(D3meter,D3centimeter);
    return D3;
}

Distance operator-(Distance D1, Distance D2)
{
    int D1Totcm = (D1.getmeter() * 100)+ D1.getcmeter();
    int D2Totcm = (D2.getmeter() * 100)+ D2.getcmeter();


    int D3Totcm = abs(D1Totcm - D2Totcm);

    int D3meter = D3Totcm/100;
    int D3centimeter = D3Totcm%100;

    Distance D3(D3meter,D3centimeter);
    return D3;
}

main()
{
    double D1m, D2m, D1cm, D2cm;

   cout << "--First distance--"<<endl;
   cout << "Enter the meter:" << endl;
   cin >> D1m;
   cout << "Enter the centimeter:" << endl;
   cin >> D1cm;

   cout << "--Second distance--"<<endl;
   cout << "Enter the meter:" << endl;
   cin >> D2m;
   cout << "Enter the centimeter:" << endl;
   cin >> D2cm;

   Distance D1(D1m,D1cm);
   Distance D2(D2m,D2cm);

   Distance D3 = D1 + D2;
   Distance D4 = D1 - D2;

   cout << "Total Distance:" <<endl;
   D3.print();

   cout << "Difference between both distances:" <<endl;
   D4.print();

    return 0;
}

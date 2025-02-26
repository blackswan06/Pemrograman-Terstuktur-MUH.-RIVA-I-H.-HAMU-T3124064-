#include <iostream>
using namespace std;
int main (){
    int cels;

    cout << "Masukan suhu dalam celsius : ";
    cin  >> cels;

    double f = (cels * 9.0/5.0) * 32.0;
    double r = 4.0/5.0 * cels;
    double k = 273.15 + cels;

    cout << "Suhu Fahrenheit : " << f << endl;
    cout << "Suhu Reamur : " << r << endl;
    cout << "Suhu Kelvin : " << k << endl;
}

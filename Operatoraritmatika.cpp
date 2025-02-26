#include <iostream>
using namespace std;
int main (){
    int a = 10, b = 20;
    cout << "Operator Aritmatika" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    //Operator Penugasan
    int c = 5;
    cout << "\nOperator Penugasan : " << endl;
    c += 3;
    cout << "c+= 3; c = " << c << endl;

    // Operator Perbandingan
    cout << "\nOperatot Perbandingan" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a < b: " << (a < b) << endl;

    // Operator Logika

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    float tinggi, berat, selisih;

    cout << "Masukan tinggi badan (cm): ";
    cin >> tinggi;
    cout << "Masukan berat badan (kg): ";
    cin >> berat;

    selisih = tinggi - berat;

    if (selisih > 120) {
        cout << "Anda termasuk gemuk." << endl;
    }else if (selisih >= 111 && selisih <= 120) {
        cout << "Berat badan Anda ideal." << endl;
    }else if (selisih >= 100 && selisih <= 110) {
        cout << "Anda termasuk kurus." << endl;
    }else {
        cout << "Anda termasuk sangat kurus." << endl;
    }

    return 0;
}

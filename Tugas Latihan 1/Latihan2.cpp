#include <iostream>

using namespace std;

int main() {
    int skor;

    cout << "Masukan skor mahasiswa: ";
    cin >> skor;

    if (skor > 80) {
        cout << "Nilai: A" << endl;
    }else if (skor >= 60 && skor <= 79) {
        cout << "Nilai: B" << endl;
    }else if (skor >= 40 && skor <= 59) {
        cout << "Nilai: C" << endl;
    }else if (skor >= 20 && skor <= 39) {
        cout << "Nilai: D" << endl;
    }else {
        cout << "Nilai: E" << endl;
    }

    return 0;
}


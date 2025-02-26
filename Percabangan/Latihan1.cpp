#include <iostream>
using namespace std; //Penerapan Kondisi IF-ELSE

int main() {
    int nilai;
    cout << "Masukan nilai: ";
    cin >> nilai;

    if (nilai > 60) {
        cout << "Lulus" << endl;
    }else{
        cout << "Tidak Lulus" << endl;
    }
    return 0;
}

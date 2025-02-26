#include <iostream>
#include<limits> // Untuk std: :numeric_limits
//using namespace std;
int main () {
    // Tipe data integer
    int intergerVar = 42;
    std::cout << "Tipe Data Integer: " << intergerVar << std::endl;
    // Tipe Data Float
    float floatVar = 3.14f;
    std::cout << "Tipe Data Float: " << floatVar << std::endl;
    // Tipe Data Double
    double doubleVar = 3.14159;
    std::cout << "Tipe Data Double: " << doubleVar << std::endl;
     // Tipe Data char
    char charVar = 3.14159;
    std::cout << "Tipe Data Char: " << charVar << std::endl;
     // Tipe Data bool
    bool boolVar = 3.14159;
    std::cout << "Tipe Data Boolean: " << boolVar << std::endl;

    // Menampilkan batasan tipe data

    std::cout << "\nBatasan Tipe Data: "<< std::endl;
    std::cout << "Integer: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Float: " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Double: " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;

    return 0;
}


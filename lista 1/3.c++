#include <iostream>
using namespace std;

double converter_fahrenheit_para_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    double fahrenheit;
    cout << "Digite a temperatura em graus Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = converter_fahrenheit_para_celsius(fahrenheit);
    cout << "A temperatura em graus Celsius é: " << celsius << endl;

    return 0;
}

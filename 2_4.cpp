#include <iostream>
using namespace std;

int main() {
    int wysokosc;

    cout << "Podaj wysokosc diamentu (nieparzysta liczba): ";
    cin >> wysokosc;

    if (wysokosc % 2 == 0) {
        wysokosc++;
        cout << "Podana liczba byla parzysta, wiec zostala zwiekszona do " << wysokosc << endl;
    }

    int srodek = wysokosc / 2;

    for (int i = 0; i <= srodek; i++) {
        for (int j = 0; j < srodek - i; j++) cout << " "; 
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";    
        cout << endl;
    }

    for (int i = srodek - 1; i >= 0; i--) {
        for (int j = 0; j < srodek - i; j++) cout << " "; 
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << endl;
    }

    return 0;
}

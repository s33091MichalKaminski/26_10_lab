#include <iostream>
using namespace std;

int main() {   
    int a;
    int b;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

    cout << "Wpisano liczby a == " << a << " oraz b == " << b << endl;

    cout << "\nWiersz gwiazdek o dlugosci a:" << endl;
    for (int i = 0; i < a; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "\nKolumna gwiazdek o dlugosci b:" << endl;
    for (int i = 0; i < b; i++) {
        cout << "*" << endl;
    }

    cout << "\nWypelniony gwiazdkami prostokat o wymiarach a na b:" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nObwod gwiazdkami prostokata o wymiarach a na b:" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\nTrojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu:\n";
    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nTrojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = i; k < a; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

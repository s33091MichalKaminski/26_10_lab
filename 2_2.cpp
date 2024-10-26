#include <iostream>
using namespace std;

int main()
{   
    int a;
    int b;

    cout << "podaj liczbe a" << endl;
    cin >> a;
    cout << "podaj liczbe b" << endl;
    cin >> b;

    cout << "wpisano liczbe a == " << a << " oraz b == " << b << endl;
    cout << "wiersz gwiazdek o dlugosci a"<<endl;
    for (int i = 0; i < a; i++) {
        cout << "*";
    }
    cout<<endl;
    cout << "kolumna gwiazdek o dlugosci b" << endl;
    for (int i = 0; i < b; i++) {
        cout << "*"<<endl;
    }
    cout<<endl;
    cout << "wypelniony gwiazdkami prostokat " << endl;
    for (int i = 0; i < b; i++){
        for (int j = 0; j < a; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

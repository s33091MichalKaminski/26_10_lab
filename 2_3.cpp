#include <iostream>
using namespace std;

int main()
{   
    int msc;
    cout << "Podaj liczbe od 1 do 12" << endl;
    cin >> msc;
    if (msc < 1 || msc>12) {
        cout << "Podales liczbe spoza zakresu" << endl;
    }
    else {
        switch (msc) {
        case 1:
            cout << "styczen" << endl;
            cout << "liczba dni: 31" << endl;
            cout << "miesiac pochmurny" << endl;
            break;
        case 2:
            cout << "luty" << endl;
            cout << "liczba dni: 28" << endl;
            cout << "miesiac pochmurny" << endl;
            break;
        case 3:
            cout << "marzec" << endl;
            cout << "liczba dni: 31" << endl;
            cout << "miesiac pochmurny" << endl;
            break;
        case 4:
            cout << "kwiecien" << endl;
            cout << "liczba dni: 30" << endl;
            cout << "miesiac slonecznie" << endl;
            break;
        case 5:
            cout << "maj" << endl;
            cout << "liczba dni: 31" << endl;
            cout << "miesiac slonecznie" << endl;
            break;
        case 6:
            cout << "czerwiec" << endl;
            cout << "liczba dni: 30" << endl;
            cout << "miesiac slonecznie" << endl;
            break;
        case 7:
            cout << "lipiec" << endl;
            cout << "liczba dni: 31" << endl;
            cout << "miesiac slonecznie" << endl;
            break;
        case 8:
            cout << "sierpien" << endl;
            cout << "liczba dni: 30" << endl;
            cout << "miesiac slonecznie" << endl;
            break;
        case 9:
            cout << "wrzesien" << endl;
            cout << "liczba dni: 31" << endl;
            cout << "miesiac slonecznie" << endl;
            break;
        case 10:
            cout << "pazdziernik" << endl;
            cout << "liczba dni: 30" << endl;
            cout << "miesiac pochmurny" << endl;
            break;
        case 11:
            cout << "listopad" << endl;
            cout << "liczba dni: 31" << endl;
            cout << "miesiac pochmurny" << endl;
            break;
        case 12:
            cout << "grudzien" << endl;
            cout << "liczba dni: 30" << endl;
            cout << "miesiac pochmurny" << endl;
            break;

        } 
    }
    return 0;
}

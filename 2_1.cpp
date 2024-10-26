#include <iostream>
using namespace std;

int main()
{   
    int n;
    int wynik = 0;
    cout << "podaj n"<<endl;
    cin >> n;
    cout << endl;
    for (int i=1; i <= n; i++) {
        wynik = wynik + i;
        cout << wynik << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{

    char tablica[1];

    cout << "Wpisz litere z zakresu A - Z: ";
    cin >> tablica[0];

    if(!(tablica[0]>=65 && tablica[0]<=90))
        cout << "Bledne dane" << endl;
    else
        cout << "OK" << endl;

    main();



    return 0;
}

﻿
#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    char volba;
    cout << "\nF = For, W = While, D = DO While, K=Konec: ";
    cin >> volba;
    while (volba != 'K')
    {
        switch (volba)
        {
        case 'F':
        {
            int n;
            double soucet = 0;
            cout << "Zadej cislo n: ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                double nc = 10 + (100 - 10) * (double)rand() / (RAND_MAX + 1);
                soucet += nc;
                cout << nc << endl;
            }
            cout << "Soucet je " << soucet << endl;
        }
        break;
        case 'W':
        {
            int n;
            int i = 0;
            double soucet = 0;
            cout << "Zadej cislo n: ";
            cin >> n;

            while (i < n)
            {
                double nc = 10 + (100 - 10) * (double)rand() / (RAND_MAX + 1);
                soucet += nc;
                cout << nc << endl;

                ++i;
            }
            cout << "Soucet je " << soucet << endl;
        }
        break;
        case 'D':
        {
            int n;
            int i = 0;
            double soucet = 0;
            cout << "Zadej cislo n: ";
            cin >> n;
            if (n > 0)
            {
                do {
                    double nc = 10 + (100 - 10) * (double)rand() / (RAND_MAX + 1);

                    cout << nc << endl;

                    soucet += nc;
                    ++i;

                } while (i < n);
                cout << "Soucet je " << soucet << endl;
            }
            else
            {
                cout << "Nula prvku v posloupnosti";
            }

        }
        break;
        default:
        {
            cout << "Nevybrana moznost";
        }
        break;
        }
        cout << "\n F = For, W = While, D = DO While, K=Konec: ";
        cin >> volba;
    }
}

// Odev_16-15-20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <random>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "Turkish");
    int sayi;
    cout << "1 veya 2. oyunu seciniz:";
    cin >> sayi;
    switch (sayi)
    {
    case 1:
        cout << "1 girildi";
        break;
    case 2:
        cout << "2 girildi";
        break;
    default:
        cout << "1 ve 2 girilmedi";
        break;
    }
    cout << endl;

    int rastgele, tahmin, s;
    srand(time(NULL)); 
    switch (sayi)
    {
    case 1:
        cout << "Sayý:";
        cin >> s;
        for (int i = 1; i <= s; i++)
        {
            for (int j = s; i <= j; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        break;

    /*case 2:
        rastgele = rand() % 10 + 1;
        rastgele = rand() % 10 + 1;
        rastgele = rand() % 10 * 1;

        for (int i = 1; i <= 3; i++)
        {
            cout << i << ".[1 ile 10 arasý] tahmininiz:";
            cin >> tahmin;
            if (tahmin == rastgele)
            {
                cout << "Tebrikler. Bildiniz\n";
                break;
            }
            else
                cout << "Üzgünüm. Bilemediniz\n";
        }
        cout << "Sayý:" << rastgele << endl;
        break;*/


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

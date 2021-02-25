// odev_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <time.h>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Turkish");

    //Ödev-1:
    //Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
    //Girdiði deðerlerden çiftlerin toplamlarýný ve teklerin toplamlarýný ekrana yazdýralým
    //Örn:Girdiler: 1 3 2 7 6 0
    /*Çýktýlar:
    Çift toplam= 8
    Tek toplam= 11
    */
    int sayi{}, toplam = 0, cfttolpam{}, tktoplam{};
        do
        {
            cout << "Sayý:";
            cin >> sayi;
            if (sayi % 2 == 1)
            {
                tktoplam += sayi;
            }
            else
            {
                cfttolpam += sayi;
            }
        } while (sayi != 0);
        cout << "Çift Sayýlar Toplam:" << cfttolpam << endl;
        cout << "Tek Sayýalr Toplam:" << tktoplam << endl;
        //Ödev-2:
        //Kullanýcý 0 (sýfýr) girene kadar kullanýcýdan deðer isteyelim
        //Girdiði deðerlerden negatiflerin toplamlarýný ve pozitiflerin toplamlarýný ekrana yazdýralým
        //Örn:Girdiler: -1 1 -2 -3 2 -7 6 0
        /*Çýktýlar:
        Pozitif toplam= 9
        Negatif toplam= -13
        */
        double ngttoplam{}, cfttoplam{};
        do
        {
            cout << "Sayý:";
            cin >> sayi;
            if (sayi > 0)
            {
                cfttoplam += sayi;
            }
            else
            {
                ngttoplam += sayi;
            }
        } while (sayi != 0);
        cout << "Pozitif Sayýlar Toplam:" << cfttoplam << endl;
        cout << "Negatif Sayýlar Toplam:" << ngttoplam << endl;
        //Ödev-3:
        //Girdiði deðerlerden negatiflerin çarpýmlarýný ve pozitiflerin çarpýmlarýný ekrana yazdýralým
        //Örn:Girdiler: -1 1 -2 -3 2 -7 6 0
        /*Çýktýlar:
        Pozitif çarpým= 12
        Negatif çarpým= 42
        */
        int   say;
        double   pztcarpým=1, ngtcarpým =1;
        do
        {
            cout << "Sayý:";
            cin >> say;
            if (say >0)
            {
               pztcarpým *= say;
            }
           else if (say<0)
            {
                ngtcarpým *= say;
            }
           else if (say == 0)
            {
                pztcarpým = 0;
                ngtcarpým = 0;
            }
        } 
        while (say != 0);
        cout << "Pozitif Sayýlar Çarpýmý:" << pztcarpým << endl;
        cout << "Negatif Sayýalr Çarpýmý:" << ngtcarpým << endl;
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

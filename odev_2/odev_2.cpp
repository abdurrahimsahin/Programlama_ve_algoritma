// odev_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <time.h>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Turkish");

    //�dev-1:
    //Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
    //Girdi�i de�erlerden �iftlerin toplamlar�n� ve teklerin toplamlar�n� ekrana yazd�ral�m
    //�rn:Girdiler: 1 3 2 7 6 0
    /*��kt�lar:
    �ift toplam= 8
    Tek toplam= 11
    */
    int sayi{}, toplam = 0, cfttolpam{}, tktoplam{};
        do
        {
            cout << "Say�:";
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
        cout << "�ift Say�lar Toplam:" << cfttolpam << endl;
        cout << "Tek Say�alr Toplam:" << tktoplam << endl;
        //�dev-2:
        //Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
        //Girdi�i de�erlerden negatiflerin toplamlar�n� ve pozitiflerin toplamlar�n� ekrana yazd�ral�m
        //�rn:Girdiler: -1 1 -2 -3 2 -7 6 0
        /*��kt�lar:
        Pozitif toplam= 9
        Negatif toplam= -13
        */
        double ngttoplam{}, cfttoplam{};
        do
        {
            cout << "Say�:";
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
        cout << "Pozitif Say�lar Toplam:" << cfttoplam << endl;
        cout << "Negatif Say�lar Toplam:" << ngttoplam << endl;
        //�dev-3:
        //Girdi�i de�erlerden negatiflerin �arp�mlar�n� ve pozitiflerin �arp�mlar�n� ekrana yazd�ral�m
        //�rn:Girdiler: -1 1 -2 -3 2 -7 6 0
        /*��kt�lar:
        Pozitif �arp�m= 12
        Negatif �arp�m= 42
        */
        int   say;
        double   pztcarp�m=1, ngtcarp�m =1;
        do
        {
            cout << "Say�:";
            cin >> say;
            if (say >0)
            {
               pztcarp�m *= say;
            }
           else if (say<0)
            {
                ngtcarp�m *= say;
            }
           else if (say == 0)
            {
                pztcarp�m = 0;
                ngtcarp�m = 0;
            }
        } 
        while (say != 0);
        cout << "Pozitif Say�lar �arp�m�:" << pztcarp�m << endl;
        cout << "Negatif Say�alr �arp�m�:" << ngtcarp�m << endl;
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

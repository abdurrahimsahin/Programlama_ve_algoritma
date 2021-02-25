// Odev_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <random>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "Turkish");
    int sayi;
    cout << "1 veya 2. �devi Seciniz:";
    cin >> sayi;
    switch (sayi)
    {
    case 1:
        cout << "1 �dev sorucu secildi";
        break;
    case 2:
        cout << "2 �dev sorucu secildi";
        break;
    default:
        cout << "1 ve 2 girilmedi";
        break;
    }
    cout << endl;
    /*�dev-1:
    Ekrana kullan�c�n�n girdi�i say� kadar * ��kt�s� versin
    �r : Klavyeden 5 girerse;
    *****
    ****
    ***
    **
    *
    */
    int islem, tahmin, s, s1, s2, hakk�, tahmin2, puan, sonuc;
    srand(time(NULL));
    switch (sayi)
    {
    case 1:
        cout << "Say� Giriniz:";
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
        /*�dev-2:
    Oyun: Rastgele iki say� (1-10) ve i�lem (+,-,*) program taraf�ndan se�ilecek. (3 tane random say� �retilecek)
    Kullan�c� sonucu tahmin etmeye �al��acak. 3 hata yap�nca program sonlanacak.
    Her do�ru cevap 1 puan, sonunda puan yazd�r�ls�n.
    �pucu: islem=rand()%3+1;
    ��lemi de random saay� olarak tutabilirsiniz.
    �r. 1 gelirse toplama, 2 gelirse ��karma, 3 gelirse �arpma yap.
    �r
    4*5= ?
    20
    Tebrikler,do�ru cevap
    5+4=?
    9
    Tebrikler,do�ru cevap
    4-1=?
    -3
    �zg�n�m,yanl�� cevap
    5*3=?
    20
    �zg�n�m,yanl�� cevap
    6*4=?
    20
    �zg�n�m,yanl�� cevap
    3 hatal� giri� yap�ld�. Oyun sona erdi.
    Toplam puan:2*/
    case 2:
        hakk� = 3;
        puan = 0;
        do
        {
            s1 = rand() % 10 + 1;
            s2 = rand() % 10 + 1;
            islem = rand() % 3 + 1;
            if (islem == 1)
            {
                sonuc = s1 + s2;
                cout << s1 << "+" << s2 << "=? ";
            }
            else if (islem == 2)
            {
                sonuc = s1 - s2;
                cout << s1 << "-" << s2 << "=? ";
            }
            else
            {
                sonuc = s1 * s2;
                cout << s1 << "*" << s2 << "=? ";
            }
            cin >> tahmin2;
            if (tahmin2 == sonuc)
            {
                cout << "Do�ru cevap\n";
                cout << "Puan�n�z:" << ++puan << endl;
            }
            else
            {
                cout << "Yanl�� cevap\n";
                cout << "Kalan hakk�n�z:" << --hakk� << endl;
            }
            
        } while (hakk� != 0);/*While d�ng�s�, i�inde bulunan ifade dogru oldugu s�rece altindaki komut veya komut blogu y�r�t�l�r.
                             Eger yanlis ise kontrol bir sonraki komut veya komut bloguna ge�er.
                             Kaynak:https://bilgisayardershanesi.com/bilgisayar_dersleri/c++-while-dongusu.html */
        cout << "Oyun bitti *-* Puan�n�z=" << puan << endl;

    }

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

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
    cout << "1 veya 2. Ödevi Seciniz:";
    cin >> sayi;
    switch (sayi)
    {
    case 1:
        cout << "1 Ödev sorucu secildi";
        break;
    case 2:
        cout << "2 Ödev sorucu secildi";
        break;
    default:
        cout << "1 ve 2 girilmedi";
        break;
    }
    cout << endl;
    /*Ödev-1:
    Ekrana kullanýcýnýn girdiði sayý kadar * çýktýsý versin
    Ör : Klavyeden 5 girerse;
    *****
    ****
    ***
    **
    *
    */
    int islem, tahmin, s, s1, s2, hakký, tahmin2, puan, sonuc;
    srand(time(NULL));
    switch (sayi)
    {
    case 1:
        cout << "Sayý Giriniz:";
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
        /*Ödev-2:
    Oyun: Rastgele iki sayý (1-10) ve iþlem (+,-,*) program tarafýndan seçilecek. (3 tane random sayý üretilecek)
    Kullanýcý sonucu tahmin etmeye çalýþacak. 3 hata yapýnca program sonlanacak.
    Her doðru cevap 1 puan, sonunda puan yazdýrýlsýn.
    Ýpucu: islem=rand()%3+1;
    Ýþlemi de random saayý olarak tutabilirsiniz.
    Ör. 1 gelirse toplama, 2 gelirse çýkarma, 3 gelirse çarpma yap.
    Ör
    4*5= ?
    20
    Tebrikler,doðru cevap
    5+4=?
    9
    Tebrikler,doðru cevap
    4-1=?
    -3
    Üzgünüm,yanlýþ cevap
    5*3=?
    20
    Üzgünüm,yanlýþ cevap
    6*4=?
    20
    Üzgünüm,yanlýþ cevap
    3 hatalý giriþ yapýldý. Oyun sona erdi.
    Toplam puan:2*/
    case 2:
        hakký = 3;
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
                cout << "Doðru cevap\n";
                cout << "Puanýnýz:" << ++puan << endl;
            }
            else
            {
                cout << "Yanlýþ cevap\n";
                cout << "Kalan hakkýnýz:" << --hakký << endl;
            }
            
        } while (hakký != 0);/*While döngüsü, içinde bulunan ifade dogru oldugu sürece altindaki komut veya komut blogu yürütülür.
                             Eger yanlis ise kontrol bir sonraki komut veya komut bloguna geçer.
                             Kaynak:https://bilgisayardershanesi.com/bilgisayar_dersleri/c++-while-dongusu.html */
        cout << "Oyun bitti *-* Puanýnýz=" << puan << endl;

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

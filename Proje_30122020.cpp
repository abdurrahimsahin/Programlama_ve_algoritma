// Proje_30122020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
using namespace std;

void merhaba();
void merhaba(int miktar);
int kare(int sayi);
bool tekcift();
void tekciftyazdir();
void asal(int sayi);
void asal(int sayi1, int sayi2);

int main()
{
    setlocale(LC_ALL, "Turkish");
    int sayi;
    
    merhaba();
    merhaba(10);
    cout << "Sayý:";
    cin >> sayi;
    merhaba(sayi);
    
    sayi = kare(5);
    cout << sayi << endl;
    
    cout << kare(6) << endl;

    cout << "Sayý:";
    cin >> sayi;
    cout << "Sayýnýn karesi:" << kare(sayi) << endl;
    
    cout << tekcift() << endl;

    if (tekcift())
        cout << "Çift\n";
    else
        cout << "Tek\n";
    

    tekciftyazdir();
    

    asal(7);

    asal(13);

    asal(14);

    asal(4);

    asal(1);

    asal(-3);

    asal(997);

    asal(0);

    asal(2);
   

    asal(1, 100);

    asal(-100, 100);
    
    asal(100, -100);

    asal(1, 10000);
    
}

//Ekrana "Merhaba" yazdýran fonksiyon
void merhaba()
{
    cout << "Merhaba\n" << endl;
}

//Kendisine gönderilen sayý kadar ekrana "Merhaba" yazdýran fonksiyon
void merhaba(int miktar)
{
    for (int i = 0; i < miktar; i++)
    {
        cout << "Merhaba\n";
    }
}

//Kendisine gönderilen sayýnýn karesini geri döndüren fonksiyon
int kare(int sayi)
{
    return sayi * sayi;
}


//Girilen sayý tek ise false, çift ise true deðerini döndüren fonksiyon
bool tekcift()
{
    int s;
    cout << "Sayý:";
    cin >> s;
    if (s % 2 == 0) //Çift
        return true;
    else //Tek
        return false;
}

//tekcift() fonksiyonunu çaðýrýp, oradan gelen deðere göre tek veya çift yazdýran fonksiyon
void tekciftyazdir()
{
    bool durum;
    durum = tekcift();
    if (durum)
        cout << "Çift\n";
    else
        cout << "Tek\n";
}

//Kendisine gönderilen sayýnýn asal sayý olup olmadýðýný ekrana yazdýran fonksiyon
//Asal sayý: Sadece 1'e ve kendisine tam bölünebilen sayýlardýr. Ör: 2, 5, 13, 997
//Not-1: 1 ve negatif sayýlar asal sayý deðildir. En küçük asal sayý 2'dir.
//Not-2: Bir sayý (kendisi hariç) yarýsýndan daha büyük olan sayýlara tam bölünemez. 
//Örneðin: 15 sayýsý 8,9...14'e kadar olan sayýlara bölünemez. 
//Örneðin 12 sayýsý 7,8,....,11'e bölünemez.
//Örneðin 13 sayýsý 7,8,9,....,12'e bölünemez.

void asal(int sayi)
{
    bool durum = true; //Farzedelim ki sayý asaldýr.
    if (sayi <= 1)
        durum = false; //sayý asal deðildir
    else
    {
        for (int i = 2; i <= int(sayi/2) ; i++) //i<=sayi-1 //i<sayi //for'un daha az çalýþmasý için yarýsýna kadar gitmesini saðladýk.(Bir sayý (kendisi hariç) yarýsýndan daha büyük olan sayýlara tam bölünemez.)
        {
            if (sayi % i == 0)
            {
                durum = false; //sayý asal deðildir
                break; //Burada sayýnýn asal olmadýðýný ispat ettik. Artýk diðer sayýlara bakmasýna gerek yok. for döngüsünden çýkabilir. Bu yüzden break ile kýrdýk.
            }
        }
    }
    if (durum) //true ise çalýþýr
        cout << sayi <<  " sayýsý asaldýr\n";
    else //false ise çalýþýr
        cout << sayi << " sayýsý asal deðildir\n";
}




//Kendisine gönderilen sayýlar arasýndaki asal sayýlarý ekrana yazdýran fonksiyon
void asal(int sayi1,int sayi2)
{
    
    int bos;
    

    if (sayi1 > sayi2)
    {
        bos = sayi1;
        sayi1 = sayi2;
        sayi2 = bos;
    }
    for (int  sayi = sayi1; sayi <= sayi2; sayi++)
    {
        bool durum = true; //Farzedelim ki sayý asaldýr.
        if (sayi <= 1)
            durum = false; //sayý asal deðildir
        else
        {
            for (int i = 2; i <= int(sayi / 2); i++) //i<=sayi-1 //i<sayi //for'un daha az çalýþmasý için yarýsýna kadar gitmesini saðladýk.(Bir sayý (kendisi hariç) yarýsýndan daha büyük olan sayýlara tam bölünemez.)
            {
                if (sayi % i == 0)
                {
                    durum = false; //sayý asal deðildir
                    break; //Burada sayýnýn asal olmadýðýný ispat ettik. Artýk diðer sayýlara bakmasýna gerek yok. for döngüsünden çýkabilir. Bu yüzden break ile kýrdýk.
                }
            }
        }
        if (durum) //true ise çalýþýr
            cout << sayi << " ";
    }
    cout << endl;
}

//Gelecek dersimizde aþaðýdaki örneklerle devam edeceðiz....

//Girilen sayýnýn Polindrom sayý olup olmadýðýný bulan fonksiyon
//Polindrom sayý: Tersten okunuþu kendisine eþit olan sayýlardýr. Örneðin: 5,131,1221,12521,13531,111


//Bir sayýnýn asal bölenlerini yazdýralým

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

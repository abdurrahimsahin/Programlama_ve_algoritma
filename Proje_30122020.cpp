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
    cout << "Say�:";
    cin >> sayi;
    merhaba(sayi);
    
    sayi = kare(5);
    cout << sayi << endl;
    
    cout << kare(6) << endl;

    cout << "Say�:";
    cin >> sayi;
    cout << "Say�n�n karesi:" << kare(sayi) << endl;
    
    cout << tekcift() << endl;

    if (tekcift())
        cout << "�ift\n";
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

//Ekrana "Merhaba" yazd�ran fonksiyon
void merhaba()
{
    cout << "Merhaba\n" << endl;
}

//Kendisine g�nderilen say� kadar ekrana "Merhaba" yazd�ran fonksiyon
void merhaba(int miktar)
{
    for (int i = 0; i < miktar; i++)
    {
        cout << "Merhaba\n";
    }
}

//Kendisine g�nderilen say�n�n karesini geri d�nd�ren fonksiyon
int kare(int sayi)
{
    return sayi * sayi;
}


//Girilen say� tek ise false, �ift ise true de�erini d�nd�ren fonksiyon
bool tekcift()
{
    int s;
    cout << "Say�:";
    cin >> s;
    if (s % 2 == 0) //�ift
        return true;
    else //Tek
        return false;
}

//tekcift() fonksiyonunu �a��r�p, oradan gelen de�ere g�re tek veya �ift yazd�ran fonksiyon
void tekciftyazdir()
{
    bool durum;
    durum = tekcift();
    if (durum)
        cout << "�ift\n";
    else
        cout << "Tek\n";
}

//Kendisine g�nderilen say�n�n asal say� olup olmad���n� ekrana yazd�ran fonksiyon
//Asal say�: Sadece 1'e ve kendisine tam b�l�nebilen say�lard�r. �r: 2, 5, 13, 997
//Not-1: 1 ve negatif say�lar asal say� de�ildir. En k���k asal say� 2'dir.
//Not-2: Bir say� (kendisi hari�) yar�s�ndan daha b�y�k olan say�lara tam b�l�nemez. 
//�rne�in: 15 say�s� 8,9...14'e kadar olan say�lara b�l�nemez. 
//�rne�in 12 say�s� 7,8,....,11'e b�l�nemez.
//�rne�in 13 say�s� 7,8,9,....,12'e b�l�nemez.

void asal(int sayi)
{
    bool durum = true; //Farzedelim ki say� asald�r.
    if (sayi <= 1)
        durum = false; //say� asal de�ildir
    else
    {
        for (int i = 2; i <= int(sayi/2) ; i++) //i<=sayi-1 //i<sayi //for'un daha az �al��mas� i�in yar�s�na kadar gitmesini sa�lad�k.(Bir say� (kendisi hari�) yar�s�ndan daha b�y�k olan say�lara tam b�l�nemez.)
        {
            if (sayi % i == 0)
            {
                durum = false; //say� asal de�ildir
                break; //Burada say�n�n asal olmad���n� ispat ettik. Art�k di�er say�lara bakmas�na gerek yok. for d�ng�s�nden ��kabilir. Bu y�zden break ile k�rd�k.
            }
        }
    }
    if (durum) //true ise �al���r
        cout << sayi <<  " say�s� asald�r\n";
    else //false ise �al���r
        cout << sayi << " say�s� asal de�ildir\n";
}




//Kendisine g�nderilen say�lar aras�ndaki asal say�lar� ekrana yazd�ran fonksiyon
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
        bool durum = true; //Farzedelim ki say� asald�r.
        if (sayi <= 1)
            durum = false; //say� asal de�ildir
        else
        {
            for (int i = 2; i <= int(sayi / 2); i++) //i<=sayi-1 //i<sayi //for'un daha az �al��mas� i�in yar�s�na kadar gitmesini sa�lad�k.(Bir say� (kendisi hari�) yar�s�ndan daha b�y�k olan say�lara tam b�l�nemez.)
            {
                if (sayi % i == 0)
                {
                    durum = false; //say� asal de�ildir
                    break; //Burada say�n�n asal olmad���n� ispat ettik. Art�k di�er say�lara bakmas�na gerek yok. for d�ng�s�nden ��kabilir. Bu y�zden break ile k�rd�k.
                }
            }
        }
        if (durum) //true ise �al���r
            cout << sayi << " ";
    }
    cout << endl;
}

//Gelecek dersimizde a�a��daki �rneklerle devam edece�iz....

//Girilen say�n�n Polindrom say� olup olmad���n� bulan fonksiyon
//Polindrom say�: Tersten okunu�u kendisine e�it olan say�lard�r. �rne�in: 5,131,1221,12521,13531,111


//Bir say�n�n asal b�lenlerini yazd�ral�m

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

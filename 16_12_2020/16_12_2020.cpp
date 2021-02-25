// 16_12_2020.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <locale.h>
#include <random>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Turhish");
    int abc;
    cout << "Sayı giriniz:";
    cin >> abc;
    switch (abc)
    {
    case 1:
        cout << "1 girildi";
        break; //case kırıldı. Switch case yapısı sona erdi.
    case 2:
        cout << "2 girildi";
        break; //case kırıldı. Switch case yapısı sona erdi.
    default:
        cout << "1 ve 2 girilmedi";
        break; //case kırıldı. Switch case yapısı sona erdi.
    }
    cout << endl;
    int rastgele, tahmin;
    srand(time(NULL));
    // Bu kod program her çalıştıgında farkılıo sayılar üretmesini sağlar.
    switch (abc)
    {
    case 1:
        // rand()%"son değer - ilk değer +1
        rastgele = rand() % 25 + 1;
        // Ör : 20 ile 50 arasındaki değerler
   /* rastgele = rand() % 31 + 20;
        cout << rastgele;
    rastgele = rand() % 31 - 10;*/
      /*  cout << rastgele;
        for (int i = 0; i < 3; i++)
        {
            cout << i << "tahmininiz:";
            cin >> tahmin;
            if (tahmin == rastgele)
            {
                cout << "Tebrikler. Bİldiniz\n";
                break;
            }
            else
                cout << "Üzgünüm. Bİlemedenizi \n";
        }
        cout << "sayi";
        break;
    default:
        break; */
        for (int i = 0; i < abc; i++)
        {
            cout << "*";

        }
        cout << endl;
    }
    //Menü
    /*
    1-Oyun: 1 ile 25 arasındaki random sayı üretilsin. kullanıcı 3
    tahmin hakkı ile bu sayıyı tahmin etsin
    2- Ekran kullanıcının girdiği sayı kadar * çıkyısı versin
    ör:3 igrerse
    *
    **
    ***

    /*
    oyun:rastkele sayı (1-10)ve islem (+,-,*) program tarafından seçilecek
    kullanıcı sonucu tahmin eteye çalışacak. 3 hata yapınca program
    sonlanacak.
    */
}



// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü

// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin

// proje_251120.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <locale>
using namespace std;
/*
void kare(int)*/
int main()
{
	setlocale(LC_ALL, "Turkish");
	float kenar1 = 0, kenar2 = 0, alan, cevre;
	cout << kenar1 << kenar2;
	while (kenar1 <= 0)
	{
		cout << "1.kenar:";
		cin >> kenar1;
	}
	while (kenar2 <= 0)
	{
		cout << "2.kenar:";
		cin >> kenar2;
	}
	//cout << kenar1 << " " << kenar2;
	alan = kenar1 * kenar2;
	cevre = (kenar1 + kenar2) * 2;
	cout << " Çevre;" << cevre
		<< "\nAlan:" << alan;

	// "\n" ve endl ifadelerin consol ekranında bir alt satıra gecilir.
	
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

// 9-12-20_DersProje.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <locale>
int main()
{
    using namespace std;
    setlocale(LC_ALL,"Turkish");
	int sayi = 0,toplam;
	cout << "sayi++:" << sayi++ <<endl;
	cout << "sayi:" <<  sayi <<endl;
	cout << "++sayi:" << ++sayi <<endl;
	cout << "sayi:" << sayi <<endl;
	toplam = sayi;
	cout << "sayi:" << sayi << " toplam:" << toplam << endl;// sayi:2 toplam:2
	toplam = ++sayi;
	cout << "++sayi" << ++sayi << " toplam:" << toplam << endl;//sayi:3 toplam:3
	toplam = sayi++;
	cout << "sayi++" << sayi++ << " toplam:" << toplam <<endl;// sayi:4 toplam:3
	sayi++; //sayi:5
	++sayi; //sayi:6

	--sayi;//sayi:5
	cout << sayi << endl;

	cout << sayi << endl;

	sayi = sayi + 4;
	sayi += 4;

	sayi = sayi - 5;
	sayi -= 5;
	
	sayi = sayi * 10;
	sayi *= 10;

	sayi = sayi / 3;
	sayi /= 3;

	//cout<< sayi"bura eşittir yazılmaz"<<endl;

	cout << sayi + 1;//sayi değeri değişmez
	cout << ++sayi; // sayi değeri 1 artar

	//for(
	
	// forun icindeki int değerini önceden yazılabilir "int=0;"

	//Ekrana 10 kere Merhaba yazdıralım

	for (int i = 0; i < 10; i++) 
	{
		cout << "Merhaba\t";// \t tab boşlugu bırakır 
	}
	cout << endl << endl;
	// EKrana 1 ile 10 arasındaki değerleri yazdıralım
	for (int i = 1; i <= 10; i++)
	{	// For döngüsü kendisinden sonra gelne bir satırı çalıştırı
		cout << i << "\t";

		cout << endl;

		sayi = 0;
	}
	cout << endl << endl;
	for (;;)
	{ // For döngüsü küme parantezi sonra gelne bir satırı çalıştırı
		//sonsuz döngü
		cout << ++sayi << endl;
		if (sayi == 5)
			break;
	}	
	cout << endl << endl;
	for ( int i = 1; i < 0; i++)
	{
		// ölü döngü
		cout << " Deneme";
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i--)//burada sonsuza kadar gider sayı hep -1 cıkartır 10 dan küçük olur
	{
		cout << i << endl;
		//sonsuz döndü
		if (i <-5)
			break;
	}
	cout << endl << endl;
	// EKrana 1 ile 10 arasındaki değerleri yazdıralım
	int i = 1;
	for (i = 1; i <=10; i+=2)//i=i+2
	{
		cout << i << " ";
	}
	cout << "Döngü bittikten sonra i değeri:"<< i << endl;
	// Bu döngü kaç kez çalışır --> 10 kere çalışır
	// En son i deperi hangi değeri alır-->11
	// Çıktılar nedir? --> 1 3 5 7 9
	for (i = 1; i <= 10; i++)
	{
		if(i%2==1) //if(i%2!=0)
		cout << i << " ";
	}
	// EKrana 1 ile 10 arasındaki tek sayıları yazdıralım
	cout << "Döngü bittikten sonra i değeri:" << i << endl;
	// Bu döngü kaç kez çalışır --> 10 kere çalışır
	// if kaç kez çalışır? --> 5 kez
	// En son i deperi hangi değeri alır -->11
	// Çıktılar nedir? --> 1 3 5 7 9

	//1 ile 100 arasında 3'e veya 5'e tam bölünen sayıları ekrana yazdıralım?
	for (i = 1; i <= 100; i++)
	{
		if (i%3 == 0 || i%5 == 0)
			cout << i <<"\t";
	}
	cout << endl << endl;
	//1 ile 100 arasında 3'e veya 5'e tam bölünen 15'e bölünemeyen sayıları ekrana yazdıralım?
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0 || i % 5 == 0) && i%15 !=0 )
			cout << i << "\t";
	}
	cout << endl << endl;

	// 5 ile 1 arasındaki değerleri yazdıralım: 5 4 3 2 1 
	for (i=5; i>= 1; i--)
	{
			cout << i << endl;
	}

	//Klavyedne girilen değerin faktöriyelini yazdıralım
	cout << "sayi:";
	cin >> sayi;
	int f=1; //çarpmada etkisiz elemam 1 değeridir. bu yüzden faktörçyel sonucunu tutacak olan değeri 1 değerini atarız
	for ( i = 1; i <= sayi; i++)
	{		
		f*=i; //f=f*i; 
			  //5 girilirse; 1*1=1 1*2=2 2*3=6 6*4=24 24*5=120
	}
	cout << sayi << "!=" << f << endl;
	//Örn: 5!=5*4*3*2*1=120
	f = 1;
	for (i = sayi ; i >= 1; i--)
	{
		f *= i; //f=f*i; 
			  //5 girilirse; 1*5=5 5*4=20 20*3=60 60*2=120 120*1=120
	}
	cout << sayi << "!=" << f << endl;

	// 1'den girilen sayıya kadar olan sayıalrın toplamını ekrana yazdırın
	toplam = 0; // Bu deişkeni daha önceden tanımladık
	for  (i = 1; i <=sayi; i++)
	{
		toplam += i;// toplam=toplam+i
	}
	cout << "Toplam:" << toplam << endl;

	//girilen sayı kadar fibonacci sayılarını yazdıralım
	//Örn:5 girilirse= 1 1 2 3 5 
	//Örn:6 girilirse= 1 1 2 3 5 8  
	//Yukarıda girilen sayıyı alıyoruz
	int s1=1, s2=1, t;
	cout << s1 << " "<< s2 << " " ;// 1 1 
	for ( i = 1; i <= sayi-2; i++)
	{
		t = s1 + s2;
		cout << t << " ";
		s1 = s2;
		s2 = t;
	}




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

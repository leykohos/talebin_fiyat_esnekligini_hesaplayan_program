#include <stdio.h>
int main() {
	float p1, p2, q1, q2, esneklik;
	printf("Talebin Fiyat Esnekliğini Hesaplama Programi\n");
	//Veri girisleri
	printf("1. fiyati giriniz: ");
	scanf_s("%f", &p1);

	printf("2. fiyati giriniz: ");
	scanf_s("%f", &p2);

	printf("1. talep adetini giriniz: ");
	scanf_s("%f", &q1);

	printf("2. talep adetini giriniz: ");
	scanf_s("%f", &q2);
	//Talebin fiyat esnekligini hesaplayan fonksiyon
	esneklik = (q2 - q1) / (q1 + q2) * (p1 + p2) / (p2 - p1);

	printf("Talebin fiyata gore esnekligi:%.3f\n", esneklik);
	//Yorum yaparken esnekligin pozitif olmasını saglayan bolum
	if (esneklik < 0)
	{
		esneklik = esneklik * -1;
	}
	else if (esneklik > 0)
	{
		esneklik = esneklik;
	}
	else
	{
		esneklik = 0;
	}
	//Esnekligin yorumlanmasi

	if (esneklik > 1)
	{
		printf("Esnekligin mutlak degeri 1`den buyuk oldugu icin 'Esnek Iliski'");
	}
	else if (esneklik == 1)
	{
		printf("Esnekligin mutlak degeri 1`e esit oldugu icin 'Birim Esnek Iliski'");
	}
	else if (esneklik < 1)
	{
		printf("Esnekligin mutlak degeri 1`den kucuk oldugu icin 'Kati Iliski'");
	}
	else if (esneklik == 0)
	{
		printf("Esnekliginiz 0 oldugu icin 'Tam Katı Iliski'");
	}
	else
	{
		printf("hatali tuslama yaptiniz");
	}
}
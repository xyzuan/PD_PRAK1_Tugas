#include <stdio.h>

int main(){
	
	char nama[999];
	int a,b,c,d,j;
	int e = 4;
	int r;
	
	printf("Masukkan nilai:\n");
	
	// Input nama
	printf("Nama Lengkap: ");
	scanf("%[^\n]s]", &nama);
	
	// Input Nilai Pemograman Dasar
	printf("Pemograman Dasar: ");
	scanf("%d", &a);
	
	// Input Nilai Kalkulus
	printf("Kalkulus: ");
	scanf("%d", &b);
	
	// Input Nilai PTI
	printf("PTI: ");
	scanf("%d", &c);
	
	// Input Nilai Orkom
	printf("Orkom: ");
	scanf("%d", &d);
	
	// Mencari rata-rata
	r = ( a + b + c + d ) / e;
	
	if ( r >= 75 )
	{
		printf("Selamat ");
		printf("%s", &nama);
		printf(" lulus, dengan hasil nilai rata-rata: ");
		printf("%d", r);
	}
	else
	{
		printf("Selamat ");
		printf("%s", &nama);
		printf(" tidak lulus, dengan hasil nilai rata-rata: ");
		printf("%d", r);
	}
	
	pause()
	
}

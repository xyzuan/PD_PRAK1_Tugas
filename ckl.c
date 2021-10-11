//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

// Library
#include <stdio.h>
#include <conio.h>

int main(){
	
	// Variable
	char nama[999]; // Nama Mahasiswa
	int a,b,c,d,j;	// Nilai Matakuliah
	int e = 4;		// Jumlah Matakuliah
	float r;		// Var. Rata - rata
	
	// Banner
	printf("==================================================\n");
	printf("===          Tugas Pemrograman Dasar           ===\n");
	printf("===               Cek Kelulusan                ===\n");
	printf("==================================================\n");
	
	////////////////////////////
	// Input Data Mahasiswa/i //
	////////////////////////////
	printf("\n");
	printf("  Input Data Mahasiswa\n");
	
	// Nama
	printf("  Nama Lengkap: ");
	scanf("%[^\n]s]", &nama);
	
	// Nilai Pemograman Dasar
	printf("  Pemograman Dasar: ");
	scanf("%d", &a);
	
	// Nilai Kalkulus
	printf("  Kalkulus: ");
	scanf("%d", &b);
	
	// Nilai PTI
	printf("  PTI: ");
	scanf("%d", &c);
	
	// Nilai Orkom
	printf("  Orkom: ");
	scanf("%d", &d);
	
	///////////////////////
	// Mencari rata-rata //
	///////////////////////
	r = ( a + b + c + d ) / e;
	
	//////////////////////////////////
	// Fungsi Menyatakan Lulus		//
	// Jika, nilai rata rata >= 75	//
	//////////////////////////////////
	if ( r >= 75 )
	{
		printf("\n");
		printf("  Selamat ");
		printf("%s", &nama);
		printf(" lulus, dengan hasil nilai rata-rata: ");
		printf("%.2f", r);
		printf("\n");
	}
	else
	{
		printf("\n");
		printf("  Selamat ");
		printf("%s", &nama);
		printf(" tidak lulus, dengan hasil nilai rata-rata: ");
		printf("%.2f", r);
		printf("\n");
	}
	
	/////////////
	// End Msg //
	/////////////
	printf("\n");
	printf("==================================================\n");
	printf("												  \n");
	printf(" Developed by:									  \n");
	printf(" Jody Yuantoro ( 2021-147 )						  \n");
	printf(" Informatics Engineering, Faculty of Engineering  \n");
	printf(" University of Muhammadiyah Malang				  \n");
	printf("												  \n");

	printf("==================================================\n");
	printf(" Tekan tombol apapun untuk mengakhiri program . . \n");	
	printf("==================================================\n");
	
	getch();
	return 0;

}

#include <stdio.h>

//fungsi menghitung volume balok
int volume_balok(int b1, int b2, int b3){
	
	int vol_balok = b1*b2*b3;
	
	return(vol_balok);
}

//fungsi menghitung kelling balok
int keliling_balok(int a1, int a2,int a3){
	
	int kll_balok = 4*(a1+a2+a3);
		
	return (kll_balok);
}

//fungsi menghitung luas balok
int luas_balok(int c1, int c2, int c3){
	
	int ls_balok = 2*((c1*c2)+(c1*c3)+(c2*c3));
	
	return(ls_balok);
}

int main(){
	
	//deklarasi variable
	int panjang, lebar, tinggi,volume, keliling, luas ;
	
	
	do{
		printf("Program Menghitung keliling, volume, dan luas Balok\n");
		
		//mengambil input user
		printf("nilai panjang : ");
		scanf("%d", &panjang);
		printf("nilai lebar : ");
		scanf("%d", &lebar);
		printf("nilai tinggi : ");
		scanf("%d", &tinggi);
		system("clear");
		if(!panjang || !lebar || !tinggi || panjang<=0 || lebar<=0 || tinggi<=0){
			printf("input salah\n");
			system("pause");
			system("clear");
		}
		fflush(stdin);
	}while(!panjang || !lebar || !tinggi || panjang<=0 || lebar<=0 || tinggi<=0);
	
	
	
	//cetak hasil perhitungan volume, keliling, dan luas balok dari fungsi di atas
	printf("volume balok : %d\n", volume_balok(panjang, lebar, tinggi));
	printf("keliling balok : %d\n", keliling_balok(panjang, lebar, tinggi));
	printf("luas balok : %d", luas_balok(panjang, lebar, tinggi));
	
	return(0);
}
#include <stdio.h>

//fungsi menghitung tegangan
float fungsi_tegangan(float tahanan, float ampere){
	
	float volt = tahanan*ampere;
	
	return volt;
}

//fungsi menghitung arus listrik
float fungsi_arus(float voltase, float tahanan){
	
	float arus = voltase/tahanan;
	
	return arus;
}

//fungsi menghitung hambatan(resistansi)
float fungsi_hambatan(float voltase, float ampere){
	
	float tahanan = voltase/ampere;
	
	return tahanan;
}


int main(){
	
	//Program menghitung rumus hukum ohm
	printf("Program perhitungan rumus hukum ohm\n");
	
	//deklarasi variable 
	float tegangan, arus, hambatan;
	
	//pengambilan input user
	printf("tegangan : "); scanf("%f", &tegangan);
	printf("arus : "); scanf("%f", &arus);
	printf("hambatan : "); scanf("%f", &hambatan);
	
	//pengambilan rumus berdasarkan kondisi dari input
	if(tegangan == 0){		
		
		//menjalankan fungsi tegangan jika kondisi tegangan = 0	
		printf("tegangan : %.2f V", fungsi_tegangan(hambatan, arus));
		
	}else if(arus == 0){	
		
		//menjalankan fungsi arus jika kondisi arus = 0
		printf("arus : %.2f A", fungsi_arus(tegangan, hambatan));
		
	}else if(hambatan == 0){		
		
		//menjalankan fungsi hambatan jika kondisi = 0
		printf("hambatan : %.2f ohm", fungsi_hambatan(tegangan, arus));	
		
	}else {
		
		//mencetak input salah ketika input salah atau input semua isi(tidak 0)
		printf("input salah");
	}
	return(0);
}
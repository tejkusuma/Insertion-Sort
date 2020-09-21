#include <stdio.h>

int main(){
	
	int	data[100];
  	int i,n,j,tmp;

  	printf("------------------------------------------------------- \n");
	printf("|   PROGRAM PENGURUTAN ANGKA DENGAN SORT INSERTION     | \n");
    printf("------------------------------------------------------- \n\n");
    
    //memasukkan jumlah data oleh pengguna
    printf("Masukkan banyak data : "); scanf("%d", &n);
	
	//memasukkan angka 
    for(i=0;i<n;i++)
    {
        printf("Data %d = ", i); scanf("%d", &data[i]);
    }
  
  	printf("\n");
  	printf("Angka Sebelum Diurutkan :");
   	printf("\n");
  
	//mencetak angka sebelum diurutkan
	for (i=0; i<n; i++){
	printf("%d ", data[i]);
	}
	printf("\n");
	printf("\n");
   

	//perulangan untuk mengurutkan angka dengan sort_insertion
	for (i=1;i<n;i++){
		j=i-1;
		while(j >= 0 && data[j] > data[j+1]){
		  tmp = data[j];
		  data[j] = data[j+1];
		  data[j+1] = tmp;
		  j--;
		}
	}

	//mencetak angka hasil pengurutan
	printf("Hasil pengurutan sebagai berikut:\n");
	for(i=0; i<n; i++){
	printf("%d ", data[i]);
	printf("\n");
	}
  
  return 0;
}

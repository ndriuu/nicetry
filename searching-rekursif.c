#include<stdio.h>
#include<string.h>
struct string {
	char kalimat[99];
	int pj;
} a[99];
int temp,i,n,max;
main(){
	printf("Jumlah string : "); scanf("%d",&n); getchar();
	for(i=0;i<n;i++){
		printf("String %d : ", i+1); gets(a[i].kalimat);
		a[i].pj = strlen(a[i].kalimat);
		if (i>0) {
			if (a[i].pj > max) {
				max= a[i].pj;
				temp = i;
			}
		}
		else {
			max = a[i].pj; 
			temp=0;
		}	
	}
	printf("String terpanjang berada di string %d yang berjumlah %d karakter ", temp+1, strlen(a[temp].kalimat));
}

#include <stdio.h>
#include <stdlib.h> 

int linear_search(int eleman_sayisi, int aranan) {
    int dizi[eleman_sayisi];
    int i;

    for (i = 0; i < eleman_sayisi; i++) {					
        printf("Dizinin %d. elemanini girin: ", i+1);
        scanf("%d", &dizi[i]);
    }
    //asagida eleman sayisini kullanicidan alip sonra elemanlari tek tek girip diziye atiyorum

    for (i = 0; i < eleman_sayisi; ++i) {
        if (dizi[i] == aranan) {
            printf("Dizinin %d. elemani %d\n", i+1, aranan);
            return 1;
        }
    // dizinin icine sirayla bakip aranan sayiyi bulunca ekrana yazdiriyoruz
        
    }
    printf("Eleman bulunamadi\n");
    //eleman dizide yoksa olmadigi gosterilir
    return 0;
}

int main(int argc, char *argv[]) {
    int eleman_sayisi, aranan;

    printf("Dizinin eleman sayisini girin: ");
    scanf("%d",&eleman_sayisi);
	//eleman sayisini kullanicidan aliyoruz
    printf("Dizide aranacak olan elemani girin = ");
    scanf("%d",&aranan);
	//aranacak elemani sorduk
    linear_search(eleman_sayisi, aranan);

    return 0;
}


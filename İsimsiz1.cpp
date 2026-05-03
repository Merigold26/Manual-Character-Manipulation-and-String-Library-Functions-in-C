#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void indeksleri_buyut(char *deneme) {
    if (deneme[0] >= 'a' && deneme[0] <= 'z') { //büyütme
        deneme[0] -= 32;
    }

    if (deneme[1] >= 'A' && deneme[1] <= 'B') { //küçültme

        deneme[1] += 32;
    }
    
    if (deneme[2]>= 'a' && deneme[2]<='z') {
	
    deneme [2] -= 32; }
    
    if (deneme[3]>='a' && deneme[3]<='z') { // büyütürken eksi amk
	
    deneme[3] -= 32; }
}

int main() {
    char deneme[6] = {'a', 'B', 'c', 'd', 'e', '\0'};

    indeksleri_buyut(deneme);
                     
    printf("%s\n", deneme);
    
    const char *haystack = "Merhaba Dunya";
    const char *needle = "Dunya";// ayný stringi arýyor amk dunya varsa bulundu yoksa bulunamadý

    if (strstr(haystack, needle) != NULL) {
        printf("'%s' stringi '%s' stringi içinde bulundu.\n", needle, haystack);
    } else {
        printf("'%s' stringi '%s' stringi içinde bulunamadý.\n", needle, haystack);
    }

     const char *str = "Merhaba Dunya";
    char ch = 'z';

    if (strchr(str, ch) != NULL) {
        printf("'%c' karakteri '%s' stringi içinde bulundu.\n", ch, str);
    } else {
        printf("'%c' karakteri '%s' stringi içinde bulunamadý.\n", ch, str);
    }
    
   /* const char *str = "1234";

    int number = atoi(str);

    printf("String: %s, Integer: %d\n", str, number);
    
    const char *strx = "12.34";

    float sayi = atof(strx);

    printf("String: %s, Float: %.2f\n", strx, sayi);*/
    

    return 0;
}



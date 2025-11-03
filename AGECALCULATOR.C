//आयु मानचित्र
#include <stdio.h>

int main() {
    int oldage;
    printf ("कृपया अपना वर्तमान आयु लिखे =");
    scanf ("%d",&oldage);
    
     int afteryears;
     printf ("वर्षों बाद  =");
     scanf ("%d",&afteryears);
    
    printf ("आपकी नई उम्र होगी  = %d" , oldage +afteryears );
    printf ("\n धन्यवाद आपका दिन शुभ हो");
    
    return 0;
}
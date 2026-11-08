#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>   
#include <string.h>
// Laver en struktur, som gør det muligt at have 20 karakterer i hver string til at navngive objekter i spillet
struct item {
    char names[20];
};
// void: this function takes no arguments, dvs ingen lamda, ingen parametre som hører til i den. Kun under. Det samme som at skrive int main(), i nyere versioner.
int main(void) {
    // Gør sådan at det ikke er en tidsgrænse på spillet
    srand(time(NULL));
    // 
    struct item items[] = {{"rock"}, {"paper"}, {"scissors"}};
    // Laver en int som hedder count der er på 3, fordi vi senere skal tælle ned fra 3 (Lav en opdateret version senere)
    int count = 3;
    // Computeren vælger tilfældigt imellem de tre items
    int pick = rand() % 3;
    // Dit gæt må maks være på 15 tegn
    char guess[15];
    // printer starten ud
    printf("Welcome to Rock, Paper, Scissors!\n");
    // printer at man skal indsætte sit svar i lower case
    printf("Enter your answer: (lower case)\n");
    // Gør sådan at brugerens gæt kan være en string på maks 15 tegn med format specifieren %s som hengiver at det skal være en string
    scanf("%14s", guess);
    // strcmp sammeligner med det tilfældige som computeren har lavet
    //hvis der er ingen forskel, så er det en tie
    if (strcmp(guess, items[pick].names) == 0) {
        printf("Tie!\n");
    } //laver alle vinder scenarier
    else if ((strcmp(guess, items[0].names) == 0 && pick == 2) ||
         (strcmp(guess, items[1].names) == 0 && pick == 0) ||   
         (strcmp(guess, items[2].names) == 0 && pick == 1)) {   
    printf("Player wins!\n");
    } //laver alle taber scenarier:
    else {
    printf("Computer wins!\n");
    }

    // skal helst være i bunden, men ikke nødvendigt pga void i starten.
    return 0;

}
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char ime[20];
    int godine;
};

int main() {
    int broj_studenata;
    struct Student *studenti;

    // Unos broja studenata
    printf("Unesi broj studenata: ");
    if (scanf("%d", &broj_studenata) != 1 || broj_studenata <= 0) {
        printf("Neispravan unos broja studenata.\n");
        return 1;
    }

    // Alocira se memorija za studente
    studenti = calloc(broj_studenata, sizeof(struct Student));
    if (studenti == NULL) {
        printf("Neuspešno alocirana memorija.\n");
        return 1;
    }

    // Unos podataka o studentima
    for (int i = 0; i < broj_studenata; i++) {
        printf("Ime studenta %d: ", i + 1);
        if (scanf("%19s", studenti[i].ime) != 1) {
            printf("Neuspešan unos imena studenta.\n");
            free(studenti);
            return 1;
        }
        printf("Godine studenta %d: ", i + 1);
        if (scanf("%d", &studenti[i].godine) != 1) {
            printf("Neuspešan unos godina studenta.\n");
            free(studenti);
            return 1;
        }
    }

    // Ispis podataka u fajl i računanje proseka godina
    FILE *fptr = fopen("Studenti.txt", "w+");

    if (fptr == NULL) {
        printf("Neuspešno otvaranje fajla.\n");
        free(studenti);
        return 1;
    }

    int total_godine = 0;
    int broj_studenata_read = 0;
    int godine;
    char buffer[256];

    for (int i = 0; i < broj_studenata; i++) {
        fprintf(fptr, "Student %d\nIme: %s\nGodine: %d\n\n", i + 1, studenti[i].ime, studenti[i].godine);
    }

    rewind(fptr);

    while (fgets(buffer, sizeof(buffer), fptr)) {
        if (sscanf(buffer, "Godine: %d", &godine) == 1) {
            total_godine += godine;
            broj_studenata_read++;
        }
    }

    fclose(fptr);

    if (broj_studenata_read > 0) {
        float prosek_godina = (float) total_godine / broj_studenata_read;
        printf("Prosek godina studenata je: %.2f\n", prosek_godina);
    } else {
        printf("Nema podataka o studentima.\n");
    }

    free(studenti);

    return 0;
}

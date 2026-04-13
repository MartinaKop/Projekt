#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Projekt z ...!\n");
    FILE * vstup = fopen("data.txt", "r");
    FILE * vystup = fopen("zaloha.txt", "w");
    if (vstup == NULL || vystup == NULL)
    {
        printf("Jeden ze souboru nebyl otevren.\n");
        return -1;
    }
    fclose(vstup);
    fclose (vystup);
    return 0;
}

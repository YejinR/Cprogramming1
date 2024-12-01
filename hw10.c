#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct City {
    char name[50];
    char country[50];
    int population;
};

int main() {
    struct City cities[3];

    for (int i = 0; i < 3; i++) {
        printf("Name> ");
        scanf(" %[^\n]", cities[i].name);

        printf("Country> ");
        scanf(" %[^\n]", cities[i].country);

        printf("Population > ");
        scanf("%d", &cities[i].population);
        getchar();
    }

    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}

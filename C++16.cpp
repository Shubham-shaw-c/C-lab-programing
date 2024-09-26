//A train is moving from Sealdah to Barasat. One of the passengers wants to go Madhayamgram station. After a certain time the train stop at a station. So write a c program to check whether that passenger has reacheded Madayamgram or not.
#include <stdio.h>
#include <string.h>
int checkStation(char station[]) {
    if (strcmp(station, "Madhyamgram") == 0) {
        return 1;
    }
    return 0;
}
int main() {
    char station[100];
    char *stations[] = {"Sealdah", "Dumdum", "Madhyamgram", "Barasat"};
    int n = sizeof(stations) / sizeof(stations[0]);
    for (int i = 0; i < n; i++) {
        strcpy(station, stations[i]);
        printf("Train stopped at: %s\n", station);
        if (checkStation(station)) {
            printf("You have reached Madhyamgram station.\n");
            break;
        }
    }
}
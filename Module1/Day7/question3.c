/*3. Data Viewer:
Write an application to view the log stored in data.csv
Example, say you have the following data in data.csv

------------------------------------

EntryNo,sensorNo,Temperature,Humidity,Light,

1,S1,36.5,100,50,10:30:50
2,S3,30,100,50,10:30:55
3,S2,-6.6,100,10,10:31:00
------------------------------------

a. Write a function to extract each line in the .csv file and store it in an array of structures. 
b. Also implement functions to display the contents of the array of structures.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ENTRIES 100
struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
};
void extractLogData(FILE *file, struct LogEntry *logEntries, int *numEntries) {
    char line[100];
    char *token;
    *numEntries = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        if (strstr(line, "EntryNo") != NULL)
            continue;
        token = strtok(line, ",");
        logEntries[*numEntries].entryNo = atoi(token);
        token = strtok(NULL, ",");
        strcpy(logEntries[*numEntries].sensorNo, token);
        token = strtok(NULL, ",");
        logEntries[*numEntries].temperature = atof(token);
        token = strtok(NULL, ",");
        logEntries[*numEntries].humidity = atoi(token);
        token = strtok(NULL, ",");
        logEntries[*numEntries].light = atoi(token);
        token = strtok(NULL, ",");
        strcpy(logEntries[*numEntries].timestamp, token);
        (*numEntries)++;
        if (*numEntries == MAX_ENTRIES)
            break;
    }
}
void displayLogData(const struct LogEntry *logEntries, int numEntries) {
    printf("Log Entries:\n");
    printf("--------------------------------------------------\n");
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].timestamp);
    }
}
int main() {
    FILE *file;
    char fileName[] = "data.csv";
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Unable to open the file '%s'.\n", fileName);
        return 1;
    }
    extractLogData(file, logEntries, &numEntries);
    fclose(file);
    displayLogData(logEntries, numEntries);
    return 0;
}

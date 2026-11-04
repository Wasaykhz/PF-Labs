/*
Name: Abdul Wasy Khanzada
Course: Programming Fundamentals - Lab
Instructor: Ms. Ramsha Jatt
Class: BSAI-1A
Dated: 2026-11-03
*/


#include <stdio.h>

void printSensorData(void *data, char type)
{
    if (type == 'f')
    {
        printf("Temperature: %.1f C\n", *(float *)data);
    }
    else if (type == 'i')
    {
        int motion = *(int *)data;
        if (motion == 1)
            printf("Motion Detected\n");
        else if (motion == 0)
            printf("No Motion\n");
        else
            printf("Invalid motion value\n");
    }
    else if (type == 'c')
    {
        char door = *(char *)data;
        if (door == 'O')
            printf("Door Open\n");
        else if (door == 'C')
            printf("Door Closed\n");
        else
            printf("Invalid door status\n");
    }
    else
    {
        printf("Unknown sensor type\n");
    }
}

int main()
{
    float temperature = 27.5;
    int motion = 1;
    char doorLock = 'C';

    printf("----- Smart Home Sensor Readings -----\n");
    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&doorLock, 'c');

    return 0;
}

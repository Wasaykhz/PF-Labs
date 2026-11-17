#include <stdio.h>
#include <string.h>

#define TOLL_RATE 50   // PKR per vehicle

// call it with "REPORT" to print the totals without counting a vehicle
void processVehicle(char vehicleType[]) {
    static int vehicles = 0;
    static int collected = 0;

    if (strcmp(vehicleType, "REPORT") == 0) {
        printf("\n--- Toll Plaza Report ---\n");
        printf("Total vehicles: %d\n", vehicles);
        printf("Total collection: %d PKR\n", collected);
        return;
    }

    vehicles++;
    collected += TOLL_RATE;
    printf("%s passed. Vehicles so far: %d, collected so far: %d PKR\n",
           vehicleType, vehicles, collected);
}

int main() {
    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Bus");
    processVehicle("Motorcycle");
    processVehicle("Car");

    processVehicle("REPORT");
    return 0;
}

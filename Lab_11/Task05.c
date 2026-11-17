#include <stdio.h>

struct HospitalRecord {
    int recordId;
    char ward[20];
    int daysAdmitted;

    struct PatientInfo {
        int patientId;
        char name[40];
        int age;
    } patient;
};

int main() {
    struct HospitalRecord rec = {5001, "Emergency", 3, {77, "Hamza Ali", 45}};
    struct HospitalRecord *ptr = &rec;

    printf("Record ID: %d\n", ptr->recordId);
    printf("Ward: %s\n", ptr->ward);
    printf("Days admitted: %d\n", ptr->daysAdmitted);
    printf("Patient ID: %d\n", ptr->patient.patientId);
    printf("Patient name: %s\n", ptr->patient.name);
    printf("Patient age: %d\n", ptr->patient.age);

    return 0;
}

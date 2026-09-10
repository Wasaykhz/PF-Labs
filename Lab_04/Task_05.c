#include <stdio.h>

int main() {
    int role, accountStatus, securityLevel;

    printf("Enter user role: \n1. Admin \n2. Researcher \n3. Student \nEnter: ");
    scanf("%d", &role);

    printf("\nEnter account status: \n0. Inactive \n1. Active \nEnter: ");
    scanf("%d", &accountStatus);

    printf("\nEnter security level: ");
    scanf("%d", &securityLevel);

    if (accountStatus == 0) {
        printf("Access Denied\n");
    } else {
        switch (role) {
            case 1:
                if (securityLevel >= 3)
                    printf("\nAccess Level: Admin\n");
                else
                    printf("\nAccess Denied\n");
                break;

            case 2:
                if (securityLevel >= 2)
                    printf("\nAccess Level: Researcher\n");
                else
                    printf("\nAccess Denied\n");
                break;

            case 3:
                if (securityLevel >= 1)
                    printf("\nAccess Level: Student\n");
                else
                    printf("\nAccess Denied\n");
                break;

            default:
                printf("\nAccess Denied\n");
        }
    }

    return 0;
}

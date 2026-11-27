#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
    struct Address {
        char city[20];
        char state[20];
        int zip;
    } addr;
};

int main(void) {
    struct Employee e1;

    if (scanf("%d %19s %f", &e1.id, e1.name, &e1.salary) != 3) {
        return 1;
    }
    if (scanf("%19s %19s %d", e1.addr.city, e1.addr.state, &e1.addr.zip) != 3) {
        return 1;
    }

    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    printf("City: %s\n", e1.addr.city);
    printf("State: %s\n", e1.addr.state);
    printf("Zip: %d\n", e1.addr.zip);

    return 0;
}
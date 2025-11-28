#include <stdio.h>

struct Address {
char name[50];
char street[50];
char city[50];
char state[50];
char district[50];
int zip;
};

int main() {

struct Address addr;

printf("Enter name: ");
fgets(addr.name, sizeof(addr.name), stdin);

printf("Enter street address: ");
fgets(addr.street, sizeof(addr.street), stdin);

printf("Enter city: ");
fgets(addr.city, sizeof(addr.city), stdin);

printf("Enter district: ");
fgets(addr.district, sizeof(addr.district), stdin);

printf("Enter state: ");
fgets(addr.state, sizeof(addr.state), stdin);

printf("Enter ZIP code: ");
scanf("%d", &addr.zip);

printf("\n--- Address Label ---\n");
printf("%s", addr.name);
printf("%s", addr.street);
printf("%s", addr.city);
printf("%s", addr.district);
printf("%s", addr.state);
printf("%d\n", addr.zip);  

return 0;
}


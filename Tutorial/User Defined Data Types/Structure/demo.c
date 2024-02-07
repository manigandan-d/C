#include <stdio.h>
#include <stdint.h>

struct CarModel {
    int carNumber;
    int carPrice;
    int carMaxSpeed;
    float carWeight;
};

int main() {
    struct CarModel carBMW, carFord;

    carBMW = (struct CarModel){2021, 15000, 220, 1330};
    carFord = (struct CarModel) {4031, 35000, 160, 1900.96};

    printf("%ld\n", sizeof(carBMW));
    printf("%ld\n", sizeof(carFord));

    return 0;
}
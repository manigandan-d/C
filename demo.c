#include <stdio.h>
#include <stdint.h>
#include <math.h>

int bt_mul, bt_div, prescl;

void bitTimConf(uint8_t fclock, int8_t fbit) {
    bt_mul = 20 / fbit - 1;

    prescl = (log((fclock * 1000) / ((bt_mul + 1) * fbit * 200)) * (1 / log(2))) - 1;

    bt_div = (fclock * 1000) / ((pow(2, prescl+1)) * (bt_mul + 1) * fbit);

    uint8_t temp = 0;

    temp = (uint8_t)(bt_div >> 8); // temp means BTCFG_1
    temp |= (uint8_t)(bt_mul << 1);
    temp |= (uint8_t)(prescl << 6);

    uint8_t temp2 = (uint8_t)bt_div; // temp2 means BTCFG_0
    printf("%d\n", temp2);
    printf("%d\n", temp);
}


int main() {
    bitTimConf(50, 20); // 50MHz (system clock) & 20KHz (lin data rate)

    printf("%d %d %d\n", bt_mul, prescl, bt_div);

    return 0;
}

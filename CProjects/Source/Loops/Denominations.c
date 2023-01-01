#include <stdio.h>

int main() {
    printf("AMOUNT: ");
    int amount = 0, ten = 0, fifty = 0, hundreds = 0;
    scanf("%d", &amount);
    

    while (amount > 10) {
        if (amount >= 100) {
            amount -= 100;
            hundreds++;
        } else if (amount >= 50) {
            amount -= 50;
            fifty++;
        } else if (amount >= 10) {
            amount -= 10;
            ten++;
        }
    }

    printf("Denominations:\n100: \t%d\n50: \t%d\n10: \t%d\nCH: \t%d\n", hundreds, fifty, ten, amount);
}

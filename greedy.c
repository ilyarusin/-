#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {

    float money = get_float("Сколько сдачи нужно выдать? ");
    while (money < 0) {
        money = get_float("Сколько сдачи нужно выдать? ");
    }

    int change = 100 * money;
    int counter = 0;

    for (int coin1 = 25; coin1 <= change; coin1++) {

        change = change - coin1;
        counter++;

        if (change == coin1) {
            change = change - coin1;
            counter++;
        }

        for (int coin2 = 10; coin2 <= change; coin2++) {

                change = change - coin2;
                counter++;

                if (change == coin2) {
                    change = change - coin2;
                    counter++;
                }

                for (int coin3 = 5; coin3 <= change; coin3++) {

                    change = change - coin3;
                    counter++;

                    if (change == coin3) {
                        change = change - coin3;
                        counter++;
                    }

                    for (int coin4 = 1; coin4 <= change; coin4++) {

                        change = change - coin4;
                        counter++;

                        if (change == coin4) {
                            change = change - coin4;
                            counter++;
                        }
                    }
                }
        }

    printf("Количество монет: %d\n", counter);

    }


}

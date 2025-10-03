#include <stdio.h>

int main() {
    float current_price,procent,plus_price;
    procent = 1.25;
    plus_price = 12.50;
    scanf("%f",&current_price);
    printf("При увеличении цены %.1f на 25 процентов стоимость будет = %.1f\n",current_price,current_price*procent);
    printf("При увеличении цены %.1f на 12.5 стоимость будет = %.1f ", current_price,current_price+plus_price);
}
#include <stdio.h>
#include <stdlib.h>

int obj, capacity;
int price[100];
int weight[100];
float ratio[100];
int obj_index[100];

int main() {
    printf("Enter the number of objects: ");
    scanf("%d", &obj);
    printf("Enter the capacity of knapsack: ");
    scanf("%d", &capacity);

    for (int i = 0; i < obj; i++) {
        printf("Enter the weight of object %d: ", i + 1);
        scanf("%d", &weight[i]);
        printf("Enter the price of object %d: ", i + 1);
        scanf("%d", &price[i]);
        ratio[i] = (float)price[i] / weight[i];
        obj_index[i] = i;
    }


    for (int i = 0; i < obj - 1; i++) {
        for (int j = 0; j < obj - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {

                float tempRatio = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = tempRatio;


                int tempobj_index = obj_index[j];
                obj_index[j] = obj_index[j + 1];
                obj_index[j + 1] = tempobj_index;
            }
        }
    }

    float total_value = 0.0;
    for (int i = 0; i < obj; i++) {
        if (capacity == 0)
            break;

        int num = obj_index[i];
        if (weight[num] <= capacity) {

            total_value += price[num];
            capacity -= weight[num];
        } else {

            total_value += price[num] * ((float)capacity / weight[num]);
            capacity = 0;
        }
    }

    printf("Maximum value in the knapsack = %f\n", total_value);
    return 0;
}

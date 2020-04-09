//
// Created by abhijit on 08-Apr-20.
//

#include <stdio.h>
#define PI 3.1416f

float calculate_circumference(float);

int main(void) {
    float radius = 2.57f;

    printf("radius is %f\n", radius);

    printf("circumference is: %f\n", calculate_circumference(radius));

    return 0;
}


float calculate_circumference(float radius) {
    float result = ((2 * PI) * radius);
    return result;
}
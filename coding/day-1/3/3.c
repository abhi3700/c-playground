//
// Created by abhijit on 10-Apr-20.
//

#include <stdio.h>

#define PI 3.1416f

float calculate_circle_area(float radius);

float square_me(float radius);

int main(void) {
    float radius = 2.57f;
    printf("Circle's area is: %f\n", calculate_circle_area(radius));
    return 0;
}

float calculate_circle_area(float radius) {
    float result = 0.0f;
    result = (PI * square_me(radius));
    return result;
}

float square_me(float radius) {
    float result = 0.0f;
    result = (radius * radius);
    return result;
}

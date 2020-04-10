//
// Created by abhijit on 10-Apr-20.
//

#include <stdio.h>

float calculate_rectangle_area(float length, float width);
float calculate_rectangle_perimeter(float length, float width);

int main(void) {
    float length = 3.5f;
    float width = 5.48f;

    printf("Area is %f\n", calculate_rectangle_area(length, width));
    printf("Perimeter is %f\n", calculate_rectangle_perimeter(length, width));

    return 0;
}


float calculate_rectangle_area(float length, float width) {
    float result = 0.0f;
    result = (length * width);
    return result;
}

float calculate_rectangle_perimeter(float length, float width) {
    float result = 0.0f;
    result = (2.0f * (length + width));
    return result;
}

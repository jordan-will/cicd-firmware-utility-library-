
#include <assert.h>
#include <math.h>
#include <stdio.h>

#include "utilities.h"

#define TOLERANCE 0.001f

void test_celsius_to_fahrenheit(void)
{
    assert(fabsf(celsius_to_fahrenheit(0.0f) - 32.0f) < TOLERANCE);
    assert(fabsf(celsius_to_fahrenheit(100.0f) - 212.0f) < TOLERANCE);

    printf("PASS: Celsius to Fahrenheit\n");
}

void test_fahrenheit_to_celsius(void)
{
    assert(fabsf(fahrenheit_to_celsius(32.0f) - 0.0f) < TOLERANCE);
    assert(fabsf(fahrenheit_to_celsius(212.0f) - 100.0f) < TOLERANCE);

    printf("PASS: Fahrenheit to Celsius\n");
}

void test_celsius_to_kelvin(void)
{
    assert(fabsf(celsius_to_kelvin(0.0f) - 273.15f) < TOLERANCE);
    assert(fabsf(celsius_to_kelvin(-273.15f) - 0.0f) < TOLERANCE);
    assert(celsius_to_kelvin(-300.0f) == -1.0f);

    printf("PASS: Celsius to Kelvin\n");
}

int main(void)
{
    test_celsius_to_fahrenheit();
    test_fahrenheit_to_celsius();
    test_celsius_to_kelvin();

    printf("\nAll tests passed successfully.\n");

    return 0;
}

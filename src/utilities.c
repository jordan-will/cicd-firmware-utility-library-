#include "utilities.h"

float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float fahrenheit_to_celsius(float fahrenheit)
{
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

float celsius_to_kelvin(float celsius)
{
    if (celsius < -273.15f)
    {
        return -1.0f;
    }

    float kelvin = celsius + 273.15f;

    return kelvin;
}

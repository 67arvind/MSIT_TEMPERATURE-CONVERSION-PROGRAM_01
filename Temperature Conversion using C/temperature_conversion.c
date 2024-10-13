#include <stdio.h>

// Function declarations for conversions
void celsiusToFahrenheitAndKelvin(float temp);
void fahrenheitToCelsiusAndKelvin(float temp);
void kelvinToCelsiusAndFahrenheit(float temp);

int main() {
    int choice;
    float temp;

    // Display menu for user input
    printf("Temperature Conversion Program\n");
    printf("1. Convert from Celsius\n");
    printf("2. Convert from Fahrenheit\n");
    printf("3. Convert from Kelvin\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Prompt user to enter the temperature value based on choice
    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            celsiusToFahrenheitAndKelvin(temp);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            fahrenheitToCelsiusAndKelvin(temp);
            break;
        case 3:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            kelvinToCelsiusAndFahrenheit(temp);
            break;
        default:
            printf("Invalid choice. Please restart the program and choose a valid option.\n");
    }

    return 0;
}

// Function to convert Celsius to Fahrenheit and Kelvin
void celsiusToFahrenheitAndKelvin(float temp) {
    float fahrenheit = (temp * 9/5) + 32;
    float kelvin = temp + 273.15;
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Temperature in Kelvin: %.2fK\n", kelvin);
}

// Function to convert Fahrenheit to Celsius and Kelvin
void fahrenheitToCelsiusAndKelvin(float temp) {
    float celsius = (temp - 32) * 5/9;
    float kelvin = (temp - 32) * 5/9 + 273.15;
    printf("Temperature in Celsius: %.2f°C\n", celsius);
    printf("Temperature in Kelvin: %.2fK\n", kelvin);
}

// Function to convert Kelvin to Celsius and Fahrenheit
void kelvinToCelsiusAndFahrenheit(float temp) {
    float celsius = temp - 273.15;
    float fahrenheit = (temp - 273.15) * 9/5 + 32;
    printf("Temperature in Celsius: %.2f°C\n", celsius);
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
}

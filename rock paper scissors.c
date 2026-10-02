#include <stdio.h>

int main() {
    
    
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;
    
    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf(" %c", &choice); 
    
    // Celsius conversion
    if (choice == 'C' || choice == 'c') {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } 
    // Fahrenheit conversion
    else if (choice == 'F' || choice == 'f') {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } 
   
    else {
        printf("Invalid choice! Please enter C or F.\n");
    }

    return 0;
}
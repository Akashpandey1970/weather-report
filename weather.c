#include <stdio.h>
#include <stdlib.h>

// Structure to store weather data
typedef struct {
    char location[50];
    float temperature;
    float humidity;
    char condition[20];
} Weather;

// Function to display weather data
void displayWeather(Weather weather) {
    printf("Location: %s\n", weather.location);
    printf("Temperature: %.2f°C\n", weather.temperature);
    printf("Humidity: %.2f%%\n", weather.humidity);
    printf("Condition: %s\n", weather.condition);
}

int main() {
    Weather weather;

    // Input weather data
    printf("Enter location: ");
    fgets(weather.location, 50, stdin);
    printf("Enter temperature (°C): ");
    scanf("%f", &weather.temperature);
    printf("Enter humidity (%): ");
    scanf("%f", &weather.humidity);
    printf("Enter weather condition: ");
    scanf("%s", weather.condition);

    // Display weather data
    printf("\nWeather Report:\n");
    displayWeather(weather);

    return 0;
}
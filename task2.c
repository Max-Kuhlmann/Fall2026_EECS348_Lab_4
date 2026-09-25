#include <stdio.h>

float fahrenheitToCelsius(float fTemp) {
	return (fTemp - 32) / (9/5);
}

float kelvinToCelsius(float kTemp) {
	return kTemp - 273.15;
}

float celsiusToFahrenheit(float cTemp) {
	return (cTemp * (9/5)) + 32;
}

float celsiusToKelvin(float cTemp) {
	return cTemp + 273.15;
}

int main() {
	float temp;
	char origScale;
	char newScale;
	printf("Enter the temperature value: ");
	scanf(" %f", &temp);
	printf("\nEnter the original scale (C, F, or K): ");
	scanf(" %c", &origScale);
	printf("\nEnter the scale to convert to (C, F, or K): ");
	scanf(" %c", &newScale);
	float tempInC;
	if(tempInC < -273.15) {
		printf("ERROR: TEMPERATURE IS LESS THAN ABSOLUTE ZERO");
		return 0;
	}
	if(origScale == 'F') {
		tempInC = fahrenheitToCelsius(temp);
	} else if(origScale == 'K') {
		tempInC = kelvinToCelsius(temp);
	} else {
		tempInC = temp;
	}
	if(newScale == 'C') {
		printf("Converted temperature: %f\n", tempInC);
	}else if(newScale == 'K') {
		printf("Converted temperature: %f\n", celsiusToKelvin(tempInC));
	} else {
		printf("Converted temperature: %f\n", celsiusToFahrenheit(tempInC));
	}
	if(tempInC < 10) {
		printf("Temperature category: Cold\nWeather advisory: Wear a jacket");
	}else if(tempInC < 25) {
		printf("Temperature category: Comfortable\nWeather advisory: Go on a walk");
	} else if(tempInC < 35) {
		printf("Temperature category: Hot\nWeather advisory: Drink lots of water");
	} else {
		printf("Temperature category: Extreme Heat\nWeather advisory: Stay indoors");
	}
	return 0;
}

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct Values
{
	
	float value;
	int unit;
	int type;
	float fahrenheitToCelcius; 
	float celciusToFahrenheit;
	float meterToKm;
	float kmToMeter;
	float lbsToKg;
	float kgToLbs;
	float usdToCad;
	float cadToUsd;
};


void flushKey() {
	while (getchar() != '\n');
}

struct Values getInput() {
	struct Values val;
	printf("Welcome to Unit Converter Software");
	printf("\n Please select one of the following options:");
	printf("\n 1-Length\n2-Temperature\n3-Weight\n4-Currency \n");
	scanf("%d", &val.unit);
	
	switch (val.unit)
	{
	case 1: 
		printf("\n Please select one of the following options:");
		printf("\n Enter 1 for meter [m] to kilometer [km] .");
		printf("\n Enter 2 for kilometer [km] to meter [m]. \n");
		scanf("%d", &val.type);
		if (val.type == 1) {
			printf("\n Please enter the Meter: \n");
			scanf("%f", &val.value);
			val.meterToKm = (val.value/ 1000);
			printf("\n KM: %.2lf", val.meterToKm);
			break;
		}
		else if (val.type == 2) {
			printf("\n Please enter the Kilometer: \n");
			scanf("%f", &val.value);
			val.kmToMeter = (val.value * 1000);
			printf("\n Meter: %.2lf", val.kmToMeter);
			break;
		}

	case 2:
		printf("\nWelcome to Temperature Converter! \n");
		printf("\nHere is a list of conversations to choose from:");
		printf("\nEnter 1 for Fahrenheit [°F] to Celsius [°C].");
		printf("\nEnter 2 for Celsius [°C] to Fahrenheit [°F]. \n");
		scanf("%d", &val.type);
		if (val.type == 1) {
			printf("\n Please enter the Fahrenheit degree: \n");
			scanf("%f", &val.value);
			val.fahrenheitToCelcius = ((val.value - 32) * (5.0 / 9.0));
			printf("\n Celsius [°C]: %.2lf", val.fahrenheitToCelcius);
			break;
		}
		else if (val.type == 2) {
			printf("\n Please enter the Celcius degree: \n");
			scanf("%f", &val.value);
			val.celciusToFahrenheit = ((9.0 / 5.0) * val.value + 32);
			printf("\n Fahrenheit [°F]: %.2lf", val.celciusToFahrenheit);
			break;
		}


	case 3:
		printf("\nPlease select one of the following options:");
		printf("\nEnter 1 for kilogram [kg] to pound [lbs]. ");
		printf("\nEnter 2 for pound [lbs] to kilogram [kg]. \n");
		scanf("%d", &val.type);
		if (val.type == 1) {
			printf("\nPlease enter the Kilogram: \n");
			scanf("%f", &val.value);
			val.kgToLbs = (val.value * 2.2046226218);
			printf("\n Pounds: %.2lf", val.kgToLbs);
			
			break;
		}
		else if (val.type == 2) {
			printf("\n Please enter the Pound: \n");
			scanf("%f", &val.value);
			val.lbsToKg = (val.value * 0.45359237);
			printf("\n Kilogram: %.2lf", val.lbsToKg);
			break;
		}

	case 4:
		printf("\nPlease select one of the following options:");
		printf("\nEnter 1 for USD [United States Dollar] to 1 CAD [Canadian Dollar]. ");
		printf("\nEnter 2 for 1 CAD [Canadian Dollar] to USD [United States Dollar]. \n");
		scanf("%d", &val.type);
		if (val.type == 1) {
			printf("\n Please enter the USD: \n");
			scanf("%f", &val.value);
			val.usdToCad = (val.value * 1.35815);
			printf("\n CAD: %.3lf", val.usdToCad);

			break;
		}
		else if (val.type == 2) {
			printf("\n Please enter the CAD: \n");
			scanf("%f", &val.value);
			val.cadToUsd = (val.value * 0.7362956964);
			printf("\n USD: %.3lf", val.cadToUsd);
			break;
		}
	default:
		printf("Invalid selection please try again.");
		break;
	}
}

int main() {
	struct Values val = getInput(); 
	return 0;

}
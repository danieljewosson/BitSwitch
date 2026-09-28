#include<iostream>
#include "MyFunctions.h"

int main()
{
	uint8_t system = 0b00000000;
	const Pin info[] = { { (1 << 0), "LED_PIN"},{(1 << 1), "WIFI_PIN"},{(1 << 2), "BLUETOOTH_PIN"} };
	SYSTEM(&system, info);
}
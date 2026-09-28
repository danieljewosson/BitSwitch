#include<iostream>
#include "MyFunctions.h"

#pragma region Switch
void SetPin(uint8_t* system, uint8_t pin, bool state)
{
	if (state)
		*system |= pin;
	else
		*system &= ~pin;
}
#pragma endregion

#pragma region Show All Parameters
void SystemParameters(const char* arr, uint8_t* system, uint8_t PIN)
{
	if (*system & PIN)
	{
		std::cout << arr << " is ON" << std::endl;
	}
	else
	{
		std::cout << arr << " is OFF" << std::endl;
	}
}
#pragma endregion

#pragma region Switch ON/OFF between pins
void TURNINGSYSTEM(uint8_t* system, uint8_t pin)
{
	int option2;
	do
	{
		std::cout << "Choose your option: " << std::endl;
		std::cout << "1 - ON: " << std::endl;
		std::cout << "2 - OFF: " << std::endl;
		std::cin >> option2;

		switch (option2)
		{

		case 1:
			if (*system & pin)
			{
				std::cout << "PIN is already ON" << std::endl;
			}
			else
			{
				SetPin(system, pin, true);
				std::cout << "DONE!" << std::endl;
			}
			break;

		case 2:
			if (*system & pin)
			{
				SetPin(system, pin, false);
				std::cout << "DONE!" << std::endl;
			}
			else
			{
				std::cout << "PIN is already OFF" << std::endl;
			}
			break;
		}
	} while (option2 != 1 && option2 != 2);
}
#pragma endregion


#pragma region Complete System
int SYSTEM(uint8_t* system, const Pin info[])
{
	int option;
	do
	{
		std::cout << "Choose your option:\n " << std::endl;
		std::cout << "LED_PIN: 1 " << std::endl;
		std::cout << "WIFI_PIN: 2 " << std::endl;
		std::cout << "BLUTOOTH_PIN: 3 " << std::endl;
		std::cout << "SYSTEM_PARAMETERS 4 " << std::endl;
		std::cout << "EXIT: 0 " << std::endl;

		std::cin >> option;

		switch (option)
		{
		case 0:
			std::cout << "Bye bye!" << std::endl;
			return 0;
		case 1:
			TURNINGSYSTEM(system, info[0].pin);
			break;
		case 2:
			TURNINGSYSTEM(system, info[1].pin);
			break;
		case 3:
			TURNINGSYSTEM(system, info[2].pin);
			break;
		case 4:
			for (size_t i = 0; i < 3; i++)
				SystemParameters(info[i].name, system, info[i].pin);
			std::cout << std::endl;
			break;
		}
	} while (option != 0);
}
#pragma endregion
#ifndef MyFunctions
#define MyFunctions

struct Pin
{
	uint8_t pin;
	const char* name;
};

void SetPin(uint8_t* system, uint8_t pin, bool state);
void SystemParameters(const char* arr, uint8_t* system, uint8_t PIN);
void TURNINGSYSTEM(uint8_t* system, uint8_t pin);
int SYSTEM(uint8_t* system, const Pin info[]);

#endif 
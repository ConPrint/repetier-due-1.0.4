// Define pins
#define ORIG_X_STEP_PIN 46
#define ORIG_X_DIR_PIN 48
//A8 = D62
#define ORIG_X_ENABLE_PIN 62

#define ORIG_X_MIN_PIN 34
#define ORIG_X_MAX_PIN 32

//A6 = D60
#define ORIG_Y_STEP_PIN 60
//A7 = D61
#define ORIG_Y_DIR_PIN 61
//A2 = D56
#define ORIG_Y_ENABLE_PIN 56

#define ORIG_Y_MIN_PIN 30
#define ORIG_Y_MAX_PIN 22

// A0 = D54 originally, now D37, because D54 probably was in double use
#define ORIG_Z_STEP_PIN 37
//A1 = D55
#define ORIG_Z_DIR_PIN 55
#define ORIG_Z_ENABLE_PIN 38

#define ORIG_Z_MIN_PIN 26
#define ORIG_Z_MAX_PIN 24


// Note that on the Due pin A0 on the board is channel 2 on the ARM chip
#define HEATER_0_PIN 14
#define TEMP_0_PIN 15

#define HEATER_1_PIN 16
#define TEMP_1_PIN 17

#define ORIG_E0_STEP_PIN 10
#define ORIG_E0_DIR_PIN 11
#define ORIG_E0_ENABLE_PIN 12

#define ORIG_E1_STEP_PIN -1
#define ORIG_E1_DIR_PIN -1
#define ORIG_E1_ENABLE_PIN -1

#define ORIG_E2_STEP_PIN -1
#define ORIG_E2_DIR_PIN -1
#define ORIG_E2_ENABLE_PIN -1

#define SDSUPPORT      false
#define SDPOWER -1
// 4,10,52 if using HW SPI.
#define SDSS 4
//#define SDSS		   -1
//#define ORIG_SDCARDDETECT   -1
#define SDCARDDETECTINVERTED false
#define LED_PIN -1
#define ORIG_FAN_PIN -1
#define ORIG_FAN2_PIN -1
#define ORIG_PS_ON_PIN -1
#define KILL_PIN -1
#define SUICIDE_PIN -1 // PIN that has to be turned on right after start, to keep power flowing.

// 20 or 70
#define SDA_PIN 20
// 21 or 71
#define SCL_PIN 21

#define E0_PINS ORIG_E0_STEP_PIN, ORIG_E0_DIR_PIN, ORIG_E0_ENABLE_PIN,
#define E1_PINS ORIG_E1_STEP_PIN, ORIG_E1_DIR_PIN, ORIG_E1_ENABLE_PIN,
#define E2_PINS ORIG_E2_STEP_PIN, ORIG_E2_DIR_PIN, ORIG_E2_ENABLE_PIN,

#define TWI_CLOCK_FREQ 400000
#define EEPROM_AVAILABLE 0
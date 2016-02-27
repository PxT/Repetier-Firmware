#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#define NUM_EXTRUDER 1
#define MIXING_EXTRUDER 0
#define MOTHERBOARD 301

#include "pins.h"

#define BLUETOOTH_SERIAL   0                      // Port number (1..3) - For RUMBA use 3
#define BLUETOOTH_BAUD     115200                 // communication speed

// ##########################################################################################
// ##                               Calibration                                            ##
// ##########################################################################################

#define DRIVE_SYSTEM DELTA
#if DRIVE_SYSTEM == DELTA

#define DELTA_DRIVE_TYPE 0
#if DELTA_DRIVE_TYPE == 0
    #define BELT_PITCH 2
    #define PULLEY_TEETH 20
    #define PULLEY_CIRCUMFERENCE (BELT_PITCH * PULLEY_TEETH)
#elif DELTA_DRIVE_TYPE == 1
    #define PULLEY_DIAMETER 10
    #define PULLEY_CIRCUMFERENCE (PULLEY_DIAMETER * 3.1415927)
#endif

#define STEPS_PER_ROTATION 200
#define MICRO_STEPS 16

#define AXIS_STEPS_PER_MM ((float)(MICRO_STEPS * STEPS_PER_ROTATION) / PULLEY_CIRCUMFERENCE)
#define XAXIS_STEPS_PER_MM AXIS_STEPS_PER_MM
#define YAXIS_STEPS_PER_MM AXIS_STEPS_PER_MM
#define ZAXIS_STEPS_PER_MM AXIS_STEPS_PER_MM
#else

#define XAXIS_STEPS_PER_MM 98.425196
#define YAXIS_STEPS_PER_MM 98.425196
#define ZAXIS_STEPS_PER_MM 2560

#endif

// ##########################################################################################
// ##                           Extruder configuration                                     ##
// ##########################################################################################

#define PDM_FOR_EXTRUDER 1
#define PDM_FOR_COOLER 1
#define DECOUPLING_TEST_MAX_HOLD_VARIANCE 20
#define DECOUPLING_TEST_MIN_TEMP_RISE 1
#define KILL_IF_SENSOR_DEFECT 0
#define EXTRUDER_FAN_COOL_TEMP 50
#define RETRACT_ON_PAUSE 2
#define PAUSE_START_COMMANDS ""
#define PAUSE_END_COMMANDS ""

#define MIN_EXTRUDER_TEMP 0
#define USE_ADVANCE 1
#define ENABLE_QUADRATIC_ADVANCE 0

// ##########################################################################################
// ##                           Extruder #1 configuration                                  ##
// ##########################################################################################

#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_Z_OFFSET 0

#define EXT0_STEPS_PER_MM 92.4

#define EXT0_TEMPSENSOR_TYPE 97  // 13 for PT100

#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN E0_STEP_PIN
#define EXT0_DIR_PIN E0_DIR_PIN

#define EXT0_INVERSE true
#define EXT0_ENABLE_PIN E0_ENABLE_PIN
#define EXT0_ENABLE_ON false

#define EXT0_MAX_FEEDRATE 100
#define EXT0_MAX_START_FEEDRATE 45
#define EXT0_MAX_ACCELERATION 6500

#define EXT0_HEAT_MANAGER 1
#define EXT0_WATCHPERIOD 3

#define EXT0_PID_INTEGRAL_DRIVE_MAX 205
#define EXT0_PID_INTEGRAL_DRIVE_MIN 60
#define EXT0_PID_PGAIN_OR_DEAD_TIME   31.36
#define EXT0_PID_I   2.18
#define EXT0_PID_D 112.90
#define EXT0_PID_MAX 255

#define EXT0_ADVANCE_K 0.0f
#define EXT0_ADVANCE_L 0.0f

#define EXT0_ADVANCE_BACKLASH_STEPS 0

#define EXT0_WAIT_RETRACT_TEMP 		150
#define EXT0_WAIT_RETRACT_UNITS 	0
#define EXT0_SELECT_COMMANDS "M117 Extruder 1"
#define EXT0_DESELECT_COMMANDS ""

#define EXT0_EXTRUDER_COOLER_PIN 7
#define EXT0_EXTRUDER_COOLER_SPEED 255

#define EXT0_DECOUPLE_TEST_PERIOD 18000
#define EXT0_JAM_PIN -1
#define EXT0_JAM_PULLUP false

// ##########################################################################################
// ##                           Extruder #2 configuration                                  ##
// ##########################################################################################

#define EXT1_X_OFFSET 0
#define EXT1_Y_OFFSET 0
#define EXT1_Z_OFFSET 0

#define EXT1_STEPS_PER_MM 96

#define EXT1_TEMPSENSOR_TYPE 1 // 13 for PT100

#define EXT1_TEMPSENSOR_PIN TEMP_1_PIN
#define EXT1_HEATER_PIN HEATER_1_PIN
#define EXT1_STEP_PIN E1_STEP_PIN
#define EXT1_DIR_PIN E1_DIR_PIN

#define EXT1_INVERSE false
#define EXT1_ENABLE_PIN E1_ENABLE_PIN
#define EXT1_ENABLE_ON false

#define EXT1_MAX_FEEDRATE 80
#define EXT1_MAX_START_FEEDRATE 0
#define EXT1_MAX_ACCELERATION 5000

#define EXT1_HEAT_MANAGER 0
#define EXT1_WATCHPERIOD 1

#define EXT1_PID_INTEGRAL_DRIVE_MAX 140
#define EXT1_PID_INTEGRAL_DRIVE_MIN 60
#define EXT1_PID_PGAIN_OR_DEAD_TIME   26.3
#define EXT1_PID_I   1.92
#define EXT1_PID_D 90.353
#define EXT1_PID_MAX 255

#define EXT1_ADVANCE_K 0.0f
#define EXT1_ADVANCE_L 0.0f

#define EXT1_ADVANCE_BACKLASH_STEPS 0

#define EXT1_WAIT_RETRACT_TEMP     150
#define EXT1_WAIT_RETRACT_UNITS   0
#define EXT1_SELECT_COMMANDS "M117 Extruder 1"
#define EXT1_DESELECT_COMMANDS ""

#define EXT1_EXTRUDER_COOLER_PIN 7
#define EXT1_EXTRUDER_COOLER_SPEED 255

#define EXT1_DECOUPLE_TEST_PERIOD 18000
#define EXT1_JAM_PIN -1
#define EXT1_JAM_PULLUP false

// ##########################################################################################
// ##                           Extruder #3 configuration                                  ##
// ##########################################################################################

#define EXT2_X_OFFSET 0
#define EXT2_Y_OFFSET 0
#define EXT2_Z_OFFSET 0

#define EXT2_STEPS_PER_MM 96

#define EXT2_TEMPSENSOR_TYPE 1 // 13 for PT100

#define EXT2_TEMPSENSOR_PIN TEMP_2_PIN
#define EXT2_HEATER_PIN HEATER_2_PIN
#define EXT2_STEP_PIN E2_STEP_PIN
#define EXT2_DIR_PIN E2_DIR_PIN

#define EXT2_INVERSE false
#define EXT2_ENABLE_PIN E2_ENABLE_PIN
#define EXT2_ENABLE_ON false

#define EXT2_MAX_FEEDRATE 80
#define EXT2_MAX_START_FEEDRATE 0
#define EXT2_MAX_ACCELERATION 5000

#define EXT2_HEAT_MANAGER 0
#define EXT2_WATCHPERIOD 1

#define EXT2_PID_INTEGRAL_DRIVE_MAX 140
#define EXT2_PID_INTEGRAL_DRIVE_MIN 60
#define EXT2_PID_PGAIN_OR_DEAD_TIME   26.3
#define EXT2_PID_I   1.92
#define EXT2_PID_D 90.353
#define EXT2_PID_MAX 255

#define EXT2_ADVANCE_K 0.0f
#define EXT2_ADVANCE_L 0.0f

#define EXT2_ADVANCE_BACKLASH_STEPS 0

#define EXT2_WAIT_RETRACT_TEMP     150
#define EXT2_WAIT_RETRACT_UNITS   0
#define EXT2_SELECT_COMMANDS "M117 Extruder 1"
#define EXT2_DESELECT_COMMANDS ""

#define EXT2_EXTRUDER_COOLER_PIN 7
#define EXT2_EXTRUDER_COOLER_SPEED 255

#define EXT2_DECOUPLE_TEST_PERIOD 18000
#define EXT2_JAM_PIN -1
#define EXT2_JAM_PULLUP false


// ##########################################################################################
// ##                           Retraction/Filament JAM                                    ##
// ##########################################################################################

#define RETRACT_DURING_HEATUP 1
#define FEATURE_RETRACTION 1

#define AUTORETRACT_ENABLED 0
#define RETRACTION_LENGTH 3
#define RETRACTION_LONG_LENGTH 5
#define RETRACTION_SPEED 25
#define RETRACTION_Z_LIFT 2
#define RETRACTION_UNDO_EXTRA_LENGTH 6
#define RETRACTION_UNDO_EXTRA_LONG_LENGTH 6
#define RETRACTION_UNDO_SPEED 20

#define FILAMENTCHANGE_X_POS 0
#define FILAMENTCHANGE_Y_POS 0
#define FILAMENTCHANGE_Z_ADD 2

#define FILAMENTCHANGE_REHOME 1

#define FILAMENTCHANGE_SHORTRETRACT 5
#define FILAMENTCHANGE_LONGRETRACT 5

#define JAM_METHOD 1
#define JAM_STEPS 220
#define JAM_SLOWDOWN_STEPS 380
#define JAM_SLOWDOWN_TO 70
#define JAM_ERROR_STEPS 430
#define JAM_MIN_STEPS 10
#define JAM_ACTION 1

// ##########################################################################################
// ##                                 PID CONFIGURATION                                    ##
// ##########################################################################################

#define PID_CONTROL_RANGE 20

#define EXTRUDE_MAXLENGTH 150

#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0

#define HEATER_PWM_SPEED 1 // How fast ist pwm signal 0 = 15.25Hz, 1 = 30.51Hz, 2 = 61.03Hz, 3 = 122.06Hz

#define NUM_TEMPS_USERTHERMISTOR0 28
#define USER_THERMISTORTABLE0  {\
  {1*4,864*8},{21*4,300*8},{25*4,290*8},{29*4,280*8},{33*4,270*8},{39*4,260*8},{46*4,250*8},{54*4,240*8},{64*4,230*8},{75*4,220*8},\
  {90*4,210*8},{107*4,200*8},{128*4,190*8},{154*4,180*8},{184*4,170*8},{221*4,160*8},{265*4,150*8},{316*4,140*8},{375*4,130*8},\
  {441*4,120*8},{513*4,110*8},{588*4,100*8},{734*4,80*8},{856*4,60*8},{938*4,40*8},{986*4,20*8},{1008*4,0*8},{1018*4,-20*8} }

#define NUM_TEMPS_USERTHERMISTOR1 0
#define USER_THERMISTORTABLE1  {}

#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2  {}

#define USE_GENERIC_THERMISTORTABLE_1
#define GENERIC_THERM1_T0 25
#define GENERIC_THERM1_R0 100000
#define GENERIC_THERM1_BETA 4450
#define GENERIC_THERM1_MIN_TEMP -20
#define GENERIC_THERM1_MAX_TEMP 300
#define GENERIC_THERM1_R1 0
#define GENERIC_THERM1_R2 4700

#define USE_GENERIC_THERMISTORTABLE_2
#define GENERIC_THERM2_T0 170
#define GENERIC_THERM2_R0 1042.7
#define GENERIC_THERM2_BETA 4036
#define GENERIC_THERM2_MIN_TEMP -20
#define GENERIC_THERM2_MAX_TEMP 300
#define GENERIC_THERM2_R1 0
#define GENERIC_THERM2_R2 4700

#define GENERIC_THERM3_T0 170
#define GENERIC_THERM3_R0 1042.7
#define GENERIC_THERM3_BETA 4036
#define GENERIC_THERM3_MIN_TEMP -20
#define GENERIC_THERM3_MAX_TEMP 300
#define GENERIC_THERM3_R1 0
#define GENERIC_THERM3_R2 4700

#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33

// ##########################################################################################
// ##                           HEATED BED CONFIG                                          ##
// ##########################################################################################

#define HAVE_HEATED_BED true

#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 5

#define HEATED_BED_SENSOR_TYPE 1

#define HEATED_BED_SENSOR_PIN TEMP_1_PIN
#define HEATED_BED_HEATER_PIN HEATER_1_PIN

#define HEATED_BED_SET_INTERVAL 5000

#define HEATED_BED_HEAT_MANAGER 1

#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 200

#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN_OR_DEAD_TIME   87.86
#define HEATED_BED_PID_IGAIN   3.01
#define HEATED_BED_PID_DGAIN 641.82

#define HEATED_BED_PID_MAX 255

#define HEATED_BED_DECOUPLE_TEST_PERIOD 300000


#define MAXTEMP 247
#define MIN_DEFECT_TEMPERATURE 5
#define MAX_DEFECT_TEMPERATURE 270


#define DEFAULT_PRINTER_MODE PRINTER_MODE_FFF

// ##########################################################################################
// ##                            Endstop configuration                                     ##
// ##########################################################################################

#define ENDSTOP_PULLUP_X_MIN true
#define ENDSTOP_PULLUP_Y_MIN true
#define ENDSTOP_PULLUP_Z_MIN true
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_PULLUP_Z_MAX true

#define ENDSTOP_X_MIN_INVERTING true
#define ENDSTOP_Y_MIN_INVERTING true
#define ENDSTOP_Z_MIN_INVERTING true
#define ENDSTOP_X_MAX_INVERTING false
#define ENDSTOP_Y_MAX_INVERTING false
#define ENDSTOP_Z_MAX_INVERTING false

#define MIN_HARDWARE_ENDSTOP_X false
#define MIN_HARDWARE_ENDSTOP_Y false
#define MIN_HARDWARE_ENDSTOP_Z false
#define MAX_HARDWARE_ENDSTOP_X true
#define MAX_HARDWARE_ENDSTOP_Y true
#define MAX_HARDWARE_ENDSTOP_Z true

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0

#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E false

#define INVERT_X_DIR true
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true

#define X_HOME_DIR 1
#define Y_HOME_DIR 1
#define Z_HOME_DIR 1

#define max_software_endstop_r true

#define min_software_endstop_x false
#define min_software_endstop_y false
#define min_software_endstop_z false

#define max_software_endstop_x true
#define max_software_endstop_y true
#define max_software_endstop_z true

#define ENDSTOP_X_BACK_MOVE 10
#define ENDSTOP_Y_BACK_MOVE 10
#define ENDSTOP_Z_BACK_MOVE 10

#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 4
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 4
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 4

#define ENDSTOP_X_BACK_ON_HOME 5
#define ENDSTOP_Y_BACK_ON_HOME 5
#define ENDSTOP_Z_BACK_ON_HOME 10

#define ALWAYS_CHECK_ENDSTOPS true

#define X_MAX_LENGTH 250
#define Y_MAX_LENGTH 250
#define Z_MAX_LENGTH 234.66

#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0


// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################

#define MICROSTEP_MODES {16,16,16,16,16} 

#if MOTHERBOARD==301
    #define MOTOR_CURRENT {175,175,175,160,160 } // Values 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)
    #define MOTOR_CURRENT_PERCENT {53,53,53,53,53}
#endif

#define DELTA_SEGMENTS_PER_SECOND_PRINT 225
#define DELTA_SEGMENTS_PER_SECOND_MOVE 80

#if DRIVE_SYSTEM==DELTA

#define DELTA_DIAGONAL_ROD 290.8 // mm

#define DELTA_ALPHA_A 210
#define DELTA_ALPHA_B 330
#define DELTA_ALPHA_C 90

#define DELTA_RADIUS_CORRECTION_A 0
#define DELTA_RADIUS_CORRECTION_B 0
#define DELTA_RADIUS_CORRECTION_C 0

#define DELTA_DIAGONAL_CORRECTION_A 0
#define DELTA_DIAGONAL_CORRECTION_B 0
#define DELTA_DIAGONAL_CORRECTION_C 0

#define DELTA_MAX_RADIUS 200

#define DELTA_FLOOR_SAFETY_MARGIN_MM 5

#define END_EFFECTOR_HORIZONTAL_OFFSET 30.22
#define CARRIAGE_HORIZONTAL_OFFSET 27.1
#define PRINTER_RADIUS 200

#define EXACT_DELTA_MOVES 1

#define DELTA_HOME_ON_POWER true

#define DELTA_X_ENDSTOP_OFFSET_STEPS 0
#define DELTA_Y_ENDSTOP_OFFSET_STEPS 0
#define DELTA_Z_ENDSTOP_OFFSET_STEPS 0

#endif


#if DRIVE_SYSTEM==TUGA

#define DELTA_DIAGONAL_ROD 300
#endif

#define DELTASEGMENTS_PER_PRINTLINE 22

#define STEPPER_INACTIVE_TIME 0
#define MAX_INACTIVE_TIME 0L

#define MAX_FEEDRATE_X 300
#define MAX_FEEDRATE_Y 300
#define MAX_FEEDRATE_Z 300

#define HOMING_FEEDRATE_X 120
#define HOMING_FEEDRATE_Y 120
#define HOMING_FEEDRATE_Z 120

#define HOMING_ORDER HOME_ORDER_ZXY

#define ZHOME_MIN_TEMPERATURE 0

#define ZHOME_HEAT_ALL 1 

#define ZHOME_HEAT_HEIGHT 20

#define ZHOME_X_POS IGNORE_COORDINATE
#define ZHOME_Y_POS IGNORE_COORDINATE

#define ENABLE_BACKLASH_COMPENSATION 0
#define Z_BACKLASH 0
#define X_BACKLASH 0
#define Y_BACKLASH 0

#define RAMP_ACCELERATION 1

#define STEPPER_HIGH_DELAY 0

#define DIRECTION_DELAY 0

#define STEP_DOUBLER_FREQUENCY 12000

#define ALLOW_QUADSTEPPING 1

#define DOUBLE_STEP_DELAY 0 // time in microseconds


#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1850
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1850
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 1850

#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 3000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 3000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 3000

#define INTERPOLATE_ACCELERATION_WITH_Z 0
#define ACCELERATION_FACTOR_TOP 100

#define MAX_JERK 35.0
#define MAX_ZJERK 35.0

#define PRINTLINE_CACHE_SIZE 16

#define MOVE_CACHE_LOW 10

#define LOW_TICKS_PER_MOVE 250000

// ##########################################################################################
// ##                           Communication configuration                                ##
// ##########################################################################################

#define BAUDRATE 250000

#define ENABLE_POWER_ON_STARTUP 1
#define POWER_INVERTING 0
#define KILL_METHOD 1
#define ACK_WITH_LINENUMBER 1
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE 1

#define EEPROM_MODE 2

#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   E1_STEP_PIN
#define X2_DIR_PIN    E1_DIR_PIN
#define X2_ENABLE_PIN E1_ENABLE_PIN

#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   E1_STEP_PIN
#define Y2_DIR_PIN    E1_DIR_PIN
#define Y2_ENABLE_PIN E1_ENABLE_PIN

#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   E1_STEP_PIN
#define Z2_DIR_PIN    E1_DIR_PIN
#define Z2_ENABLE_PIN E1_ENABLE_PIN

#define FEATURE_THREE_ZSTEPPER 0
#define Z3_STEP_PIN   E2_STEP_PIN
#define Z3_DIR_PIN    E2_DIR_PIN
#define Z3_ENABLE_PIN E2_ENABLE_PIN

#define FEATURE_DITTO_PRINTING 0

#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN 6
#define SERVO2_PIN 5
#define SERVO3_PIN 4
#define SERVO0_NEUTRAL_POS  -1
#define SERVO1_NEUTRAL_POS  -1
#define SERVO2_NEUTRAL_POS  -1
#define SERVO3_NEUTRAL_POS  -1

#define UI_SERVO_CONTROL 0

#define FAN_KICKSTART_TIME  200

#define FEATURE_WATCHDOG 1

#define Z_PROBE_Z_OFFSET 0 // offset to coating from real bed level
#define Z_PROBE_Z_OFFSET_MODE 0

#define FEATURE_Z_PROBE 1
#define Z_PROBE_PIN ORIG_Z_MIN_PIN
#define Z_PROBE_PULLUP 1
#define Z_PROBE_ON_HIGH 1
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET -70
#define Z_PROBE_BED_DISTANCE 5 // Higher than max bed level distance error in mm

#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 100
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 8 // Distance to safely switch off probe after it was activated
#define Z_PROBE_REPETITIONS 2 // Repetitions for probing at one point.
#define Z_PROBE_HEIGHT 36.58
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
/** Set 1 if you need a hot extruder for good probe results. Normally only required if nozzle is probe. */
#define Z_PROBE_REQUIRES_HEATING 0
/** Minimum extruder temperature for probing. If it is lower, it will be increased to that value. */
#define Z_PROBE_MIN_TEMPERATURE 150

/*
Define how we measure the bed rotation. 
All methods need at least 3 points to define the bed rotation correctly. The quality we get comes
from the selection of the right points and method.
BED_LEVELING_METHOD 0
This method measures at the 3 probe points and creates a plane through these points. If you have
a really planar bed this gives the optimum result. The 3 points must not be in one line and have
a long distance to increase numerical stability.
BED_LEVELING_METHOD 1
This measures a grid. Probe point 1 is the origin and points 2 and 3 span a grid. We measure
BED_LEVELING_GRID_SIZE points in each direction and compute a regression plane through all
points. This gives a good overall plane if you have small bumps measuring inaccuracies.
BED_LEVELING_METHOD 2
Bending correcting 4 point measurement. This is for cantilevered beds that have the rotation axis
not at the side but inside the bed. Here we can assume no bending on the axis and a symmetric
bending to both sides of the axis. So probe points 2 and 3 build the symmetric axis and
point 1 is mirrored to 1m across the axis. Using the symmetry we then remove the bending
from 1 and use that as plane.
*/
#define BED_LEVELING_METHOD 0
/* How to correct rotation.
0 = software side
1 = motorized modification of 2 from 3 fixture points.
*/
#define BED_CORRECTION_METHOD 0
// Grid size for grid based plane measurement
#define BED_LEVELING_GRID_SIZE 4
/* Autoleveling allows it to z-probe 3 points to compute the inclination and compensates the error for the print.
   This feature requires a working z-probe and you should have z-endstop at the top not at the bottom.
   The same 3 points are used for the G29 command.
*/

#define FEATURE_AUTOLEVEL 1
#define Z_PROBE_X1 100
#define Z_PROBE_Y1 0
#define Z_PROBE_X2 -100
#define Z_PROBE_Y2 -50
#define Z_PROBE_X3 0
#define Z_PROBE_Y3 50

/* Bending correction adds a value to a measured z-probe value. This may be
  required when the z probe needs some force to trigger and this bends the
  bed down. Currently the correction values A/B/C correspond to z probe
  positions 1/2/3. In later versions a bending correction algorithm might be
  introduced to give it other meanings.*/
#define BENDING_CORRECTION_A 0
#define BENDING_CORRECTION_B 0
#define BENDING_CORRECTION_C 0

#define DISTORTION_CORRECTION         1
#define DISTORTION_CORRECTION_POINTS  5
#define DISTORTION_CORRECTION_R       80

#define DISTORTION_PERMANENT          1
#define DISTORTION_UPDATE_FREQUENCY   15
#define DISTORTION_START_DEGRADE 0.5
#define DISTORTION_END_HEIGHT 1.5
#define DISTORTION_EXTRAPOLATE_CORNERS 1

#define FEATURE_AXISCOMP 0
#define AXISCOMP_TANXY 0
#define AXISCOMP_TANYZ 0
#define AXISCOMP_TANXZ 0

#define FEATURE_SOFTWARE_LEVELING 1


#define FEATURE_BABYSTEPPING 0
#define BABYSTEP_MULTIPLICATOR 1

#define CASE_LIGHTS_PIN -1
#define CASE_LIGHT_DEFAULT_ON 1

#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
#define SDSUPPORT false
#undef SDCARDDETECT
#define SDCARDDETECT 81
#define SDCARDDETECTINVERTED false
#endif

#define SD_EXTENDED_DIR 1
#define SD_RUN_ON_STOP ""
#define SD_STOP_HEATER_AND_MOTORS_ON_STOP 1

#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1

#define FEATURE_CHECKSUM_FORCED 0

#define FEATURE_FAN_CONTROL 1
#define FEATURE_FAN2_CONTROL 1

#define FAN_THERMO_PIN -1
#define FAN_THERMO_MIN_PWM 128
#define FAN_THERMO_MAX_PWM 255
#define FAN_THERMO_MIN_TEMP 45
#define FAN_THERMO_MAX_TEMP 60
#define FAN_THERMO_THERMISTOR_PIN -1
#define FAN_THERMO_THERMISTOR_TYPE 1

#define FEATURE_JSON 0

// ##########################################################################################
// ##                                 UI configuration                                     ##
// ##########################################################################################

#define FEATURE_CONTROLLER 13

#define LANGUAGE_EN_ACTIVE 1 // English
#define LANGUAGE_DE_ACTIVE 0 // German
#define LANGUAGE_NL_ACTIVE 0 // Dutch
#define LANGUAGE_PT_ACTIVE 0 // Brazilian portuguese
#define LANGUAGE_IT_ACTIVE 0 // Italian
#define LANGUAGE_ES_ACTIVE 0 // Spanish
#define LANGUAGE_SE_ACTIVE 0 // Swedish
#define LANGUAGE_FR_ACTIVE 0 // French
#define LANGUAGE_CZ_ACTIVE 0 // Czech
#define LANGUAGE_PL_ACTIVE 0 // Polish
#define LANGUAGE_TR_ACTIVE 0 // Turkish
#define LANGUAGE_FI_ACTIVE 0 // Finnish

#define UI_PRINTER_NAME "Rostock Maxv2"
#define UI_PRINTER_COMPANY "SeeMeCNC"

#define UI_ANIMATION 0
#define UI_PAGES_DURATION 4000
#define UI_START_SCREEN_DELAY 1000
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 60000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 1
#define UI_REVERSE_ENCODER 0
#define UI_SPEEDDEPENDENT_POSITIONING 1
#define UI_DYNAMIC_ENCODER_SPEED 1
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 1
#define BEEPER_SHORT_SEQUENCE 1,1
#define BEEPER_LONG_SEQUENCE 32,4

// ###############################################################################
// ##                         Values for menu settings                          ##
// ###############################################################################

#define UI_BED_COATING 0

#define UI_SET_PRESET_HEATED_BED_TEMP_PLA 60
#define UI_SET_PRESET_EXTRUDER_TEMP_PLA   180
#define UI_SET_PRESET_HEATED_BED_TEMP_ABS 110
#define UI_SET_PRESET_EXTRUDER_TEMP_ABS   240

#define UI_SET_MIN_HEATED_BED_TEMP  55
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   160
#define UI_SET_MAX_EXTRUDER_TEMP   299
#define UI_SET_EXTRUDER_FEEDRATE 20 // mm/sec
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3 // mm


// ###############################################################################
// ##                           Advanced Motor Shit                             ##
// ###############################################################################

#define NUM_MOTOR_DRIVERS 0
// #define MOTOR_DRIVER_x StepperDriver<int stepPin, int dirPin, int enablePin,bool invertDir, bool invertEnable>(float stepsPerMM,float speed)
#define MOTOR_DRIVER_1(var) StepperDriver<E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, false, false> var(100.0f,5.0f)

#endif

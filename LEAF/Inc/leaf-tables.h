/*==============================================================================

    leaf-tables.h
    Created: 4 Dec 2016 9:42:41pm
    Author:  Michael R Mulshine

==============================================================================*/

#ifndef LEAF_TABLES_H_INCLUDED
#define LEAF_TABLES_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif
    
//==============================================================================

#include "leaf-math.h"

//==============================================================================


#define SINE_TABLE_SIZE 2048
#define SAW_TABLE_SIZE 2048
#define SQR_TABLE_SIZE 2048
#define TRI_TABLE_SIZE 2048
#define EXP_DECAY_TABLE_SIZE 65536
#define ATTACK_DECAY_INC_TABLE_SIZE 65536
#define TANH1_TABLE_SIZE 65536
#define DECAY_COEFF_TABLE_SIZE 4096
#define MTOF1_TABLE_SIZE 4096
#define FILTERTAN_TABLE_SIZE 4096
    
#define SHAPER1_TABLE_SIZE 65536
extern const float __leaf_table_shaper1[SHAPER1_TABLE_SIZE];
    
#define COEFFS_SIZE 32
extern const float* __leaf_tableref_firCoeffs[COEFFS_SIZE];
extern const float __leaf_tablesize_firNumTaps[COEFFS_SIZE];
extern const float __leaf_table_fir2XLow[32];
extern const float __leaf_table_fir4XLow[64];
extern const float __leaf_table_fir8XLow[64];
extern const float __leaf_table_fir16XLow[128];
extern const float __leaf_table_fir32XLow[256];
extern const float __leaf_table_fir64XLow[256];
extern const float __leaf_table_fir2XHigh[128];
extern const float __leaf_table_fir4XHigh[256];
extern const float __leaf_table_fir8XHigh[256];
extern const float __leaf_table_fir16XHigh[512];
extern const float __leaf_table_fir32XHigh[512];
extern const float __leaf_table_fir64XHigh[1024];

typedef enum TableName
{
    T20 = 0,
    T40,
    T80,
    T160,
    T320,
    T640,
    T1280,
    T2560,
    T5120,
    T10240,
    T20480,
    TableNameNil
} TableName;

// mtof lookup table based on input range [0.0,1.0) in 4096 increments - midi frequency values scaled between m25 and m134 (from the Snyderphonics DrumBox code)

extern const float __leaf_table_exp_decay[EXP_DECAY_TABLE_SIZE];
extern const float __leaf_table_attack_decay_inc[ATTACK_DECAY_INC_TABLE_SIZE];

extern const float __leaf_table_filtertan[FILTERTAN_TABLE_SIZE];

extern const float __leaf_table_mtof1[MTOF1_TABLE_SIZE];
extern const float __leaf_table_decayCoeffTable[DECAY_COEFF_TABLE_SIZE];

extern const float __leaf_table_tanh1[TANH1_TABLE_SIZE];

//==============================================================================

/* Sine wave table ripped from http://aquaticus.info/pwm-sine-wave. */
extern const float __leaf_table_sinewave[SINE_TABLE_SIZE];

extern const float __leaf_table_sawtooth[11][SAW_TABLE_SIZE];

extern const float __leaf_table_triangle[11][TRI_TABLE_SIZE];

extern const float __leaf_table_squarewave[11][SQR_TABLE_SIZE];

//==============================================================================
    
#ifdef __cplusplus
}
#endif

#endif  // LEAF_TABLES_H_INCLUDED

//==============================================================================

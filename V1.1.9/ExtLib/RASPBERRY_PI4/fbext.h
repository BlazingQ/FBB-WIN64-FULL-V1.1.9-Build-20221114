/*
 * fb.h
 *
 *  Created on: 27/03/2014
 *      Author: wildai
 */

#ifndef FBEXT_H_
#define FBEXT_H_
typedef unsigned char uint8_t;

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <sstream>
// #include <pthread>

#include "Belt.h"
#include "mirobot.h"
#include "wiringPi.h"
#include "detect.h"
#include "cJSON.h"
#include "tcppi.h"
#include "json.hpp"
// #include "json_fwd.hpp"

//IEC 61131-3 Functions
#define BitsCount( val ) ( sizeof( val ) * CHAR_BIT )
#define Shift( val, steps ) ( steps % BitsCount( val ) )
#define ROL( val, steps ) ( ( val << Shift( val, steps ) ) | ( val >> ( BitsCount( val ) - Shift( val, steps ) ) ) )
#define ROR( val, steps ) ( ( val >> Shift( val, steps ) ) | ( val << ( BitsCount( val ) - Shift( val, steps ) ) ) )
std::string INT_TO_WSTRING(short int data);
short int WSTRING_TO_INT(std::string data);
std::string DINT_TO_WSTRING(int data);
int WSTRING_TO_DINT(std::string data);
std::string LINT_TO_WSTRING(long long data);
long long WSTRING_TO_LINT(std::string data);
std::string UINT_TO_WSTRING(unsigned short int data);
unsigned short int WSTRING_TO_UINT(std::string data);
std::string UDINT_TO_WSTRING(unsigned int data);
unsigned int WSTRING_TO_UDINT(std::string data);
std::string ULINT_TO_WSTRING(unsigned long long data);
unsigned long long WSTRING_TO_ULINT(std::string data);
std::string SINT_TO_WSTRING(char* data);
void WSTRING_TO_SINT(std::string data, char* output);
std::string REAL_TO_WSTRING(float data);
float WSTRING_TO_REAL(std::string data);
float INT_TO_REAL(short int data);
short int REAL_TO_INT(float data);
float DINT_TO_REAL(int data);
int REAL_TO_DINT(float data);
float LINT_TO_REAL(long long data);
long long REAL_TO_LINT(float data);
std::string LEFT(std::string IN, int L);
std::string RIGHT(std::string IN, int L);
std::string MID(std::string IN, int P, int L);
int LEN(std::string IN);
std::string CONCAT(std::string IN1, std::string IN2);
std::string INSERT(std::string IN1, std::string IN2, int P);
std::string DELETE(std::string IN, int P, int L);
std::string REPLACE(std::string IN1, std::string IN2, int P, int L);
int FIND(std::string IN1, std::string IN2);

#endif /* FBEXT_H_ */

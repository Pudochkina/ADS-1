// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>


bool checkPrime(uint64_t value) {
int count = 0;
for (int i = 2; i <= 10000000; i++) {
if (value % i == 0) {
count++;
}
}
if (count == 1) {
return true;
} else {
return false;
}
}

uint64_t nPrime(uint64_t n) {
int result2 = 0;
int count = 0;
int porNum = 0;
for (int value = 2; value <= 10000000; value++) {
int provNum = sqrt(value);
for (int i = provNum; i > 1; i--) {
if (value % i != 0) {
count++;
}
}
if (count == provNum - 1) {
porNum++;
}
count = 0;
if (n == porNum) {
result2 = value;
break;
}
}
return result2;
}

uint64_t nextPrime(uint64_t value) {
int ishNumber = 0;
int result3 = 0;
int count = 0;
int porNum = 0;
for (int value3 = 2; value3 <= 1000000; value3++) {
int provNum = sqrt(value3);
for (int i = provNum; i > 1; i--) {
if (value3 % i != 0) {
count++;
}
}
if (count == provNum - 1) {
porNum++;
}
count = 0;
if (value3 == value) {
ishNumber = porNum;
}
if ((value3 > value) && (porNum == ishNumber + 1)) {
result3 = value3;
break;
}
}
return result3;
}

uint64_t sumPrime(uint64_t hbound) {
int count = 0;
int porNum = 0;
int16_t sum = 0;
for (int16_t value = 2; value < hbound; value++) {
int provNum = sqrt(value);
for (int i = provNum; i > 1; i--) {
if (value % i != 0) {
count++;
}
}
if (count == provNum - 1) {
porNum++;
sum += value;
}
count = 0;
}
return sum;
}

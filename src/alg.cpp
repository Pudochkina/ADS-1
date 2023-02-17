// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
int count = 0;
for (int i = 2; i <= 100000; i++) {
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
int value = 11;
int count = 0;
switch (n) {
case (1):
value = 2;
return value;
break;
case (2):
value = 3;
return value;
break;
case (3):
value = 5;
return value;
break;
case (4):
value = 7;
return value;
break;
}
if (n > 4) {
for (int i = 11; i <= 100000; i++) {
if ((value % i == 0) && (value % 2 == 1)
    && (value % 5 != 0) && (value % 3 != 0) && (value % 7 != 0)) {
count++;
if (count == n) {
return value;
}
}
value++;
}
}
}

uint64_t nextPrime(uint64_t value) {
int count3 = 0;
switch (value) {
case (2):
value = 3;
return value;
break;
case (3):
value = 5;
return value;
break;
case (5):
value = 7;
return value;
break;
case (7):
value = 11;
return value;
break;
}
if (value >= 11) {
for (int i = value; i <= 100000; i++) {
if ((value % i == 0) && (value % 2 == 1) 
    && (value % 5 != 0) && (value % 3 != 0) && (value % 7 != 0))
{
count3++;
if (count3 == 2){
return value;
}
}
value++;
}
}
}

uint64_t sumPrime(uint64_t hbound) {
int result = 0;
int value3 = 11;
if (hbound <= 11 && hbound >= 7) {
result = 17;
return result;
}
else if (hbound >= 5 && hbound <= 7) {
result = 10;
return result;
}
else if (hbound >= 3 && hbound <= 5) {
result = 5;
return result;
}
else if (hbound <= 3) {
result = 2;
return result;
}

if (hbound > 11){
result = 17;
for (int i = value3; i < hbound; i++) {
if ((value3 % i == 0) && (value3 % 2 == 1)
    && (value3 % 5 != 0) && (value3 % 3 != 0) && (value3 % 7 != 0)) {
result += value3;
}
value3++;
}
return result;
}
}

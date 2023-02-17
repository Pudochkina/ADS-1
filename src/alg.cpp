// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


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
int value2 = 11;
int count2 = 0;
int result2 = 0;
switch (n) {
case (1):
result2 = 2;
break;
case (2):
result2 = 3;
break;
case (3):
result2 = 5;
break;
case (4):
result2 = 7;
break;
}
if (n > 4) {
for (int i = 11; i <= 10000000; i++) {
if ((value2 % i == 0) && (value2 % 2 == 1)
&& (value2 % 5 != 0) && (value2 % 3 != 0) && (value2 % 7 != 0)) {
count2++;
if (count2 == n) {
result2 = value2;
}
}
value2++;
}
}
return result2;
}

uint64_t nextPrime(uint64_t value) {
int count3 = 0;
int result3 = 0;
switch (value) {
case (2):
result3 = 3;
break;
case (3):
result3 = 5;
break;
case (5):
result3 = 7;
break;
case (7):
result3 = 11;
break;
}
if (value >= 11) {
for (int i = value; i <= 10000000; i++) {
if ((value % i == 0) && (value % 2 == 1)
&& (value % 5 != 0) && (value % 3 != 0) && (value % 7 != 0)) {
count3++;
if (count3 == 2) {
result3 = value;
}
}
value++;
}
}
return result3;
}

uint64_t sumPrime(uint64_t hbound) {
int sum = 0;
int value4 = 11;
if (hbound <= 11 && hbound >= 7) {
sum = 17;
} else if (hbound >= 5 && hbound <= 7) {
sum = 10;
} else if (hbound >= 3 && hbound <= 5) {
sum = 5;
} else if (hbound <= 3)  {
sum = 2;
}
if (hbound > 11) {
sum = 17;
for (int i = value4; i < hbound; i++) {
if ((value4 % i == 0) && (value4 % 2 == 1)
&& (value4 % 5 != 0) && (value4 % 3 != 0) && (value4 % 7 != 0)) {
sum += value4;
}
value4++;
}
}
return sum;
}

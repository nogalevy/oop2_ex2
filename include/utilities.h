#pragma once 
#include <iostream>

const int X_TIMES = 60;

enum Faculty { COMPUTER_SCIENCE = 1, MEDICINE, LITERATURE};

const std::string LINE = '+' + std::string(X_TIMES, '-') + '+' + '\n';

bool inRange(int, int, int);
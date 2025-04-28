#pragma once   

#include <iostream>
#include <fstream>
#include <string>
#include "ship.h"
using namespace std;

void WriteToFile(string givenString);
ship WriteShipToFile(string givenShipName, int givenFuel, shipType shipType);
void ReadFromFile();

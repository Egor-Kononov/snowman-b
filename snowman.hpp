#pragma once 
#include <string>
#include <iostream>
#include <array>
using namespace std;


const int column = 4;
const int min_num = 11111111;
const int max_num = 44444444;
const int choice = 1;
const int dev = 10;
const int number_of_cases = 8;
const array<string,column> hat = {" _===_\n","  ___\n .....\n","   _\n  /_\\\n","  ___\n (_*_)\n"};
const array<string,column> nose = {",",".","_"," "};
const array<string,column> left_eye = {"(.","(o","(O","(-"};
const array<string,column> right_eye = {".)","o)","O)","-)"};
const array<string,column> left_arm = {"<","\\","/"," "};
const array<string,column> right_arm = {">\n","/\n","\\\n","\n"};
const array<string,column> torso = {"( : )","(] [)","(> <)","(   )"};
const array<string,column> base = {" ( : )\n"," (\" \")\n"," (___)\n"," (   )\n"};
const int hats = 1;
const int noses = 2;
const int left_eyes = 3;
const int right_eyes = 4;
const int left_arms = 5;
const int right_arms= 6;
const int torses = 7;
const int bases = 8;

namespace ariel{
std::string snowman(int input);
}

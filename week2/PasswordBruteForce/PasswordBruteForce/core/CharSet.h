#pragma once
#include <bits/stdc++.h>
using namespace std;

class CharSet {
public:
	static vector<char> Get_NumberSet() {
		vector<char> result;
		for (char c = '0'; c <= '9'; c++) result.push_back(c);
		return result;
	}

	static vector<char> Get_AlphaSet() {
		vector<char> result;
		for (char c = 'A'; c <= 'Z'; c++) result.push_back(c);
		for (char c = 'a'; c <= 'z'; c++) result.push_back(c);
		return result;
	}

	static vector<char> Get_SpecialSet() {
		vector<char> result;
		for (char c = '!'; c <= '/'; c++) result.push_back(c);
		for (char c = ':'; c <= '@'; c++) result.push_back(c);
		for (char c = '['; c <= '`'; c++) result.push_back(c);
		for (char c = '{'; c <= '~'; c++) result.push_back(c);
		return result;
	}
};
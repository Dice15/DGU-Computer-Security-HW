#pragma once
#include <bits/stdc++.h>
#include <random>
#include "./CharSet.h"
using namespace std;

class RandomStringGenerator {
private:
	mt19937 mRandomGenerator;

public:
	RandomStringGenerator() :mRandomGenerator(mt19937(random_device()())) { }

private:
	int RamdomInt(int lb, int ub) { return uniform_int_distribution<int>(lb, ub)(mRandomGenerator); }

public:
	string Get_RandString(int len_low, int len_up, bool useNum, bool useAlpha, bool useSpecial) {
		vector<char> chars;
		string text = "";
		int textlen = RamdomInt(len_low, len_up);
		
		if (useNum) for (auto& num : CharSet::Get_NumberSet()) chars.push_back(num);
		if (useAlpha) for (auto& alpha : CharSet::Get_AlphaSet()) chars.push_back(alpha);
		if (useSpecial) for (auto& spec : CharSet::Get_SpecialSet()) chars.push_back(spec);
		
		while (textlen--) text += chars[RamdomInt(0, (int)chars.size() - 1)];
		return text;
	}
};


#pragma once
#include <bits/stdc++.h>
#include "../core/CharSet.h"
using namespace std;

class BruteForce {
private:
	using lint = long long;
	const int MAXLEN = 8;

	string mPassword;
	vector<char> mNum;
	vector<char> mAlpha;
	vector<char> mSpecial;
	vector<char> mALL;
	vector<tuple<int, int, int, int, lint>> mStepHistory;

public:
	BruteForce(string password = "") {
		UpatePassword(password);
		for (auto& e : mNum = CharSet::Get_NumberSet()) mALL.push_back(e);
		for (auto& e : mAlpha = CharSet::Get_AlphaSet()) mALL.push_back(e);
		for (auto& e : mSpecial = CharSet::Get_SpecialSet()) mALL.push_back(e);
		mStepHistory.assign(4, tuple(0, 0, 0, 0, 0));
	}

	void UpatePassword(string password) { mPassword = password; }

private:
	bool CompareWithPassword(string& compstr) {
		int len = mPassword.size();
		for (int i = 0; i < len; i++)
			if (mPassword[i] != compstr[i]) return false;
		return true;
	}

	bool SubFunc(int idx, int idxUpper, string& compstr, vector<char>& charset) {
		if (idx < idxUpper) {
			for (auto& c : charset) {
				compstr[idx] = c;
				if (SubFunc(idx + 1, idxUpper, compstr, charset)) return true;
			}
		}
		else return CompareWithPassword(compstr);
		return false;
	}

	pair<int, lint> CheckFunc(int step, int idxUpper, vector<char>& charset) {
		string compstr(MAXLEN, ' ');
		int charsetLen = charset.size();
		bool isFin = true;
		auto& [his0, his1, his2, his3, cnt] = mStepHistory[step];

		while (his0 < charsetLen) {
			compstr[0] = charset[his0];
			while (his1 < charsetLen) {
				compstr[1] = charset[his1];
				while (his2 < charsetLen) {
					compstr[2] = charset[his2];
					while (his3 < charsetLen) {
						isFin = false;
						compstr[3] = charset[his3++];
						cnt += (lint)pow((lint)charsetLen, (lint)idxUpper - 4LL);
						return { SubFunc(4, idxUpper, compstr, charset), cnt };
					}
					his2++; his3 = 0;
				}
				his1++; his2 = his3 = 0;
			}
			his0++; his1 = his2 = his3 = 0;
		}
		return { isFin ? -1 : false, cnt };
	}

public:
	tuple<int, lint, lint> Check_OnlyNumber(int len) {
		auto [res, cnt] = CheckFunc(0, len, mNum);
		return { res, cnt, (lint)pow((lint)mNum.size(), (lint)len) };
	}

	tuple<int, lint, lint> Check_OnlySpecial(int len) {
		auto [res, cnt] = CheckFunc(1, len, mSpecial);
		return { res, cnt, (lint)pow((lint)mSpecial.size(), (lint)len) };
	}

	tuple<int, lint, lint> Check_OnlyAlpha(int len) {
		auto [res, cnt] = CheckFunc(2, len, mAlpha);
		return { res, cnt, (lint)pow((lint)mAlpha.size(), (lint)len) };
	}

	tuple<int, lint, lint> Check_ALL(int len) {
		auto [res, cnt] = CheckFunc(3, len, mALL);
		return { res, cnt, (lint)pow((lint)mALL.size(), (lint)len) };
	}
};
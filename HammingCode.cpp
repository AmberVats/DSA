#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int calcRedundantBits(int m) {
    for (int i = 0; ; ++i) {
        if (pow(2, i) >= m + i + 1) {
            return i;
        }
    }
}

string posRedundantBits(string data, int r) {
    int j = 0;
    int k = 1;
    int m = data.length();
    string res = "";
    for (int i = 1; i <= m + r; ++i) {
        if (i == pow(2, j)) {
            res += '0';
            ++j;
        } else {
            res += data[data.length() - k];
            ++k;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

string calcParityBits(string arr, int r) {
    int n = arr.length();
    for (int i = 0; i < r; ++i) {
        int val = 0;
        for (int j = 1; j <= n; ++j) {
            if (j & (1 << i)) {
                val ^= (arr[n - j] - '0');
            }
        }
        arr[n - (1 << i)] = val + '0';
    }
    return arr;
}

int detectError(string arr, int nr) {
    int n = arr.length();
    int res = 0;
    for (int i = 0; i < nr; ++i) {
        int val = 0;
        for (int j = 1; j <= n; ++j) {
            if (j & (1 << i)) {
                val ^= (arr[n - j] - '0');
            }
        }
        res += val * pow(10, i);
    }
    return stoi(to_string(res), nullptr, 2);
}

int main() {
    string data;
    cout << "Enter data bits: ";
    cin >> data;

    int m = data.length();
    int r = calcRedundantBits(m);
    string arr = posRedundantBits(data, r);
    arr = calcParityBits(arr, r);
    cout << "Data transferred is " << arr << endl;

    string errorData;
    cout << "Enter error data bits: ";
    cin >> errorData;

    int correction = detectError(errorData, r);
    if (correction == 0) {
        cout << "There is no error in the received message." << endl;
    } else {
        cout << "The position of error is " << errorData.length() - correction + 1 << " from the left." << endl;
    }
    return 0;
}
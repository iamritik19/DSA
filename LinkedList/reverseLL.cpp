#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Function to check if a given substring or its reverse is present in another string
bool isPresent(string& sub, string& longStr) {
  return longStr.find(sub) != string::npos || longStr.find(string(sub.rbegin(), sub.rend())) != string::npos;
}

// Function to count occurrences of a substring in a string
int countOccurrences(string& sub, string& str) {
  int count = 0;
  size_t pos = 0;
  while ((pos = str.find(sub, pos)) != string::npos) {
    count++;
    pos += sub.length();
  }
  return count;
}

// Function to find the best substring based on prioritization
string findBestSubstring(string& s1, string& s2, int start) {
  string bestSubstring;
  int maxCount = 0;

  for (int i = start; i < s1.length(); ++i) {
    string candidate = s1.substr(start, i - start + 1);
    int count = countOccurrences(candidate, s2);

    if (count > maxCount || (count == maxCount && candidate > bestSubstring)) {
      maxCount = count;
      bestSubstring = candidate;
    }
  }

  return bestSubstring;
}

// Function to divide the first string into the fewest possible substrings
vector<string> divideString(string& s1, string& s2) {
  vector<string> substrings;
  int currentPos = 0;

  while (currentPos < s1.length()) {
    string bestSub = findBestSubstring(s1, s2, currentPos);

    if (bestSub.empty()) {
      break; // No valid division possible
    }

    substrings.push_back(bestSub);
    currentPos += bestSub.length();
  }

  return substrings;
}

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  vector<string> substrings = divideString(s1, s2);

  if (substrings.size() != string(s1).length()) {
    cout << "Impossible" << endl;
  } else {
    for (const string& sub : substrings) {
      cout << sub << "|";
    }
    cout << endl; // Remove trailing "|"
  }

  return 0;
}


#include <iostream>
using namespace std;

void generateSubstrings(string input, string output, int index) {
    if (index == input.size()) {
        cout << '"' << output << '"' << endl;
        return;
    }

    // Exclude current character
    generateSubstrings(input, output, index + 1);

    // Include current character
    generateSubstrings(input, output + input[index], index + 1);
}

int main() {
    string s = "abc";
    generateSubstrings(s, "", 0);
    return 0;
}

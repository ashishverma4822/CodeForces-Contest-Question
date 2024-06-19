#include <iostream>
#include <string>
using namespace std;

int min_pieces_to_sort_binary_string(int n, string binary_string) {
    int count_pieces = 0;
    char last_char = '2'; // initializing last_char to an arbitrary value
    
    // Iterate through the string and count the transitions from '0' to '1'
    for (int i = 0; i < n; ++i) {
        if (binary_string[i] != last_char) {
            count_pieces++;
            last_char = binary_string[i];
        }
    }
    
    // Subtract 1 if the last character is '0', since it will not be part of a piece
    if (binary_string[n - 1] == '0') {
        count_pieces--;
    }
    
    return count_pieces;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        string binary_string;
        cin >> binary_string;
        cout << min_pieces_to_sort_binary_string(binary_string.length(), binary_string) << endl;
    }

    return 0;
}

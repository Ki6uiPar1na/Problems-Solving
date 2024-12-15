#include <iostream>
#include <cstring> // For strlen
using namespace std;

int main() {
    char array[] = 
    char array[n + 1]; // +1 for the null terminator
    array[0] = 'e';
    array[1] = 'l';
    array[2] = 'H';
    array[3] = 'o';
    array[4] = ' ';
    array[5] = 'm';
    array[6] = 'P';
    array[7] = 'r';
    array[8] = 'o';
    array[9] = 'g';
    array[10] = 'r';
    array[11] = 'a';
    array[12] = 'm';
    array[13] = 'e';
    array[14] = 'r';
    array[15] = '\0'; // Null terminator

    // Step 3: Reconstruct the original message and print it using a loop
    cout << "Reconstructed Message: ";
    for (int i = 0; i < n; i++) {
        if (array[i] == 'H' || array[i] == 'e' || array[i] == 'l' || array[i] == 'o' || 
            array[i] == ' ' || array[i] == 'P' || array[i] == 'r' || array[i] == 'g' || 
            array[i] == 'a' || array[i] == 'm') {
            cout << array[i];
        }
    }

    cout << endl;
    return 0;
}

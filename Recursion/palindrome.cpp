#include <iostream>
using namespace std;
bool palindrome(int i,int n, string word){
    if(i>=n/2){
        return true;
    }
    if(word[i]!=word[n-i]){
        return false;
    }
    palindrome(i+1,n,word);

}
int main() {
    string word = "radar"; // Example input
    int n = word.length() - 1; // Last index of the string

    if (palindrome(0, n, word)) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }

    return 0;
}
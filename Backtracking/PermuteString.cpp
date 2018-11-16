#include <iostream>
#include <string>

using namespace std;

void permuteHelper(string s, string chosen) {
    if (s.empty()) {
        cout<<chosen<<endl;
    } else {
        for (int i = 0; i < s.length(); i++) {
            // Choose
            char c = s[i];
            chosen += c;
            s.erase(i, 1);
            
            // Explore
            permuteHelper(s, chosen);
            
            // Unchoose
            s.insert(i, 1, c);
            chosen.erase(chosen.length() - 1, 1);
        }
    }
}

void permute(string s) {
    permuteHelper(s, "");
}

int main(int argc, const char * argv[]) {
    permute("OSCAR");
}

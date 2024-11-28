class Solution {
public:
    bool isPalindrome(string s) {
        
        string bakareshojakor;
        for(char c : s) {
            if (isalnum(c)) {
                bakareshojakor += tolower(c);
            }
        }
        
        if(bakareshojakor.empty()) return true; 
        
        string compare = bakareshojakor;
        reverse(compare.begin(), compare.end());
        
        if(compare == bakareshojakor) return true; 
        else return false;
        
    }
};

/*
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s; 
    getline(cin, s); 
    string bakareshojakor;
        
  
    for(char c : s) {
        if (isalnum(c)) {
            bakareshojakor += tolower(c);
        }
    }
  
    string compare = bakareshojakor;
    reverse(compare.begin(), compare.end());
        
    if (compare == bakareshojakor) 
        cout << "true" << endl;
    else 
        cout << "false" << endl;
    
    return 0;
}
*/
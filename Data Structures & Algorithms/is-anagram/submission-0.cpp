class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length(),m = t.length();
        unordered_map<int,int>S,T;
        for(int i = 0;i<n;i++){
            S[s[i]]++;
        }
        for(int j=0;j<m;j++){
            T[t[j]]++;
        }
       return S == T;
        
    }
};

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int n = s.size();

//         for(int i = 0; i < n; i++) {
//             int co = 0;

//             for(int j = 0; j < n; j++) {
//                 if(s[i] == s[j]) {
//                     co++;
//                 }
//             }

//             if(co == 1) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        int freq[26] = {0};

        for(int i = 0; i < n; i++){
            freq[s[i] - 'a']++;
        }

        for(int i = 0; i < n; i++){
            if(freq[s[i] - 'a'] == 1){
                return i;
            }
        }

        return -1;
    }
};
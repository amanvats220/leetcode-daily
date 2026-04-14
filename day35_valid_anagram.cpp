class Solution {
    public:
        bool isAnagram(string str1, string str2) {
    
            int freq[256] = {0};
    
            // Length same rhni chaihiye dhyaan rkhnaa
            if (str1.length() != str2.length())
                return false;
    
            // ek str se usk word plus krte jaao or dusre se minus krte jaao at last if dono str ke liye freq array zero hoga to hi anagram hoga

            for (int i = 0; i < str1.length(); i++) {
                freq[str1[i]]++;
                freq[str2[i]]--;
            }
    
            // Verify all counts are zero
            
            for (int i = 0; i < 256; i++) {
                if (freq[i] != 0)
                    return false;
            }
    
            return true;
        }
    };
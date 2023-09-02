class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int end=0;
        set<char>Set;
        int maxLength=0;
        
        while(start < s.size()){
            auto it = Set.find(s[start]); // checking is the character already added or not
            if(it==Set.end()) // this condition meaning that is the set is empty
            {
                if(start - end + 1 > maxLength) // checking length is  less than subset size
                    maxLength = start - end + 1; // if length is less then subset size then we put it in length
                Set.insert(s[start]); // adding character in set
                start++; // increamenting start ;
            }else{
                Set.erase(s[end]); // if 'if' condition will not work then else will work that means set has already added character
                end++; // and duplicate value wil be remove and end++ will be increament at all
            }
        }

        return maxLength;
    }
};

class Solution {
    public boolean isPalindrome(String s) {
        int p1 = 0, p2 = s.length() - 1;

        //converting upper to lower 
        s = s.toLowerCase();

        while(p1 < p2){
            char char1 = s.charAt(p1);
            char char2 = s.charAt(p2);

            if(!(char1 >= 'a' && char1 <= 'z' || char1 >= '0' && char1 <= '9')){
                p1++;
                continue;
            }
            if(!(char2 >= 'a' && char2 <= 'z' || char2 >= '0' && char2 <= '9')){
                p2--;
                continue;
            }

            if(char1 != char2)
                return false;
            p1++;
            p2--;
        }

        return true;
    }
}

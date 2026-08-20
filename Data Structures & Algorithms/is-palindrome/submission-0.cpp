class Solution {
public:
    bool isPalindrome(string s) {

        string temp = "";

        for(char ch : s)
        {
            if(isalnum(ch))
            {
                temp += tolower(ch);
            }
        }

        int i = 0;
        int j = temp.size() - 1;

        while(i < j)
        {
            if(temp[i] != temp[j])
            {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
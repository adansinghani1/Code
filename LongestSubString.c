class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    int characters = 0;
    int result = 0;
    while(index2 < s.size()) {
        index2 = index1;
    while (1) {
    for(index3 = index1; index3 < index2; index3++)
    {
    if(s[index3]==s[index2])
    {
        characters = 1;
    break;
    }
    }
    if(characters==1)
    {
        characters=0;
    break;
    }
    if(index2>=s.size())
    break;
    index2++;
    }
    int temp = index2-index1;
    result = temp > result ? temp : result;
    index1 = index3 + 1;
    }
    return result;
  }
};
        

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLen = 0;

    int lastIndex[256];
    for(int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int left = 0;

    for(int right = 0; right < n; right++){
        if (lastIndex[(unsigned char)s[right]] >= left) {
            left = lastIndex[(unsigned)s[right]] + 1;
        }
        lastIndex[(unsigned char)s[right]] = right;

        int len = right - left + 1;
        if (len > maxLen) {
            maxLen = len;
        }
    }
    return maxLen;
}
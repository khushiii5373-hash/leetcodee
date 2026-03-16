class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max = 0;

        for(int i = 0; i < s.length(); i++){
            String sub = "";

            for (int j = i; j < s.length(); j++){
                char c = s.charAt(j);

                if (sub.contains(c + "")){
                    break;
                }
                sub = sub +c;
                max = Math.max(max, sub.length());
            }
        }
        return max;
    }
}
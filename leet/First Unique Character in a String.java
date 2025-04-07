class Solution {
    public int firstUniqChar(String s) {
        int[] que = new int[26];
        int n = s.length();

        for (int i = 0; i < n; i++) {            
            int index = s.charAt(i) - 'a';
            que[index]++;
        }
        for (int i = 0; i < n; i++) {
            int index = s.charAt(i) - 'a';
            if (que[index] == 1) {
                return i;
            }
                
        }
        return -1;
    }
}

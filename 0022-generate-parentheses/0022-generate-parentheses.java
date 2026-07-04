class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        solve(result, "", 0, 0, n);
        return result;
    }

    public void solve(List<String> result, String curr, int open, int close, int n) {
        if (curr.length() == 2 * n) {
            result.add(curr);
            return;
        }

        if (open < n) {
            solve(result, curr + "(", open + 1, close, n);
        }

        if (close < open) {
            solve(result, curr + ")", open, close + 1, n);
        }
    }
}
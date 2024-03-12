import java.util.*;
class Solution {
    public int maxProfit(int[] prices) {
        int minP = prices[0];
        int maxPr = 0;
        int len = prices.length;
        for(int i=0 ; i<len ; i++)
        {
            minP = Math.min(minP , prices[i]);
            maxPr = Math.max(maxPr , prices[i]-minP);
        }
        return maxPr;
    }
}

// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String input[] = read.readLine().trim().split(" ");
            int n = Integer.parseInt(input[0]);
            int m = Integer.parseInt(input[1]);
            
            String S1 = read.readLine().trim();
            String S2 = read.readLine().trim();

            Solution ob = new Solution();
            System.out.println(ob.longestCommonSubstr(S1, S2, n, m));
        }
    }
}// } Driver Code Ends




class Solution{
    
    public void LCSubstring(String s1, String s2, int l1, int l2, int[][] dp)
    {
        for(int i=1; i<=l1; i++)
        {
            for(int j=1; j<=l2; j++)
            {
                if(s1.charAt(i-1) == s2.charAt(j-1))    dp[i][j] = 1+dp[i-1][j-1];
                else                                    dp[i][j]=0;
            }
        }
    
    }
    
    int longestCommonSubstr(String S1, String S2, int n, int m){
        
        int[][] dp = new int[n+1][m+1];
        
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(i==0 || j==0) dp[i][j]=0;
            }
        }
        
        int ans = Integer.MIN_VALUE;
        LCSubstring(S1, S2, n, m, dp);
        
         for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                ans = Math.max(dp[i][j], ans);
            }
        }
        
    return ans;
    }
}


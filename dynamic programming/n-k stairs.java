/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Top down
//N-K ladder code
import java.util.*;
public class Main
{
    public static int countWays(int n,int k)
    {
        if(n==0)
        {
          //Standing on the ground
          return 1;
        }
        if(n<0)
        {
          return 0;
        }
        int ans = 0;
        for(int jump = 1;jump<=k;jump++)
        {
            // It can either jump to n-1, n-2,n-3.....n-k
            ans += countWays(n-jump,k);
        }
        return ans;
    }
    // Top down approach
    public static int countWaysTD(int n,int k,int[] dp)
    {
        if(n==0)
        {
          //Standing on the ground
          return 1;
        }
        if(n<0)
        {
          return 0;
        }
        if(dp[n]!=-1)
        return dp[n];
        int ans = 0;
        for(int jump = 1;jump<=k;jump++)
        {
            // It can either jump to n-1, n-2,n-3.....n-k
            ans += countWaysTD(n-jump,k,dp);
        }
        
        return dp[n] = ans;
    }
    // Bottom up approach
    public static int countWaysBU(int n,int k)
    {
        if(n==0)
        {
          //Standing on the ground
          return 1;
        }
        if(n<0)
        {
          return 0;
        }
        int dp[] =  new int[n+1];
        dp[0] = 1;
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=k;j++)
            {
                if(i-j>=0)
                dp[i] += dp[i-j]; 
            }
        }
        
        return dp[n];
    }
	public static void main(String[] args) {
		int n = 4;
		int k = 3;
		System.out.println(countWays(n,k));
		int dp[] = new int[10001];
		Arrays.fill(dp,-1);
		System.out.println(countWaysTD(n,k,dp));
		System.out.println(countWaysBU(n,k));
	}
}

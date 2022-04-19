/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Top down
//N-K ladder code
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
	public static void main(String[] args) {
		int n = 4;
		int k = 3;
		System.out.println(countWays(n,k));
	}
}

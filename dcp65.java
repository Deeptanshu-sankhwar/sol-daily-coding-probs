import java.util.Scanner;

class Dcp65	{
	public static void clockwise(int n, int m, int[][] ar )	{
		for (int j = m; j < ar[0].length-m; j++)	{
			System.out.print(ar[n][j] + " ");
		}
		for (int j = n+1; j < ar.length-n; j++)	{
			System.out.print(ar[j][ar[0].length-m-1] + " ");
		}
		for (int j = ar[0].length-m-2; j >= m; j--)	{
			System.out.print(ar[ar.length-n-1][j] + " ");
		}
		for (int j = ar.length-n-2; j > n; j--)	{
			System.out.print(ar[j][m] + " ");
		}
		if (ar.length > ar[0].length)	{
			if (m == ar.length - ar[0].length)
				return;
		}
		else{
			if (n == ar[0].length - ar.length)
				return;
		}
		clockwise(n+1,m+1,ar);
		return;

	}

	public static void main(String args[])	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int[][] ar = new int[n][m];
		for (int i = 0; i < n; i++)	{
			for (int j = 0; j < m; j++)	{
				ar[i][j] = sc.nextInt();
			}
		}
		clockwise(0,0,ar);
	}
}
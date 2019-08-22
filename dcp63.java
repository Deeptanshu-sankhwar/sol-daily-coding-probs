import java.util.Scanner;
import java.io.*;

class Dcp63	{
	public static void search(char[][] ar, int i, int j, String str, int counter, int status, String temp)	{
		try{
			if(temp.compareTo(str) == 0)	{
				System.out.print("true");
				return;
			}
			if (ar[i][j+1] == str.charAt(counter+1) && status == 0)	{
				temp = temp + str.charAt(counter+1);
				search(ar,i,j+1,str, counter+1, 1, temp);
			}
			else if (ar[i][j+1] == str.charAt(counter+1) && status == 1)	{
				temp = temp + str.charAt(counter+1);
				search(ar,i,j+1,str, counter+1, 1, temp);
			}

			else if(ar[i+1][j] == str.charAt(counter + 1) && status == 0)	{
				temp = temp + str.charAt(counter+1);
				search(ar, i+1, j, str, counter+1, 2, temp);
			}
			
			else if(ar[i+1][j] == str.charAt(counter + 1) && status == 2)	{
				temp = temp + str.charAt(counter+1);
				search(ar, i+1, j, str, counter+1, 2, temp);
			}
		}
		catch (Exception e)	{
			System.out.print("false");
		}
		return;
	}

	public static void main(String args[])	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		char[][] ar = new char[n][m];
		for (int i = 0; i < n; i++)	{
			for (int j = 0; j < m; j++)
				ar[i][j] = sc.next().charAt(0);
		}
		System.out.println("string to be tested - ");
		String str = sc.next();

		for (int i = 0; i < n; i++)	{
			for (int j = 0; j < m; j++)	{
				if (ar[i][j] == str.charAt(0))	{
					search(ar, i, j, str, 0, 0,String.valueOf(str.charAt(0)));
					break;
				}
			}
		}
	}
}
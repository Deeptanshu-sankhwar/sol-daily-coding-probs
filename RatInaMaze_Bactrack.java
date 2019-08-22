import java.util.Scanner;
//maze program to understand backtracking
class Ratinamaze	{

	public static Boolean positionPossible(int[][] maze, int x, int y)	{
		if(maze[x][y] == 1)
			return true;
		else
			return false;
	}

	public static void solveMaze(int[][] maze, int x, int y, int[][] sol)	{
		if (x + 1 < maze.length && positionPossible(maze,x+1,y))	{
			sol[x+1][y] = 1;
			solveMaze(maze,x+1,y,sol);
		}
		else if (y + 1 < maze.length && positionPossible(maze,x,y+1))	{
			sol[x][y+1] = 1;
			solveMaze(maze,x,y+1,sol);
		}
		else if (x == maze.length - 1 && y == maze.length - 1)
			return;
		else
			return;
		
	}

	public static void printSol(int[][] sol, int row)	{
		for (int i = 0; i < row; i++)	{
			for (int j = 0; j < row; j++)	{
				System.out.print(sol[i][j] + " ");
			}
			System.out.println("");
		} 
	}

	public static void main(String[] args)	{
		Scanner sc = new Scanner(System.in);
		int row = sc.nextInt();
		int[][] maze = new int[row][row];
		for ( int i = 0; i < row; i++)	{
			for ( int j = 0; j < row; j++)	{
				maze[i][j] = sc.nextInt();
			}
		}
		// System.out.print(maze.length);
		int[][] sol = new int[row][row];
		sol[0][0] = 1;
		Ratinamaze rat = new Ratinamaze();
		rat.solveMaze(maze,0,0,sol);
		System.out.println("///path matrix is as follows///");
		rat.printSol(sol, row);
	}
}
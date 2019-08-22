import java.util.*;
import java.util.LinkedList;
import java.util.Scanner;

public class dcp73	{
	public static void main(String args[])	{
        LinkedList<String> gList = new LinkedList<String>(); 
		Scanner sc =  new Scanner(System.in);
		String n = " ";
		int i = 0;
		while (n.compareTo("-1") != 0)	{
			n = sc.nextLine();
			gList.add(n);
		}
		gList.remove("-1");
		for (i = 0; i < gList.size()/2; i++)	{
			String temp = gList.get(i);
			gList.set(i,gList.get(gList.size()-i-1));
			gList.set(gList.size()-i-1,temp);
		}
		System.out.print(gList);
	}
}
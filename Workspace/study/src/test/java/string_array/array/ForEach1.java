package string_array.array;

import java.util.Scanner;

public class ForEach1 {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int[] a = new int[3];
		for (int i : a) {
			i = sc.nextInt();
		}
		
		for (int i : a) {
			System.out.println(i);
		}
	}
}

package string_array.array;

import java.util.Scanner;

public class Imgaram2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] scores = new int[5];
		int t=0;
		
		for (int i = 0; i < scores.length; i++) {
			scores[i]= sc.nextInt();
			t+=scores[i];
		}
		Double avg = t/5.0;
		System.out.println("평균 : "+avg);
	}
}

package string_array.array;

public class Imgaram3 {
	public static void main(String[] args) {
		int[] score = {70,88,90,100,55};
		int max = score[0];
		for (int i = 0; i < score.length; i++) {
			if (max < score[i]) {
				max=score[i];
			}
		}
		System.out.println(max);
	}
}

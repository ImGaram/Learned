package string_array.array.practice;

import java.util.Scanner;

public class Mission1 {
	public static void main(String[] args) {
		int[] score;
		int stuNum;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("학생 수? ");
		stuNum = sc.nextInt();
		score = new int[stuNum];
		
		System.out.println(stuNum+"명의 학생 성적을 입력하세요.");
		for (int i = 0; i < stuNum; i++) {
			score[i] = sc.nextInt();
			
		}
		
		System.out.println(stuNum+"명의 학생 성적은 다음과 같습니다.");
		for (int i = 0; i < stuNum; i++) {
			System.out.print(score[i]+" ");
		}
		System.out.println();
		
		for (int i = 0; i < stuNum; i++) {
			if (score[i]<=100 && score[i]>=90) {
				System.out.println((i+1)+"번 학생의 등급은 A입니다");
			}
			else if (score[i]<90 && score[i]>=80) {
				System.out.println((i+1)+"번 학생의 등급은 B입니다");
			}
			else if (score[i]<80 && score[i]>=70) {
				System.out.println((i+1)+"번 학생의 등급은 C입니다");
			}
			else if (score[i]<70 && score[i]>=60) {
				System.out.println((i+1)+"번 학생의 등급은 D입니다");
			}
			else {
				System.out.println((i+1)+"번 학생의 등급은 E입니다");
			}
		}
	}
}

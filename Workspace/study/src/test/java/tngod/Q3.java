package tngod;

import java.util.Scanner;

public class Q3 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
//		int num = sc.nextInt();
//		int c=0;
//		int total=1;
//		int n[] = new int[100];
//		
//		for (int i = 0;num >0; i++) {
//			n[i]= num%10; //5
//			num/=10;	//12345 -> 1234
////			System.out.println(n[i]);
//			c++;
//		}
//		
//		int g = 1;
//		for (int i = c; i > 0; i--) {
//			for(int j=c; j>0; j--) {
//				g = g* n[j];	// 5*4*3*2*1
//				System.out.println(g);
//				j--;
//			}
//			total+=g;
//		}
//		System.out.println(total);
		
//		System.out.println("A 부터 Z 까지의 값을 입력하세요.");
//		String n = sc.next();
//		char r = (char)(Math.random()*10+65);
//		while () {
//			
//		}
		
//		int[][] arr = new int[][] {
//			{2,3,4,5,6},
//			{4,6,8,10,12},
//			{6,9,12,15,18},
//			{8,12,16,20,24}
//		};
//		int total=0;
//		double avg = 0.0;
//		
//		for (int i = 0; i < arr.length; i++) {
//			for (int j = 1; j < arr[i].length-1; j++) {
//				total+=arr[i][j];
//			}
//		}
//		avg = total/12.0;
//		System.out.println("2-4열의 total="+total);
//		System.out.println("2-4열의 average="+avg);
		
		int n=-1, cnt = 0;
		int b=-1, total = 0;
		
		while (total<100) {
			total+=n;
			if(n<0) {
				n = n * b;
				n++;
				cnt++;
			}
			else {
				n*=b;
				n--;
				cnt++;
			}
		}
		System.out.println("num="+cnt);
		System.out.println("sum="+total);
		
		
	}
}

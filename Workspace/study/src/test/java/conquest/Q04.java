package conquest;

public class Q04 {
	public static void main(String[] args) {
		int t=0;
		int sum;
		int totalSum = 0;
		
		for (int i = 0; i < 10; i++) {
			//sum = i+(i+1);	//1+2
			t=t+i;
			sum=t+(i+1);
			totalSum+=sum;
		}
		System.out.print("totalSum = ");
		System.out.println(totalSum);
	}
}

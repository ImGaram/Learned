package conquest;

public class Q10 {
	public static void main(String[] args) {
		int sum = 0;	// total
		int s = 1;		// 부호 바꾸기
		int num = 0;
		
		while (sum<100) {
			num++;	// 1 -> 2
			if (num%2==0) {
				num = num * (-s);	// -2
				sum+=num;
				num = num * (-s);	// 2
			}
			else {
				sum+=num;
			}
		}
		System.out.print("num = ");
		System.out.println(num);
		System.out.print("sum = ");
		System.out.println(sum);
	}
}

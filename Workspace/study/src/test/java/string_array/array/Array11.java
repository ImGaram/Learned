package string_array.array;

public class Array11 {
	public static void main(String[] args) {
		
		if (args.length ==2) {
			//문자 -> 숫자
			int i = Integer.parseInt(args[1]);
			print(args[0],i);
		}
		else {
			System.out.println("에러!");
		}
	}
	
	public static void print(String s, int n) {
		for (int i = 0; i < n; i++) {
			System.out.println(s);
		}
	}
}

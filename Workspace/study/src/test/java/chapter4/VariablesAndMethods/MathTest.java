package chapter4.VariablesAndMethods;

class myMath{
	//클래스 - 멤버변수, 필드 / 메서드 <- 멤버
	float a, b;	// 인스턴스 변수 선언
	
	//인스턴스 메서드
	float add() {return a+b;}
	
	//클래스 메서드
	static float add(float x, float y) {return x+y;}
}

public class MathTest {
	public static void main(String[] args) {
		// 클래스 메서드 호출
		System.out.println(myMath.add(200f, 200f));
		
		// 인스턴스 메서드 호출
		myMath m = new myMath();
		m.a=200f;
		m.b=100f;
		System.out.println(m.add());
	}
}

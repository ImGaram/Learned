package study.inherience;

class Box{
	public Box() {
		System.out.println("box");
	}
}

class ColorBox extends Box{
	public ColorBox() {
		System.out.println("colorbox");
	}
}

public class Test1 {
	public static void main(String[] args) {
		
		ColorBox b = new ColorBox();
		System.out.println("BoxDemo");
////		Person p1 = new Person();
//		Human h1 = new Human("임가람", 17, 150000);
//		h1.Money();
////		p1.findMoney();	// 오류s
////		p1.jab();
//		h1.findMoney();
////		h1.job;	// 오류
	}
}

package interfacee;


// 다중 상속 가능
public interface Operation2 extends Parent, Parent2{
	int add(int a,int b);			// 추상 메서드
	int multiplicate(int a,int b);	// abstract 키워드가 생략됨
	int divide(int a, int b);
	int minus(int a, int b);
	default int operation(int a,int b) {
		return a+b;
	}
	static void print() {
		System.out.println("hello world!");
	}
}

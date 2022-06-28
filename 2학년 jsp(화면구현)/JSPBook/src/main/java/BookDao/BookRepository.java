package BookDao;

import java.util.*;
import BookDto.Book;

public class BookRepository {
    private ArrayList<Book> listOfBooks = new ArrayList<Book>();
    
    public BookRepository() {
        Book book1 = new Book("0" , "[Hello Coding] HTML5+CSS3", 15000);
        book1.setDescription("���峪 PPT������ ����� �ֳ���? �׷��� ���� �����ϴ�. "
                + "���ݹٷ� �������� ���ۿ� �����غ�����. ���� ���� ��ǻ�Ͱ� ��� �������ϴ�. �ڵ�� ���� ȭ���� �ٷ� ������ ����...");
        book1.setAuthor("Ȳ��ȣ");
        book1.setPublisher("�Ѻ��̵��");
        book1.setCategory("Hello Coding");
        book1.setUnitsInStock(1000);
        book1.setTotalPages(300);
        book1.setReleaseDate("3/2022");
        book1.setCondition("New");
        
        Book book2 = new Book("1" , "[IT�����] ���� ���� �ڹ� ���α׷���", 27000);
        book2.setDescription("��ü ������ �ٽɰ� �ڹ��� ������ ����� ����� �ٷ�鼭�� �ʺ��ڰ� ���� �н��� �� �ְ� �����߽��ϴ�. "
                + "�ð�ȭ ������ Ȱ���� ���� ����� �������� ���� �ٽ� �ڵ鸣 ���� ����� ����...");
        book2.setAuthor("������");
        book2.setPublisher("�Ѻ��̵��");
        book2.setCategory("Hello Coding");
        book2.setUnitsInStock(1000);
        book2.setTotalPages(300);
        book2.setReleaseDate("3/2022");
        book2.setCondition("E-book");
        
        Book book3 = new Book("2" , "[IT�����] ������4 �Թ�", 27000);
        book3.setDescription("�������� �ܼ��� ��� ����� ������ �ͺ��� ��Ű��ó�� ��� �����ϰ� �����ϴ����� �� �߿��մϴ�. "
                + "������ ������ �ٿ��ִ� �����δ� ���� ���߿��� �������� ����� Ȱ���� �� �����ϴ�...");
        book3.setAuthor("�ϼ����� ����ġ, ������ ��Ÿ��, ��Ű ������(����ö,���μ�)");        
        book3.setPublisher("�Ѻ��̵��");
        book3.setCategory("IT�����");
        book3.setUnitsInStock(1000);
        book3.setTotalPages(300);
        book3.setReleaseDate("3/2022");
        book3.setCondition("�߰�");
        
        
        listOfBooks.add(book1);
        listOfBooks.add(book2);
        listOfBooks.add(book3);

    }
    
    public ArrayList<Book> getAllBooks() {
        return listOfBooks;
    }
}
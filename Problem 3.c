import java.util.Scanner;

class Book {
    String title;
    String author;
    double price;
    String publisher;

    void displayBookInfo() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Price: " + price);
        System.out.println("Publisher: " + publisher);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Book book = new Book();

        System.out.print("Enter book title: ");
        book.title = scanner.nextLine();

        System.out.print("Enter author name: ");
        book.author = scanner.nextLine();

        System.out.print("Enter book price: ");
        book.price = scanner.nextDouble();
        scanner.nextLine(); // Consume newline left-over

        System.out.print("Enter publisher name: ");
        book.publisher = scanner.nextLine();

        book.displayBookInfo();
    }
}

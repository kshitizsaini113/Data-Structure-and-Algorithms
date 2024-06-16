import java.util.Scanner;

class Array {
    private int[] array;
    private int size;
    private int length;

    public Array() {
        this.size = 13;
        this.length = 0;
        this.array = new int[this.size];
    }

    public Array(int size) {
        this.size = size;
        this.length = 0;
        this.array = new int[this.size];
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Array arr1, arr2;

        System.out.print("Enter size: ");
        int size = scanner.nextInt();

        arr1 = new Array(size);
        arr2 = new Array();

        scanner.close();
    }
}

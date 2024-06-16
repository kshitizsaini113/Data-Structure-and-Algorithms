public class Main {
    public static void main(String[] args) {
        Array arr = new Array();
        arr.displayAllElements();
    }
}
class Array {
    private int[] array;
    private int size;
    private int length;

    public Array() {
        this.size = 13;
        this.length = 13;
        this.array = new int[this.size];
        for (int i = 0; i < this.size; i++) {
            this.array[i] = i;
        }
    }

    public Array(int size) {
        this.size = size;
        this.length = 0;
        this.array = new int[this.size];
    }

    public void displayAllElements() {
        if (length == 0) {
            System.out.println("No elements in array.");
        } else {
            System.out.print("Elements of array are: ");
            for (int i = 0; i < length; i++) {
                System.out.print(array[i] + " ");
            }
            System.out.println();
        }
    }
}

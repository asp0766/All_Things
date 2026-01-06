// Custom Queue : - 

public class first172{
    private int[] data;

    private static final int DEFAULT_SIZE = 10;

    int end = 0;

    public first172(){
        this(DEFAULT_SIZE);
    }

    public first172(int size) {
        this.data = new int[size];
    }

    public boolean isFull() {
        return end == data.length; // ptr is at last index
    }

    public boolean isEmpty() {
        return end == 0;
    }

    public boolean insert(int item) {
        if (isFull()) {
            return false;
        }
        data[end++] = item;
        return true;
    }

    public int remove() throws Exception {
        if (isEmpty()) {
            throw new Exception("Queue is empty");
        }

        int removed = data[0];

        // shift the elements to left
        for (int i = 1; i < end; i++) {
            data[i-1] = data[i];
        }
        end--;
        return removed;
    }

    public int front() throws Exception{
        if (isEmpty()) {
            throw new Exception("Queue is empty");
        }
        return data[0];
    }

    public void display() {
        for (int i = 0; i < end; i++) {
            System.out.print(data[i] + " <- ");
        }
        System.out.println("END");
    }

    public static void main(String[] args) {
        try {
            first172 queue = new first172(5);

            // Inserting elements
            queue.insert(10);
            queue.insert(20);
            queue.insert(30);
            queue.insert(40);
            queue.insert(50);

            // Display queue
            System.out.print("Queue: ");
            queue.display();

            // Attempt to insert when full
            if (!queue.insert(60)) {
                System.out.println("Queue is full, could not insert 60.");
            }

            // Removing elements
            System.out.println("Removed: " + queue.remove());
            System.out.println("Removed: " + queue.remove());

            // Display after removals
            System.out.print("Queue after removals: ");
            queue.display();

            // Peek the front element
            System.out.println("Front element: " + queue.front());

        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}

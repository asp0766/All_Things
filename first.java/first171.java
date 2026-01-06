// Circular Queue Operations : - 


// File name: CircularQueueDemo.java

// CircularQueue class
class CircularQueue {
    protected int[] data;
    private static final int DEFAULT_SIZE = 10;

    protected int end = 0;
    protected int front = 0;
    private int size = 0;

    public CircularQueue(){
        this(DEFAULT_SIZE);
    }

    public CircularQueue(int size) {
        this.data = new int[size];
    }

    public boolean isFull() {
        return size == data.length; // ptr is at last index
    }

    public boolean isEmpty() {
        return size == 0;
    }

    public boolean insert(int item) {
        if (isFull()) {
            return false;
        }
        data[end++] = item;
        end = end % data.length;
        size++;
        return true;
    }

    public int remove() throws Exception {
        if (isEmpty()) {
            throw new Exception("Queue is empty");
        }

        int removed = data[front++];
        front = front % data.length;
        size--;
        return removed;
    }

    public int front() throws Exception{
        if (isEmpty()) {
            throw new Exception("Queue is empty");
        }
        return data[front];
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("Empty");
            return;
        }
        int i = front;
        do {
            System.out.print(data[i] + " -> ");
            i++;
            i %= data.length;
        } while (i != end);
        System.out.println("END");
    }
}

// Main class with the main method
public class first171 {
    public static void main(String[] args) {
        try {
            CircularQueue queue = new CircularQueue(5);

            // Inserting elements
            queue.insert(10);
            queue.insert(20);
            queue.insert(30);
            queue.insert(40);
            queue.insert(50);

            // Display queue
            System.out.print("Queue: ");
            queue.display();

            // Attempt to insert when full (should fail)
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
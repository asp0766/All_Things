// Dynamic Queue : -


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
        return size == data.length;
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

// DynamicQueue class extending CircularQueue
public class first173 extends CircularQueue {
    public first173() {
        super();
    }

    public first173(int size) {
        super(size);
    }

    @Override
    public boolean insert(int item) {
        // this takes care of it being full
        if (this.isFull()) {
            // double the array size
            int[] temp = new int[data.length * 2];

            // copy all previous items in new data
            for (int i = 0; i < data.length; i++) {
                temp[i] = data[(front + i) % data.length];
            }
            front = 0;
            end = data.length;
            data = temp;
        }

        // at this point we know that array is not full
        // insert item using parent class method
        return super.insert(item);
    }

    // Main method to demonstrate functionality
    public static void main(String[] args) {
        try {
            first172 queue = new first172(5);

            // Insert elements beyond initial capacity
            queue.insert(10);
            queue.insert(20);
            queue.insert(30);
            queue.insert(40);
            queue.insert(50);
            System.out.print("Queue after 5 insertions: ");
            queue.display();

            // Insert more to trigger resizing
            queue.insert(60);
            queue.insert(70);
            System.out.print("Queue after 7 insertions: ");
            queue.display();

            // Remove some elements
            System.out.println("Removed: " + queue.remove());
            System.out.println("Removed: " + queue.remove());
            
            System.out.print("Queue after removals: ");
            queue.display();

            // Show front element
            System.out.println("Front element: " + queue.front());

        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
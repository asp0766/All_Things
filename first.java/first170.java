// Dynamic Stack Operations :  -

// Custom Stack class
class CustomStack {
    protected int[] data;
    private static final int DEFAULT_SIZE = 10;
    int ptr = -1;

    // Default constructor
    public CustomStack() {
        this(DEFAULT_SIZE);
    }

    // Constructor with size parameter
    public CustomStack(int size) {
        this.data = new int[size];
    }

    // Push element to stack
    public boolean push(int item) {
        if (isFull()) {
            System.out.println("Stack is full!!");
            return false;
        }
        ptr++;
        data[ptr] = item;
        return true;
    }

    // Pop element from stack
    public int pop() throws StackException {
        if (isEmpty()) {
            throw new StackException("Cannot pop from an empty stack!!");
        }
        return data[ptr--];
    }

    // Peek top element of stack
    public int peek() throws StackException {
        if (isEmpty()) {
            throw new StackException("Cannot peek from an empty stack!!");
        }
        return data[ptr];
    }

    // Check if stack is full
    public boolean isFull() {
        return ptr == data.length - 1;
    }

    // Check if stack is empty
    public boolean isEmpty() {
        return ptr == -1;
    }
}

// StackException class
class StackException extends Exception {
    public StackException(String message) {
        super(message);
    }
}

// Dynamic Stack class
public class first170 extends CustomStack {

    public first170() {
        super(); // Call CustomStack()
    }

    public first170(int size) {
        super(size); // Call CustomStack(int size)
    }

    @Override
    public boolean push(int item) {
        // Double the array size if full
        if (this.isFull()) {
            int[] temp = new int[data.length * 2];

            // Copy previous items into the new array
            for (int i = 0; i < data.length; i++) {
                temp[i] = data[i];
            }

            data = temp;
        }

        // Push item into the stack
        return super.push(item);
    }
}

// Main class to test dynamic stack operations
class Main {
    public static void main(String[] args) {
        first170 stack = new first170(5);

        try {
            // Pushing elements
            stack.push(10);
            stack.push(20);
            stack.push(30);
            stack.push(40);
            stack.push(50);

            // Pushing beyond initial size
            stack.push(60);
            stack.push(70);

            // Peek the top element
            System.out.println("Top element: " + stack.peek()); // 70

            // Popping elements
            System.out.println("Popped: " + stack.pop()); // 70
            System.out.println("Popped: " + stack.pop()); // 60

            // Peek after pop
            System.out.println("Top element: " + stack.peek()); // 50

        } catch (StackException e) {
            System.out.println(e.getMessage());
        }
    }
}

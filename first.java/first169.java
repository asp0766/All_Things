// Stack Operations : - 

// Custom Stack class
public class first169 {
    protected int[] data;
    private static final int DEFAULT_SIZE = 10;
    int ptr = -1;

    // Default constructor
    public first169() {
        this(DEFAULT_SIZE);
    }

    // Constructor with size parameter
    public first169(int size) {
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

// Main class to test stack operations
class StackMain {
    public static void main(String[] args) {
        first169 stack = new first169(5);

        try {
            // Pushing elements
            stack.push(10);
            stack.push(20);
            stack.push(30);
            stack.push(40);
            stack.push(50);
            
            // Trying to push in full stack
            stack.push(60); // Stack is full!!
            
            // Peek the top element
            System.out.println("Top element: " + stack.peek()); // 50

            // Popping elements
            System.out.println("Popped: " + stack.pop()); // 50
            System.out.println("Popped: " + stack.pop()); // 40

            // Peek after pop
            System.out.println("Top element: " + stack.peek()); // 30

            // Empty the stack
            stack.pop();
            stack.pop();
            stack.pop();

            // Trying to pop from empty stack
            stack.pop(); // Throws StackException
        } catch (StackException e) {
            System.out.println(e.getMessage());
        }
    }
}

// Circular LinkedList :  -
public class first165 {

    private Node head;
    private Node tail;

    // Constructor
    public first165() {
        this.head = null;
        this.tail = null;
    }

    // Insert a node
    public void insert(int val) {
        Node node = new Node(val);
        if (head == null) {
            head = node;
            tail = node;
            node.next = head; // Circular link
            return;
        }

        tail.next = node;
        node.next = head;
        tail = node;
    }

    // Display the list
    public void display() {
        Node node = head;
        if (head != null) {
            do {
                System.out.print(node.val + " -> ");
                node = node.next;
            } while (node != head);
        }
        System.out.println("HEAD");
    }

    // Delete a node
    public void delete(int val) {
        if (head == null) {
            return;
        }

        if (head == tail && head.val == val) {
            head = null;
            tail = null;
            return;
        }

        Node node = head;
        if (head.val == val) {
            head = head.next;
            tail.next = head;
            return;
        }

        do {
            Node n = node.next;
            if (n.val == val) {
                node.next = n.next;
                if (n == tail) {
                    tail = node;
                }
                break;
            }
            node = node.next;
        } while (node != head);
    }

    // Node class
    private class Node {
        int val;
        Node next;

        public Node(int val) {
            this.val = val;
        }
    }

    // Main method to test CLL
    public static void main(String[] args) {
        first165 list = new first165();
        list.insert(23);
        list.insert(3);
        list.insert(19);
        list.insert(75);
        list.display();
        list.delete(19);
        list.display();
    }
}

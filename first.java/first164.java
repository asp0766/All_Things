// LinkedList: -
// Insertion and Deletion in LinkedList: -

public class first164 {
    private Node head;

    // Node class
    private static class Node {
        int value;
        Node next;

        Node(int value) {
            this.value = value;
        }
    }

    // Insert at the beginning
    public void insertFirst(int value) {
        Node node = new Node(value);
        node.next = head;
        head = node;
    }

    // Insert at the end
    public void insertLast(int value) {
        Node node = new Node(value);
        if (head == null) {
            head = node;
            return;
        }
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = node;
    }

    // Insert at a specific index
    public void insert(int value, int index) {
        if (index == 0) {
            insertFirst(value);
            return;
        }
        Node temp = head;
        for (int i = 1; i < index; i++) {
            if (temp == null) {
                System.out.println("Index out of bounds");
                return;
            }
            temp = temp.next;
        }
        Node node = new Node(value);
        node.next = temp.next;
        temp.next = node;
    }

    // Display the list
    public void display() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.value + " -> ");
            temp = temp.next;
        }
        System.out.println("END");
    }

    // Delete the first element
    public int deleteFirst() {
        if (head == null) {
            System.out.println("List is empty");
            return -1;
        }
        int value = head.value;
        head = head.next;
        return value;
    }

    // Delete the last element
    public int deleteLast() {
        if (head == null) {
            System.out.println("List is empty");
            return -1;
        }
        if (head.next == null) {
            int value = head.value;
            head = null;
            return value;
        }
        Node temp = head;
        while (temp.next.next != null) {
            temp = temp.next;
        }
        int value = temp.next.value;
        temp.next = null;
        return value;
    }

    // Delete at a specific index
    public int delete(int index) {
        if (index == 0) {
            return deleteFirst();
        }
        Node temp = head;
        for (int i = 1; i < index; i++) {
            if (temp == null || temp.next == null) {
                System.out.println("Index out of bounds");
                return -1;
            }
            temp = temp.next;
        }
        int value = temp.next.value;
        temp.next = temp.next.next;
        return value;
    }

    // Insert using recursion
    public void insertRec(int value, int index) {
        head = insertRec(value, index, head);
    }

    private Node insertRec(int value, int index, Node node) {
        if (index == 0) {
            Node temp = new Node(value);
            temp.next = node;
            return temp;
        }
        if (node == null) {
            return null;
        }
        node.next = insertRec(value, index - 1, node.next);
        return node;
    }

    // Main method
    public static void main(String[] args) {
        first164 list = new first164();
        list.insertFirst(3);
        list.insertFirst(2);
        list.insertFirst(8);
        list.insertFirst(17);
        list.insertLast(99);
        list.insert(100, 3);
        list.display();
        System.out.println(list.deleteFirst());
        list.display();
        System.out.println(list.deleteLast());
        list.display();
        System.out.println(list.delete(2));
        list.display();
        list.insertRec(88, 2);
        list.display();

        // Uncomment below to test DLL or CLL if implemented later
        // DLL list = new DLL();
        // list.insertFirst(3);
        // list.insertFirst(2);
        // list.insertFirst(8);
        // list.insertFirst(17);
        // list.insertLast(99);
        // list.insert(8, 65);
        // list.display();

        // CLL list = new CLL();
        // list.insert(23);
        // list.insert(3);
        // list.insert(19);
        // list.insert(75);
        // list.display();
        // list.delete(19);
        // list.display();
    }
}

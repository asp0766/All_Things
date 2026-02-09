// Queue Interface : -



import java.util.LinkedList;
import java.util.Queue;

public class first45 {
    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<>();
        queue.add("First");
        queue.add("Second");
        System.out.println(queue.poll()); // Output: First
        System.out.println(queue); // Output: [Second]
    }
}
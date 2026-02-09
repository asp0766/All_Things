
// StringBuilder : -


public class first86{
    public static void main(String[] args) {
        // 1. Creating StringBuilder
        StringBuilder sb = new StringBuilder("Hello");

        // 2. append() - Add text
        sb.append(" World");
        System.out.println(sb); // Output: Hello World

        // 3. insert() - Insert at index
        sb.insert(5, " Java");
        System.out.println(sb); // Output: Hello Java World

        // 4. replace() - Replace part of string
        sb.replace(6, 10, "Awesome");
        System.out.println(sb); // Output: Hello Awesome World

        // 5. delete() - Remove part of string
        sb.delete(5, 13);
        System.out.println(sb); // Output: Hello World

        // 6. reverse() - Reverse string
        sb.reverse();
        System.out.println(sb); // Output: dlroW olleH

        // 7. capacity() - Check capacity
        System.out.println("Capacity: " + sb.capacity()); // Default 16 + initial length

        // 8. ensureCapacity() - Increase capacity
        sb.ensureCapacity(50);
        System.out.println("New Capacity: " + sb.capacity()); // At least 50
    }
}

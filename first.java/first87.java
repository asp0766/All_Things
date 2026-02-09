
// String Methods : -



import java.util.Arrays;

public class first87{
    public static void main(String[] args) {
        String str = "  Hello World  ";

        // 1. Basic Methods
        System.out.println("Length: " + str.length());           // 15
        System.out.println("Char at index 4: " + str.charAt(4)); // o
        System.out.println("UpperCase: " + str.toUpperCase());   // HELLO WORLD
        System.out.println("LowerCase: " + str.toLowerCase());   // hello world
        System.out.println("Trimmed: '" + str.trim() + "'");     // "Hello World"

        // 2. Searching & Checking
        System.out.println("Contains 'World': " + str.contains("World"));  // true
        System.out.println("Starts with 'Hello': " + str.startsWith("Hello")); // false (space before)
        System.out.println("Ends with 'World': " + str.trim().endsWith("World")); // true
        System.out.println("Index of 'o': " + str.indexOf('o'));  // 5
        System.out.println("Last Index of 'o': " + str.lastIndexOf('o')); // 8
        System.out.println("Is Empty: " + str.isEmpty());  // false

        // 3. Substring & Replacement
        System.out.println("Substring from index 6: " + str.substring(6)); // "World  "
        System.out.println("Substring (0, 5): " + str.substring(0, 5)); // "  Hel"
        System.out.println("Replace 'World' with 'Java': " + str.replace("World", "Java")); // "  Hello Java  "
        System.out.println("Replace all 'o' with 'O': " + str.replaceAll("o", "O")); // "  HellO WOrld  "

        // 4. Splitting & Joining
        String fruits = "apple,banana,orange";
        String[] fruitArray = fruits.split(",");
        System.out.println("Split: " + Arrays.toString(fruitArray)); // [apple, banana, orange]

        String joined = String.join(" | ", fruitArray);
        System.out.println("Joined: " + joined); // "apple | banana | orange"
    }
}


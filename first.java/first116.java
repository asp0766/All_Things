public class first116 {
    public static void main(String[] args) {
        String str = "hello world";
        char skipChar = 'o';

        String result = skipCharacter(str, skipChar);
        System.out.println("Result: " + result);
    }

    public static String skipCharacter(String str, char ch) {
        StringBuilder sb = new StringBuilder();
        for (char c : str.toCharArray()) {
            if (c != ch) {
                sb.append(c);
            }
        }
        return sb.toString();
    }
}

// Lambda Expressions : -


interface first154 {
    void show(String msg);
}

public class first155 {
    public static void main(String[] args) {
        first154 obj = msg -> System.out.println("Message: " + msg);
        obj.show("Hello Lambda"); // Output: Message: Hello Lambda
    }
}

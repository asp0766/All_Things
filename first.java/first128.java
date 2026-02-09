// Singleton Class : -


class Singleton {
    private static Singleton instance;  // Private static instance

    private Singleton() { }  // Private constructor

    public static Singleton getInstance() {
        if (instance == null) {
            instance = new Singleton();  // Create instance if not exists
        }
        return instance;
    }

    public void showMessage() {
        System.out.println("Singleton Class Instance");
    }
}

public class first128{
    public static void main(String[] args) {
        Singleton obj1 = Singleton.getInstance();
        obj1.showMessage();

        Singleton obj2 = Singleton.getInstance();

        System.out.println(obj1 == obj2);  // Output: true (same instance)
    }
}


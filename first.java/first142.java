// Object Class (Super Class of All Classes) : -


class first142{
    String name;

    first142(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "Name: " + name;
    }

    public static void main(String[] args) {
        first142 obj = new first142("Alice");
        System.out.println(obj); // Output: Name: Alice
    }
}
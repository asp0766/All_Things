// Encapsulation (Data Hiding) : -


class Person {
    private String name;

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}

public class first136{
    public static void main(String[] args) {
        Person p = new Person();
        p.setName("John");
        System.out.println(p.getName());  // Output: John
    }
}

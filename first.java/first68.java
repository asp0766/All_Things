
//  toString() Method : - 


class first68_1{
    String name;
    int age;

    first68_1(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString() {
        return "name = " + name + "\nage = " + age + "";
    }
}

public class first68{
    public static void main(String[] args) {
        first68_1 p = new first68_1("Alice", 25);
        System.out.println(p); 
    }
}


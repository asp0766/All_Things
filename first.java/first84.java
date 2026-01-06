
// toString method : - 


class first84_1{
    String name;
    int age;

    first84_1(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString() {
        return "Person{name='" + name + "', age=" + age + "}";
    }
}

public class first84{
    public static void main(String[] args) {
    first84_1 p = new first84_1("John", 25);
        System.out.println(p.toString()); 
    }
}

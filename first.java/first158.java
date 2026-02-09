// Object Cloning : - 


class first157 implements Cloneable {
    int num;

    first157(int num) {
        this.num = num;
    }

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}

public class first158 {
    public static void main(String[] args) throws CloneNotSupportedException {
        first157 obj1 = new first157(10);
        first157 obj2 = (first157) obj1.clone();
        System.out.println(obj2.num); // Output: 10
    }
}

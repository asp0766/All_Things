// Interface : -

public class first30 {
    public static void main(String[] args) 
    {
        animal a = new monkey();
        a.eat();

        monkey monkey = new monkey();
        monkey.eat();
        monkey.sleep();
        System.out.println(animal.LEGS);
    }    
}

interface human {
    void sleep();
}

interface animal {

    public static final int LEGS = 2;  // by default it is become final
    void eat();
}

class monkey implements animal, human { // Implementing both interfaces
    @Override
    public void eat() {
        System.out.println("monkey is eating");
    }

    @Override
    public void sleep() {
        System.out.println("monkey is sleeping");
    }
}
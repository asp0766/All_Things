
public class first55{
    public static void main(String[] args) {
        int department = 2;
        int role = 1;

        switch (department) {
            case 1:
                System.out.println("Department: IT");
                switch (role) {
                    case 1:
                        System.out.println("Role: Developer");
                        break;
                    case 2:
                        System.out.println("Role: Tester");
                        break;
                    default:
                        System.out.println("Invalid role");
                }
                break;

            case 2:
                System.out.println("Department: HR");
                switch (role) {
                    case 1:
                        System.out.println("Role: Recruiter");
                        break;
                    case 2:
                        System.out.println("Role: Manager");
                        break;
                    default:
                        System.out.println("Invalid role");
                }
                break;

            default:
                System.out.println("Invalid department");
        }
    }
}




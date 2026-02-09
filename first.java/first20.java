//  String methods : -




public class first20 {
    public static void main(String[] args) {
        
        String name = "AnuJ";
        System.out.println(name.length());
        System.out.println(name.toUpperCase());
        System.out.println(name.toLowerCase());
        System.out.println(name.trim());
        System.out.println(name.replace('A', 'a'));
        System.out.println(name.startsWith("An"));
        System.out.println(name.endsWith("J"));
        System.out.println(name.charAt(0));
        System.out.println(name.valueOf(10));
        System.out.println(name.contains("An"));
        System.out.println(name.substring(0, 2));
        System.out.print(name.split("A"));
        System.out.println(name.isEmpty());


    }
    
}

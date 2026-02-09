// File Handling : -


import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

class first184 {
  public static void main(String[] args) {
    try {
      // Step 1: Create a file
      File file = new File("example.txt");
      if (file.createNewFile()) {
        System.out.println("File created: " + file.getName());
      } else {
        System.out.println("File already exists.");
      }

      // Step 2: Write to the file
      FileWriter writer = new FileWriter("example.txt");
      writer.write("Hello from Java!\nThis is a file handling demo.\nEnjoy coding!");
      writer.close();
      System.out.println("Successfully wrote to the file.");

      // Step 3: Read from the file
      FileReader reader = new FileReader("example.txt");
      Scanner scanner = new Scanner(reader);
      System.out.println("\nFile contents:");
      while (scanner.hasNextLine()) {
        System.out.println(scanner.nextLine());
      }
      scanner.close();

      // Step 4: Delete the file
      if (file.delete()) {
        System.out.println("\nDeleted the file: " + file.getName());
      } else {
        System.out.println("\nFailed to delete the file.");
      }

    } catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }
  }
}

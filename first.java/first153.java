// Custom ArrayList : -


class first152<T> {
    private Object[] arr;
    private int size = 0;

    public first152() {
        arr = new Object[10];
    }

    public void add(T value) {
        if (size == arr.length) {
            Object[] newArr = new Object[arr.length * 2];
            System.arraycopy(arr, 0, newArr, 0, arr.length);
            arr = newArr;
        }
        arr[size++] = value;
    }

    public T get(int index) {
        if (index >= size) throw new IndexOutOfBoundsException();
        return (T) arr[index];
    }

    public int size() {
        return size;
    }
}

public class first153 {
    public static void main(String[] args) {
        first152<String> list = new first152<>();
        list.add("Hello");
        list.add("World");
        System.out.println(list.get(0)); // Output: Hello
    }
}

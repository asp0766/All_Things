// Generics : -


class first150<T> {
    private T data;

    public first150(T data) {
        this.data = data;
    }

    public T getData() {
        return data;
    }
}

public class first151 {
    public static void main(String[] args) {
        first150<Integer> obj = new first150<>(100);
        System.out.println(obj.getData()); // Output: 100
    }
}

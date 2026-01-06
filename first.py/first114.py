# Library Management System


class Book:
    def __init__(self, title, author, book_id):
        self.title = title
        self.author = author
        self.book_id = book_id
        self.is_borrowed = False

    def __str__(self):
        return f"Book ID: {self.book_id}, Title: '{self.title}', Author: {self.author}, Borrowed: {self.is_borrowed}"


class Member:
    def __init__(self, name, member_id):
        self.name = name
        self.member_id = member_id
        self.borrowed_books = []

    def borrow_book(self, book):
        if not book.is_borrowed:
            book.is_borrowed = True
            self.borrowed_books.append(book)
            print(f"{self.name} borrowed '{book.title}'.")
        else:
            print(f"Sorry, '{book.title}' is already borrowed.")

    def return_book(self, book):
        if book in self.borrowed_books:
            book.is_borrowed = False
            self.borrowed_books.remove(book)
            print(f"{self.name} returned '{book.title}'.")
        else:
            print(f"{self.name} did not borrow '{book.title}'.")

    def show_borrowed_books(self):
        if self.borrowed_books:
            print(f"{self.name} has borrowed the following books:")
            for book in self.borrowed_books:
                print(f"- {book.title}")
        else:
            print(f"{self.name} has not borrowed any books.")


class Library:
    def __init__(self):
        self.books = []
        self.members = []

    def add_book(self, book):
        self.books.append(book)
        print(f"Added book: '{book.title}' by {book.author}.")

    def register_member(self, member):
        self.members.append(member)
        print(f"Registered member: {member.name}.")

    def show_books(self):
        print("Available books in the library:")
        for book in self.books:
            print(book)


# Example Usage
if __name__ == "__main__":
    # Create a library
    library = Library()

    # Add books to the library
    book1 = Book("1984", "George Orwell", 1)
    book2 = Book("To Kill a Mockingbird", "Harper Lee", 2)
    library.add_book(book1)
    library.add_book(book2)

    # Register members
    member1 = Member("Alice", 101)
    member2 = Member("Bob", 102)
    library.register_member(member1)
    library.register_member(member2)

    # Show available books
    library.show_books()

    # Members borrow books
    member1.borrow_book(book1)
    member2.borrow_book(book1)  # Attempt to borrow the same book
    member1.show_borrowed_books()

    # Member returns a book
    member1.return_book(book1)
    member2.borrow_book(book1)  # Now Bob can borrow the book
    member2.show_borrowed_books()

    # Show available books after borrowing
    library.show_books()
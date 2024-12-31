# FILE-MANAGEMENT-TOOL

**Company name :** CODTECH IT SOLUTIONS
**Name :** Sahil D Wanjare
**Intern-ID :** CT08GIU
**Domain**  C++ PROGRAMMING
**Batch Duration :** December 25th, 2024 to January 25th, 2025.
**Mentor Name :** NEELA SANTOSH

**DESCRIPTION**

### Description for GitHub Repository

This C++ program demonstrates basic file-handling techniques, including reading, writing, and appending data to text files. It is designed as an interactive, menu-driven application that allows users to manage file contents through simple operations. Here's a detailed explanation of its features and functionality:

---

#### **Purpose**
The primary purpose of this program is to serve as a hands-on example for beginners to learn about file handling in C++. It covers key aspects such as:
1. Writing data to a file.
2. Reading data from a file.
3. Appending data to an existing file.

---

#### **Features**
1. **Write to File**:
   - Opens a specified file in write mode, overwriting any existing content.
   - Prompts the user to input lines of text, which are saved to the file until the user types "END".
   - Ensures proper closure of the file after writing.

2. **Read from File**:
   - Opens the specified file in read mode.
   - Displays the file's contents line by line on the console.
   - Handles errors if the file does not exist or cannot be opened.

3. **Append to File**:
   - Opens the file in append mode, preserving existing content while adding new lines at the end.
   - Prompts the user to input lines of text, terminating input upon typing "END".
   - Ensures seamless addition of new content without overwriting the existing data.

4. **Menu-Driven Interface**:
   - Offers a user-friendly menu for selecting the desired file operation.
   - Validates user input to ensure correct choices.
   - Provides an option to exit the program gracefully.

---

#### **Code Design**
- **File Streams**:
  - The program utilizes `ofstream` and `ifstream` from the `<fstream>` library for file operations.
  - Modes like `ios::app` are used to ensure efficient file appending.

- **Error Handling**:
  - Checks are implemented to verify whether files can be opened successfully.
  - Error messages are displayed if file operations fail.

- **User Input**:
  - The program uses `cin` and `getline` to manage user inputs.
  - Input buffers are cleared to prevent issues during consecutive inputs.

- **Modular Functions**:
  - Each operation (write, read, append) is encapsulated in its own function for better organization and reusability.

---

#### **Use Cases**
This program can be a foundation for:
1. Learning C++ file-handling operations.
2. Building text-based logging systems.
3. Managing simple file-based databases.

---

#### **Limitations**
- The program does not handle binary files; it is restricted to text files.
- Concurrent file access is not supported.
- Limited to local file paths; it does not handle remote file systems.

---

#### **Contributing**
Contributions are welcome! Feel free to fork the repository, make improvements, and submit pull requests. For major changes, please open an issue to discuss proposed changes.

---

This program is an excellent starting point for anyone looking to grasp the fundamentals of file handling in C++!

#### **OUTPUT**
![Screenshot 2024-12-31 232215](https://github.com/user-attachments/assets/b396950f-d6a6-4ed7-b1fb-5b145003fbf4)

# C Programming - 1st Semester

## Overview
This repository contains foundational C programming code demonstrating various concepts typically covered in a first-semester C programming course. The code is organized into structured files for ease of understanding and practice. Each file contains commented code segments that explain key concepts which can be compiled and executed independently for learning purposes.

Follow the instructions below to set up the environment and run the C programs.

---

## Getting Started

### 1. Clone the Repository
First, fork this repository, and then clone it to your local system:
```bash
git clone https://github.com/YOUR-USERNAME/REPOSITORY-NAME.git
cd C-Programming-1st-Sem
```
Replace `YOUR-USERNAME` and `REPOSITORY-NAME` with your GitHub username and the repository name.

---

### 2. Install a C Compiler
Make sure you have a working C compiler installed on your system. Some of the common options are:

- **GCC**: The GNU C Compiler ([Install GCC](https://gcc.gnu.org/install/)).
- **Clang**: An alternative open-source compiler ([Install Clang](https://clang.llvm.org/get_started.html)).
- **MinGW**: For Windows users ([Install MinGW](http://www.mingw.org/)).

You can check if GCC is installed using the command:
```bash
gcc --version
```

If it's not installed, follow the above links or refer to your operating system's package manager.

---

### 3. Running C Programs
The code in this repository is organized into individual files for different C concepts. To compile and execute a program:

1. Navigate to the directory containing your `.c` file.
2. Compile the file using:
   ```bash
   gcc fileName.c -o outputFileName
   ```
   Replace `fileName.c` with the name of your C file and `outputFileName` with the desired output binary filename.

   Example:
   ```bash
   gcc example.c -o example
   ```

3. Run the compiled program with:
   ```bash
   ./outputFileName
   ```
   Example:
   ```bash
   ./example
   ```

---

## Key Features and Files
1. **Basic Structure of C Program**:
    - `hello_world.c`: A simple program to print "Hello, World!".
    - `basic_input_output.c`: Demonstration of input and output functions in C.

2. **Control Flow**:
    - `if_else.c`: Example of conditional statements.
    - `loops.c`: Demonstration of `for`, `while`, and `do-while` loops.

3. **Functions**:
    - `functions.c`: Basic example of declaring and using functions in C.

4. **Arrays and Pointers**:
    - `arrays.c`: Examples showcasing 1D and 2D arrays.
    - `pointers.c`: Overview of pointer concepts and usage.

5. **File Handling**:
    - `file_handling.c`: Reading from and writing to files in C.

---

### Notes and Best Practices

- **Learn Step-by-Step**:
  Start with the basics before moving to advanced topics. Each file is designed to build on the previous concepts.

- **Use a Code Editor**:
  For easier editing and compiling, use a developer-friendly editor like:
    - [Visual Studio Code](https://code.visualstudio.com/) (with extensions like "C/C++").
    - [CLion](https://www.jetbrains.com/clion/).
    - [Code::Blocks](http://www.codeblocks.org/).

- **Uncomment Code Thoughtfully**:
  In files with multiple examples, uncomment only the portion of the code you wish to execute.

- **Error Handling**:
  If you encounter errors during compilation or execution, carefully read the error messages and refer to comments in the code for guidance.

---

### Example Workflow
Here’s an example of how to compile and run a file:

1. Open `hello_world.c` in your editor.
2. Compile the program:
   ```bash
   gcc hello_world.c -o hello_world
   ```
3. Run the compiled program:
   ```bash
   ./hello_world
   ```

   The program will output:
   ```
   Hello, World!
   ```

---

## Contributing
If you'd like to contribute to this repository:
1. Create a fork of the repository.
2. Make your changes in your forked repository.
3. Submit a pull request.

---

### Important Notes
- Ensure you're using a proper compiler for your operating system.
- Test the programs in your local environment before making significant modifications.

---

Happy Coding!
# 🔢 Text ↔ Binary Converter in C

![Language: C](https://img.shields.io/badge/language-C-blue.svg)
![License: MIT](https://img.shields.io/badge/license-MIT-brightgreen.svg)

**A simple console program to convert text to binary and binary back to text in C.**

---

## 🧩 Program Overview

This program allows you to:

1. Convert **text input** to its **binary representation**.
2. Convert a **binary string** (sequence of 0s and 1s) back to **text**.

It demonstrates:

- Recursion (for computing powers of 2)
- Character encoding (ASCII)
- Basic array manipulation in C

---

## ⚙️ How to Compile & Run

```bash
# Compile
gcc -o text_binary_converter main.c

# Run
./text_binary_converter   # Linux / macOS
text_binary_converter.exe # Windows
````

---

## 🎮 Usage

After running, you will see a menu:

```
1- Text to Binary
2- Binary to Text
Enter a number:
```

* **Option 1:** Enter your text (e.g., `Hello`) → program outputs binary representation.
* **Option 2:** Enter a binary string (e.g., `0100100001100101011011000110110001101111`) → program outputs text.

**Example:**

```
1- Text to Binary
2- Binary to Text
Enter a number: 1
Hello
01001000 01100101 01101100 01101100 01101111
```

```
1- Text to Binary
2- Binary to Text
Enter a number: 2
0100100001100101011011000110110001101111
Hello
```

---

## 🛠️ Key Features

* Converts ASCII text to binary with 8-bit representation.
* Converts binary strings back to readable text.
* Uses recursive function for computing powers of 2.
* Fully console-based; lightweight and simple.

---

## ⚠️ Notes / Limitations

* Maximum input length is limited by array size (`1000` characters).
* Binary strings must be multiples of 8 bits for correct conversion.
* Input is currently taken using `gets()`, which may be unsafe for very long inputs — recommended for learning purposes only.

---

## 📜 License

MIT License — you are free to use, modify, and distribute this program.

---

Made with ❤️ in C for learning character encoding and binary operations. Perfect for beginners exploring recursion and ASCII in C! 

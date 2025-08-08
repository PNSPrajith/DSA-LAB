# 📚 DSA-LAB – Classical String Matching Implementations  

---
**Coursework:** Implemented as part of the **DSA-LAB** course.

---

## 📜 Problem Statement  
Given two strings — **text** (length *n*) and **pattern** (length *m*) — find **all positions** in the text where the pattern occurs.  

The goal is to **implement** and **compare** multiple *classical string matching algorithms*, analyzing their performance and understanding their trade-offs across different scenarios.  

---

## 💼 Industry Relevance  
String matching algorithms are **core building blocks** in a wide range of industries:  

- 🔍 **Search Engines** – Matching query terms against large-scale document databases.  
- 🛡️ **Cybersecurity** – Detecting malicious code patterns in files and network traffic.  
- 🧬 **Bioinformatics** – Matching DNA/RNA sequences to reference genomes.  
- ✍️ **Text Editors & IDEs** – Implementing “Find” functionality, syntax highlighting, and autocompletion.  
- 📦 **Data Compression** – Using substring detection in algorithms like LZ77, LZ78, and Arithmetic Coding.   

---

## 🗂️ Algorithm Implementations  

---

### 📘 1. Naive Matcher (`naiveMatcher.c`)
> **Idea**: Check every possible alignment of the pattern in the text and compare character by character.  
- **Time Complexity**: O(*m·n*) in worst case.  
- **Pros**: Simple to implement.  
- **Cons**: Inefficient for large text and repetitive patterns.  

---

### 📗 2. Rabin–Karp Algorithm (`RabinKarpMatcher.c`)
> **Idea**: Use hashing to compare the pattern with substrings of text quickly. If hashes match, verify by direct comparison.  
- **Time Complexity**: O(*m + n*) average, O(*m·n*) worst case.  
- **Pros**: Efficient for multiple pattern matching.  
- **Cons**: Hash collisions can slow it down.  

---

### 📙 3. Finite Automata Matcher (`FiniteAutomataMatcher.c`)
> **Idea**: Precompute a finite automaton that processes the text in one pass to find matches.  
- **Time Complexity**: O(*m + n·Σ*) preprocessing, O(*n*) search.  
- **Pros**: Extremely fast searching after preprocessing.  
- **Cons**: Large memory usage for big alphabets.  

---

### 📕 4. Knuth–Morris–Pratt (KMP) Algorithm (`KMPMatcher.c`)
> **Idea**: Preprocess the pattern to create an LPS (Longest Prefix Suffix) array to skip unnecessary comparisons.  
- **Time Complexity**: O(*m + n*).  
- **Pros**: Efficient for long texts and repetitive patterns.  
- **Cons**: Slightly harder to implement than Naive.  

---

### 📒 5. Suffix Trees (`SuffixTrees.c`)
> **Idea**: Construct a suffix tree for the text to enable O(*m*) pattern search.  
- **Time Complexity**: O(*n*) construction, O(*m*) search.  
- **Pros**: Extremely fast pattern matching.  
- **Cons**: Complex to implement, high memory usage.  

---

### 📓 6. Arithmetic Coding (`ArithmeticCoding.c`)
> **Idea**: Encodes data into a single fractional number between 0 and 1 based on symbol probabilities, allowing near-optimal compression.  
- **Time Complexity**: O(*n*) for both encoding and decoding.  
- **Pros**: High compression ratio close to entropy limits.  
- **Cons**: Slower than simpler methods like Huffman coding.  

---

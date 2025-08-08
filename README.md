<details>
<summary><b><i>📜 naiveMatcher.c</i></b></summary>

<span style="color:#555;">🔍 Brute force pattern matching</span> – checks for every possible shift of the pattern in the text to see if it matches.  
No preprocessing is performed.

<b>⏳ T.C</b> – <span style="color:#d14;">O(mn)</span> in worst case, where *n* = length of text, *m* = length of pattern.

</details>

<details>
<summary><b><i>🔢 RabinKarpMatcher.c</i></b></summary>

<span style="color:#555;">💡 Hash-based matching</span> – uses the **rolling hash** technique to compare hash values quickly,  
verifying characters only when hashes match.

<b>⏳ T.C</b> – Average: <span style="color:#28a745;">O(n + m)</span>, Worst: <span style="color:#d14;">O(nm)</span> (many hash collisions).

</details>

<details>
<summary><b><i>⚙️ FiniteAutomataMatcher.c</i></b></summary>

<span style="color:#555;">🤖 Automaton-driven matching</span> – precomputes a **transition table** for the pattern and processes the text in one pass by following state transitions.

<b>⏳ T.C</b> – Preprocessing: <span style="color:#28a745;">O(m × |Σ|)</span>, Matching: <span style="color:#28a745;">O(n)</span>.

</details>

<details>
<summary><b><i>🧩 KMPMatcher.c</i></b></summary>

<span style="color:#555;">📚 Classic linear-time algorithm</span> – builds an **LPS (Longest Prefix Suffix)** array,  
allowing pattern matching without re-checking matched characters.

<b>⏳ T.C</b> – Preprocessing: <span style="color:#28a745;">O(m)</span>, Matching: <span style="color:#28a745;">O(n)</span>.

</details>

<details>
<summary><b><i>🌳 SuffixTrees.c</i></b></summary>

<span style="color:#555;">🗂️ Advanced text index</span> – builds a **suffix tree** for ultra-fast pattern queries. Here can search for multiple patterns after preprocessing. 

<b>⏳ T.C</b> – Preprocessing: <span style="color:#28a745;">O(n)</span>, Query: <span style="color:#28a745;">O(m)</span>.

</details>

<details>
<summary><b><i>🔎 FindingKeywords.c</i></b></summary>

<span style="color:#555;">📖 Multiple-pattern search</span> – searches for set of keywords in C-language **simultaneously** for efficient lookups.

<b>⏳ T.C</b> – Preprocessing: <span style="color:#28a745;">O(sum of lengths of keywords + |Σ|)</span>,  
Query: <span style="color:#28a745;">O(n + z)</span>, where *z* = number of matches.

</details>

<details>
<summary><b><i>📦 ArithmeticCoding.c</i></b></summary>

<span style="color:#555;">🖥️ Compression technique</span> –  
- **Encoding**: Compresses a given string into a unique decimal.  
- **Decoding**: Reconstructs the original string from the decimal.

<b>⏳ T.C</b> – <span style="color:#28a745;">O(n)</span> for both encoding and decoding.

</details>

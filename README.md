### Create Binary String:


This C++ program calculates the **maximum number of coins** that can be earned by assigning a binary string of length `N` (consisting of `0`s and `1`s), based on certain rules. Let's walk through the logic.

---

### 🔧 **Inputs:**

* `T` — Number of test cases.
  For each test case:
* `N` — Length of the binary string.
* `A` — Coins for each `0`.
* `B` — Coins for each `1`.
* `C` — Coins for each `0-1` pair.
* `D` — Coins for each `1-0` pair.

---

### 🧠 **Idea:**

For a string of length `N`, you can vary the number of `0`s from `0` to `N`. For each such count:

* Number of `1`s = `N - number_of_zeros`.

For each configuration, the total coin count is calculated using two possible interaction patterns:

1. Assuming all `0-1` pairs (rewarded with `C` coins).
2. Assuming all `1-0` pairs (rewarded with `D` coins).

Since the actual order of the string isn't specified, and you don't know whether there are more `0-1` or `1-0` transitions, the code **takes the maximum of the two** interaction rewards.

---

### 📊 **Calculation:**

For each possible `zeros` count:

```cpp
int ones = N - zeros;
val1 = zeros * A + ones * B + zeros * ones * C; // 0-1 interactions
val2 = zeros * A + ones * B + zeros * ones * D; // 1-0 interactions
curr = max(val1, val2);
```

Then it keeps track of the maximum value over all combinations.

---

### 📌 **Goal:**

Output the **maximum number of coins** that can be achieved for each test case by choosing the best `0`/`1` count combination and best interaction type (`C` or `D`).

---
This program finds the maximum coins you can earn by forming a binary string of length N using 0s and 1s. Each 0 gives A coins, each 1 gives B coins, and each interaction between 0s and 1s can either earn C coins (for 0-1 pairs) or D coins (for 1-0 pairs).

For every possible number of 0s (from 0 to N), it calculates how many 1s there are and then computes the total coins using both types of interactions. It picks the better of the two and keeps track of the best overall result to print the maximum coins possible for each test case.

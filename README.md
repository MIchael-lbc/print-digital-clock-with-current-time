# print-digital-clock-with-current-time
Alright, let’s make this super clear and simple so it sticks. 😄

---

### **`time_t`**

* `time_t` is a **data type** defined in `<time.h>`.
* It is used to **store time values**, usually the **number of seconds since 00:00:00 UTC, Jan 1, 1970** (this is called the *Unix epoch*).

---

### **Example usage**

```c
#include <stdio.h>
#include <time.h>

int main() {
    time_t now;            // declare a variable of type time_t
    now = time(NULL);      // get current system time
    printf("Seconds since Jan 1, 1970: %ld\n", now);
    printf("Current time: %s", ctime(&now)); // human-readable format
    return 0;
}
```

**Output example:**

```
Seconds since Jan 1, 1970: 1739733123
Current time: Tue Nov 12 23:05:23 2025
```

---

### **Important notes**

1. **It’s basically a number**:

   * On most systems, it’s a `long` or `long long` integer.
   * Represents **seconds** since the epoch.

2. **Use it with `<time.h>` functions**:

   * `time(&variable)` → store current time in `time_t`.
   * `difftime(time1, time0)` → difference between two `time_t` values in seconds.
   * `ctime(&variable)` → convert `time_t` to a readable string.
   * `localtime(&variable)` → convert to broken-down local time (`struct tm`).

---

💡 **Memory trick:**

* **`time_t` → “time type”** → stores **seconds since 1970**.
* Think of it as the **raw timestamp** before you format it for humans.

---

If you want, I can make a **tiny visual diagram showing `time_t`, `struct tm`, and ctime()` flow**, so you never forget how time works in C.

Do you want me to do that?

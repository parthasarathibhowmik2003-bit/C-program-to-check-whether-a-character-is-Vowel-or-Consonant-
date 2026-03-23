#include <stdio.h>
#include <ctype.h>

// Function to check Vowel or Consonant
const char* checkVowelConsonant(char ch) {
    if (!isalpha(ch)) return "Not an Alphabet";
    char lower = tolower(ch);
    return (lower=='a' || lower=='e' || lower=='i' ||
            lower=='o' || lower=='u') ? "VOWEL" : "CONSONANT";
}

int main() {
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    printf("'%c' is a %s.\n", ch, checkVowelConsonant(ch));

    return 0;
}
```

---

**Sample Outputs:**
```
=== Check Vowel or Consonant ===

Enter a Character: A
Result: 'A' is a VOWEL. ✓
```
```
=== Check Vowel or Consonant ===

Enter a Character: b
Result: 'b' is a CONSONANT. ✗
```
```
=== Check Vowel or Consonant ===

Enter a Character: E
Result: 'E' is a VOWEL. ✓
```
```
=== Check Vowel or Consonant ===

Enter a Character: z
Result: 'z' is a CONSONANT. ✗
```
```
=== Check Vowel or Consonant ===

Enter a Character: 5
Error: '5' is NOT an Alphabet!

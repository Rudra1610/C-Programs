#include<stdio.h>

int main() {
    
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;


    /*char choice;
    printf("Enter any Alphabet: ");
    scanf("%c",&choice);*/

    /*if (choice == "a") {

        printf("%c is a vowel",choice);

    }

    else if (choice == "e") {

        printf("%c is a vowel",choice);

    }

    else if (choice == "i") {

        printf("%c is a vowel",choice);

    }

    else if (choice == "o") {

        printf("%c is a vowel",choice);

    }

    else if (choice == "u") {

        printf("%c is a vowel",choice);

    }

    else {

        printf("%c is not a vowel",choice);

    }*/
    

    /*a = 1, e = 2, i = 3, o = 4, u = 5;*/

    /*switch (choice) {

    case 1 :
        printf("A is a vowel");
        break;

    case 2 :
        printf("E is a vowel");
        break;

    case 3 :
        printf("I is a vowel");
        break;

    case 4 :
        printf("O is a vowel");
        break;

    case 5 :
        printf("U is a vowel");
        break;
    
    default:
        printf("It is not a vowel");
        break;
    }*/

}
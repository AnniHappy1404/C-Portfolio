/*(Random Sentences) Write a program that uses random-number generation to create sentences. The program should use four arrays of pointers to char called article, noun, verb and preposition. The program should create a sentence by selecting a word at random from each array in
the following order: article, noun, verb, preposition, article and noun. As each word is picked,
it should be concatenated to the previous words in an array large enough to hold the entire sentence.
The words should be separated by spaces. When the final sentence is output, it should start with a
capital letter and end with a period. The program should generate 20 such sentences. The arrays
should be filled as follows: The article array should contain the articles "the", "a", "one", "some"
and "any"; the noun array should contain the nouns "boy", "girl", "dog", "town" and "car"; the
verb array should contain the verbs "drove", "jumped", "ran", "walked" and "skipped"; the preposition array should contain the prepositions "to", "from", "over", "under" and "on".
After the preceding program is written and working, modify it to produce a short story consisting of several of these sentences. (How about the possibility of a random term-paper writer?)*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main() {
    // 1. Khai bao cac mang con tro chua tu vung
    const char *article[] = {"the", "a", "one", "some", "any"};
    const char *noun[] = {"boy", "girl", "dog", "town", "car"};
    const char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
    const char *preposition[] = {"to", "from", "over", "under", "on"};

    char sentence[100]; // Bo nho dem de chua cau hoan chinh
    int i;

    // Khoi tao bo sinh so ngau nhien
    srand(time(NULL));

    printf("--- 20 CAU NGAU NHIEN ---\n\n");

    for (i = 0; i < 20; i++) {
        // Xoa trong cau truoc khi tao cau moi
        sentence[0] = '\0';

        // Lay ngau nhien cac tu va ghep lai theo thu tu yeu cau
        // Thu tu: article, noun, verb, preposition, article, noun.
        
        strcat(sentence, article[rand() % 5]);
        strcat(sentence, " ");
        strcat(sentence, noun[rand() % 5]);
        strcat(sentence, " ");
        strcat(sentence, verb[rand() % 5]);
        strcat(sentence, " ");
        strcat(sentence, preposition[rand() % 5]);
        strcat(sentence, " ");
        strcat(sentence, article[rand() % 5]);
        strcat(sentence, " ");
        strcat(sentence, noun[rand() % 5]);

        // Viet hoa chu cai dau tien
        sentence[0] = toupper(sentence[0]);

        // Them dau cham vao cuoi cau
        strcat(sentence, ".");

        // In cau ra man hinh
        printf("%d. %s\n", i + 1, sentence);
    }

    printf("\n--- SHORT STORY MODE ---\n\n");
    // Doan nay se in cac cau lien tiep de tao thanh mot cau chuyen
    for (i = 0; i < 5; i++) {
        // (Tuong tu logic tren nhung in lien nhau)
        char storySent[100] = "";
        strcat(storySent, article[rand() % 5]);
        strcat(storySent, " ");
        strcat(storySent, noun[rand() % 5]);
        strcat(storySent, " ");
        strcat(storySent, verb[rand() % 5]);
        strcat(storySent, " ");
        strcat(storySent, preposition[rand() % 5]);
        strcat(storySent, " ");
        strcat(storySent, article[rand() % 5]);
        strcat(storySent, " ");
        strcat(storySent, noun[rand() % 5]);
        storySent[0] = toupper(storySent[0]);
        strcat(storySent, ". ");
        printf("%s", storySent);
    }
    printf("\n");

    return 0;
}

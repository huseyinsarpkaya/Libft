#include <stdio.h>
#include <stdlib.h>

int count_words(const char *s, char delimiter) {
    int count = 0;//kelime sayısını tutar
    int in_word = 0; //kelimenin içinde eolup olmadığına bakar

    while (*s) {
        if (*s != delimiter && !in_word) {
            in_word = 1;
            count++;
        } else if (*s == delimiter) {
            in_word = 0;
        }
        s++;
    }
    return count;
}

char *get_next_word(const char **s, char delimiter) {
    const char *start = *s;

    while (**s && **s == delimiter) (*s)++; // Boşlukları atla

    start = *s; // Kelimenin başlangıcı

    while (**s && **s != delimiter) (*s)++;
    
    int length = *s - start; // Kelime uzunluğu
    char *word = malloc(length + 1);
    if (word) {
        int i = 0;
        while (i < length) {
            word[i] = start[i];
            i++;
        }
        word[length] = '\0'; // Sonlandırıcı
    }
    return word;
}

char **ft_split(const char *s, char delimiter) {
    if (!s) return NULL;

    int word_count = count_words(s, delimiter);
    char **result = malloc(sizeof(char *) * (word_count + 1));
    if (!result) return NULL;

    int index = 0;
    while (*s) {
        char *word = get_next_word(&s, delimiter);
        if (word) {
            result[index] = word;
            index++;
        }
    }
    result[index] = NULL; // Sonlandırıcı

    return result;
}

void free_split(char **result) {
    int i = 0;
    while (result[i]) {
        free(result[i]);
        i++;
    }
    free(result);
}

int main() {
    const char *text = "elma,armut,cilek";
    char **parts = ft_split(text, ',');

    int i = 0;
    while (parts[i]) {
        printf("%s\n", parts[i]);
        i++;
    }

    free_split(parts);
    return 0;
}




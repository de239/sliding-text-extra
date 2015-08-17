#pragma once

// struct tm;

void time_to_common_words(int hours, int minutes, char *words);
void fuzzy_time_to_words(int hours, int minutes, char* words);
int minute_to_formal_words(int minutes, bool hour24, char *first_word, char *second_word);
void hour_to_12h_word(int hours, char *word);
void hour_to_24h_word(int hours, char *words);
bool hour_to_24h_word_split(int hours, char *first_word, char *second_word);
int time_to_24h_word(const struct tm *t, char *word[4]);

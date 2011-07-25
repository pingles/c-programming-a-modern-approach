#ifndef LINE_H
#define LINE_H

void clear_line(void);

// Adds word to the current line. If this is not
// the first word on the line, adds one space before
// word.
void add_word(const char *word);

// Number of characters left on line
int space_remaining(void);

// Writes the current line with justification
void write_line(void);

// Writes the current line without justification.
// If the line is empty does nothing.
void flush_line(void);

#endif

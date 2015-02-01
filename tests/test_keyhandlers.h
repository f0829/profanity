void append_to_empty(void **state);
void append_wide_to_empty(void **state);
void append_to_single(void **state);
void append_wide_to_single_non_wide(void **state);
void append_non_wide_to_single_wide(void **state);
void append_wide_to_single_wide(void **state);
void append_non_wide_when_overrun(void **state);

void insert_non_wide_to_non_wide(void **state);
void insert_single_non_wide_when_pad_scrolled(void **state);
void insert_many_non_wide_when_pad_scrolled(void **state);
void insert_single_non_wide_last_column(void **state);
void insert_many_non_wide_last_column(void **state);

void ctrl_left_when_no_input(void **state);
void ctrl_left_when_at_start(void **state);
void ctrl_left_when_in_first_word(void **state);
void ctrl_left_when_in_first_space(void **state);
void ctrl_left_when_at_start_of_second_word(void **state);
void ctrl_left_when_in_second_word(void **state);
void ctrl_left_when_at_end_of_second_word(void **state);
void ctrl_left_when_in_second_space(void **state);
void ctrl_left_when_at_start_of_third_word(void **state);
void ctrl_left_when_in_third_word(void **state);
void ctrl_left_when_at_end_of_third_word(void **state);
void ctrl_left_when_in_third_space(void **state);
void ctrl_left_when_at_end(void **state);
void ctrl_left_when_in_only_whitespace(void **state);
void ctrl_left_when_start_whitespace_start_of_word(void **state);
void ctrl_left_when_start_whitespace_middle_of_word(void **state);
void ctrl_left_in_whitespace_between_words(void **state);
void ctrl_left_in_whitespace_between_words_start_of_word(void **state);
void ctrl_left_in_whitespace_between_words_middle_of_word(void **state);
void ctrl_left_when_word_overrun_to_left(void **state);

void ctrl_right_when_no_input(void **state);
void ctrl_right_when_at_end(void **state);
void ctrl_right_one_word_at_start(void **state);
void ctrl_right_one_word_in_middle(void **state);
void ctrl_right_one_word_at_end(void **state);
void ctrl_right_two_words_from_middle_first(void **state);
void ctrl_right_two_words_from_end_first(void **state);
void ctrl_right_two_words_from_space(void **state);
void ctrl_right_two_words_from_start_second(void **state);
void ctrl_right_one_word_leading_whitespace(void **state);
void ctrl_right_two_words_in_whitespace(void **state);
void ctrl_right_trailing_whitespace_from_middle(void **state);
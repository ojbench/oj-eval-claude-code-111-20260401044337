#pragma once //include guard

#undef strtok

char *strtok(char * __restrict str, const char * __restrict delim);


char *strtok(char * __restrict str, const char * __restrict delim) {
	// Static variable to remember position for subsequent calls
	static char *saved_pos = nullptr;

	// If str is not null, use it; otherwise continue from saved position
	if (str != nullptr) {
		saved_pos = str;
	}

	// If saved_pos is null, we're done
	if (saved_pos == nullptr) {
		return nullptr;
	}

	// Skip leading delimiters
	while (*saved_pos != '\0') {
		// Check if current character is a delimiter
		bool is_delim = false;
		for (const char *d = delim; *d != '\0'; ++d) {
			if (*saved_pos == *d) {
				is_delim = true;
				break;
			}
		}
		if (!is_delim) {
			break;
		}
		++saved_pos;
	}

	// If we've reached end of string, return nullptr
	if (*saved_pos == '\0') {
		saved_pos = nullptr;
		return nullptr;
	}

	// Mark the start of the token
	char *token_start = saved_pos;

	// Find the next delimiter or end of string
	while (*saved_pos != '\0') {
		// Check if current character is a delimiter
		bool is_delim = false;
		for (const char *d = delim; *d != '\0'; ++d) {
			if (*saved_pos == *d) {
				is_delim = true;
				break;
			}
		}
		if (is_delim) {
			// Replace delimiter with null terminator
			*saved_pos = '\0';
			++saved_pos;
			return token_start;
		}
		++saved_pos;
	}

	// Reached end of string
	saved_pos = nullptr;
	return token_start;
}


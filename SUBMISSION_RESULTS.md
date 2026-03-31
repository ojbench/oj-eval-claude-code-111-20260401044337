# Submission Results for Problem 111

## Final Score: 100/100 ✓

### Submission Details
- **Submission ID**: 767227
- **Status**: Accepted
- **Score**: 100.0/100.0
- **Language**: C++
- **Total Test Points**: 10/10 passed
- **Total Time**: 282ms
- **Total Memory**: 4.03 MB

### Test Points Summary
All 10 test points passed successfully:

| Test Point | Status | Score | Time (ms) | Memory (MB) |
|------------|--------|-------|-----------|-------------|
| 1 | Accepted | 1.0 | 29 | 3.95 |
| 2 | Accepted | 1.0 | 28 | 4.03 |
| 3 | Accepted | 1.0 | 28 | 3.92 |
| 4 | Accepted | 1.0 | 28 | 3.93 |
| 5 | Accepted | 1.0 | 29 | 3.95 |
| 6 | Accepted | 1.0 | 28 | 4.03 |
| 7 | Accepted | 1.0 | 28 | 3.83 |
| 8 | Accepted | 1.0 | 28 | 4.02 |
| 9 | Accepted | 1.0 | 28 | 3.94 |
| 10 | Accepted | 1.0 | 28 | 3.93 |

### Submission History
1. **Submission 767160**: Compile Error - Used git URL as code (API usage issue)
2. **Submission 767194**: Compile Error - Used git URL as code (API usage issue)
3. **Submission 767205**: Compile Error - Used git URL as code (API usage issue)
4. **Submission 767211**: Compile Error - Nested namespace issue (sjtu::sjtu::strtok)
5. **Submission 767227**: Accepted ✓ - Fixed namespace issue

### Solution Approach
Implemented the standard `strtok` function with the following features:
- Uses a static variable to maintain state between calls
- Skips leading delimiters
- Replaces delimiter characters with null terminators
- Returns tokens sequentially until the string is exhausted
- Handles multiple delimiters per call
- No use of standard library functions (as required)

### Key Issues Resolved
1. **API Client Issue**: Fixed `submit_code` method missing in acmoj_client.py
2. **Namespace Issue**: OJ includes src.hpp inside namespace sjtu, so src.hpp should not declare its own namespace to avoid nested namespaces

### Time and Space Complexity
- **Time Complexity**: O(n) where n is the total length of the string
- **Space Complexity**: O(1) - only uses a static pointer for state


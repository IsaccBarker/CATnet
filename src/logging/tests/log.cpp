#include "../include/log.hpp"

#include <string>

#include <gtest/gtest.h>

/// \brief An array of std::strings that are to be printed out during logging tests.
const std::string test_strings[] = {
    "1234567890 the quick brown fox jumps over the lazy dog",
    "!@#$%^&*() THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG",
    "懒狗的棕色狐狸跳得很快", // This may not appear in your editor, but it is chineese,
    "[]\\;',./`"
};

/// \brief A macro that is short hand for iterating over the test_stings array.
#define TEST_STRING_ITERATION for (auto test_string : test_strings)

/// \brief Test if log initialisation succeeds.
TEST(logging, logging_init_succeeds) {
    CatnetUtils::Log::Init();
}

/******************** HEAD LOGGING TESTS ********************/

/// \brief Test is HD_TRACE doesn't fail when presented with the test strings.
TEST(logging, trace_head_logging_succeeds) {
    TEST_STRING_ITERATION { HD_TRACE(test_string); }
}

/// \brief Test is HD_WARN doesn't fail when presented with the test strings.
TEST(logging, warn_head_logging_succeeds) {
    TEST_STRING_ITERATION { HD_WARN(test_string); }
}

/// \brief Test is HD_INFO doesn't fail when presented with the test strings.
TEST(logging, info_head_logging_succeeds) {
    TEST_STRING_ITERATION { HD_INFO(test_string); }
}

/// \brief Test is HD_ERROR doesn't fail when presented with the test strings.
TEST(logging, error_head_logging_succeeds) {
    TEST_STRING_ITERATION { HD_ERROR(test_string); }
}

/// \brief Test is HD_CRITICAL doesn't fail when presented with the test strings.
TEST(logging, critical_head_logging_succeeds) {
    TEST_STRING_ITERATION { HD_CRITICAL(test_string); }
}

/******************** WHISKER LOGGING TESTS ********************/

/// \brief Test is WK_TRACE doesn't fail when presented with the test strings.
TEST(logging, trace_whisker_logging_succeeds) {
    TEST_STRING_ITERATION { WK_TRACE(test_string); }
}

/// \brief Test is WK_WARN doesn't fail when presented with the test strings.
TEST(logging, warn_whisker_logging_succeeds) {
    TEST_STRING_ITERATION { WK_WARN(test_string); }
}

/// \brief Test is WK_INFO doesn't fail when presented with the test strings.
TEST(logging, info_whisker_logging_succeeds) {
    TEST_STRING_ITERATION { WK_INFO(test_string); }
}

/// \brief Test is WK_ERROR doesn't fail when presented with the test strings.
TEST(logging, error_whisker_logging_succeeds) {
    TEST_STRING_ITERATION { WK_ERROR(test_string); }
}

/// \brief Test is WK_CRITICAL doesn't fail when presented with the test strings.
TEST(logging, critical_whisker_logging_succeeds) {
    TEST_STRING_ITERATION { WK_CRITICAL(test_string); }
}

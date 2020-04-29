#include "histogram.h"
#include <cassert>
#include "svg.h"
void
test_positive() {
double min = 0;
double max = 0;
find_minmax({1, 2, 3}, min, max);
assert(min == 1);
assert(max == 3);
}
void
test_negative() {
double min = 0;
double max = 0;
find_minmax({-1, -2, -3}, min, max);
assert(min == -3);
assert(max == -1);
}
void
test_same() {
double min = 0;
double max = 0;
find_minmax({3, 3, 3}, min, max);
assert(min == 3);
assert(max == 3);
}
void
test_single() {
double min = 0;
double max = 0;
find_minmax({2}, min, max);
assert(min == 2);
assert(max == 2);
}
void
test_empty() {
double min = 0;
double max = 0;
find_minmax({}, min, max);

}
void test_text_reflection()
{
    size_t text_reflection;
    show_histogram_svg({2,2,2});
    assert(text_reflection==0);
}
void test_histogram_reflection()
{
    size_t histogram_reflection;
    show_histogram_svg({2,2,2});
    assert(histogram_reflection==0);
}

int
main() {
test_positive();
test_negative();
test_same();
test_single();
test_empty();
test_histogram_reflection();
test_text_reflection();
}

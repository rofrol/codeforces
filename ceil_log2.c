#include <stdio.h>
/*
http://stackoverflow.com/questions/589575/size-of-int-long-etc

http://stackoverflow.com/questions/3272424/compute-fast-log-base-2-ceiling
http://stackoverflow.com/questions/466204/rounding-off-to-nearest-power-of-2
http://graphics.stanford.edu/~seander/bithacks.html#IntegerLogObvious
http://stackoverflow.com/questions/466204/rounding-off-to-nearest-power-of-2

Given I have a value v which is known to be a power of 2, how can I find the value n = log2(v) value?"
http://www.flounder.com/log2.htm

Hacker's Delight (2nd Edition): Henry S. Warren

http://stackoverflow.com/questions/364985/algorithm-for-finding-the-smallest-power-of-two-thats-greater-or-equal-to-a-giv

http://www.exploringbinary.com/ten-ways-to-check-if-an-integer-is-a-power-of-two-in-c/
http://stackoverflow.com/questions/264080/how-do-i-calculate-the-closest-power-of-2-or-10-a-number-is
http://en.wikipedia.org/wiki/Power_of_two#Fast_algorithm_to_check_if_a_positive_number_is_a_power_of_two

http://stackoverflow.com/questions/600293/how-to-check-if-a-number-is-a-power-of-2
(x != 0) && ((x & (x - 1)) == 0)
*/

int ceil_log2(unsigned long long x)
{
  static const unsigned long long t[6] = {
    0xFFFFFFFF00000000ull,
    0x00000000FFFF0000ull,
    0x000000000000FF00ull,
    0x00000000000000F0ull,
    0x000000000000000Cull,
    0x0000000000000002ull
  };

  int y = (((x & (x - 1)) == 0) ? 0 : 1);
  int j = 32;
  int i;

  for (i = 0; i < 6; i++) {
    int k = (((x & t[i]) == 0) ? 0 : j);
    y += k;
    x >>= k;
    j >>= 1;
  }

  return y;
}

int main() {
	printf("%d", ceil_log2(8));
	return 0;
}

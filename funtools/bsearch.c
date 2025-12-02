/* http://www.tbray.org/ongoing/When/200x/2003/03/22/Binary */

/* returns first target if more than one have same value */
static public int search(int [] array, int target)
{
  int high = array.length, low = -1, probe;
  while (high - low > 1)
    {
      probe = (high + low) / 2;
      if (array[probe] < target)
	low = probe;
      else
	high = probe;
    }
  if (high == array.length || array[high] != target)
    return -1;
  else
    return high;
}

/* returns last target if more than one have same value */
static public int search2(int [] array, int target)
{
  int high = array.length, low = -1, probe;
  while (high - low > 1)
    {
      probe = (high + low) / 2;
      if (array[probe] > target)
	high = probe;
      else
	low = probe;
    }
  if (low == -1 || array[low] != target)
    return -1;
  else
    return low;
}

static public int [] range(int [] array, int floor, int ceiling)
{
  int [] answer = new int[2];
  int high, low, probe;

  // work on floor
  high = array.length; low = -1;
  while (high - low > 1)
    {
      probe = (high + low) / 2;
      if (array[probe] < floor)
	low = probe;
      else
	high = probe;
    }
  answer[0] = low;

  // work on ceiling
  high = array.length; low = -1;
  while (high - low > 1)
    {
      probe = (high + low) / 2;
      if (array[probe] > ceiling)
	high = probe;
      else
	low = probe;
    }
  answer[1] = high;
  return answer;
}

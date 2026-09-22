#include <rigtorp/SPSCQueue.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  using namespace rigtorp;

  SPSCQueue<int> q (2);

  assert (q.front () == nullptr);

  assert (q.try_push (1));
  assert (q.try_push (2));
  assert (!q.try_push (3)); // Full.

  assert (*q.front () == 1);
  q.pop ();

  assert (*q.front () == 2);
  q.pop ();

  assert (q.front () == nullptr);

  q.emplace (3);
  assert (*q.front () == 3);
  q.pop ();
}

[SPOJ Link]()

Basic problem is to find the number of occurences of (T | D | L | F ). Let in be n.
Then, the answer is 2<sup>`n`</sup>.

Challenge is to write a code with shortest number of bytes.

## AWK solution

Referred [from](https://github.com/mabeyj/problemsets/tree/master/spoj/KAMIL)

The basic syntax of an `awk` script consists of patterns and actions.  If a
pattern is matched, the action associated to the pattern is called.  By
default, `awk` splits input into records via newlines.  The script is run for
each record.  `$0` refers to the current record being processed.

`gsub(/[TDLF]/,0)` returns the number of occurrences of T, D, L, and F.  The
`0` is simply one of the shortest values we can use for the second argument.
The side effect of this is that it will replace the matching letters in `$0`
with `0`, but we don't care for this problem.  We just want the return value.

Thus, `2^gsub(/[TDLF]/,0)` is equal to 2<sup>`n`</sup>.  We assign this to
`$0`, replacing the record's value.

The default action for a pattern is to simply output `$0`.  Thus, we don't specify an action.  The whole
solution is simply a pattern.

We assign `$0` in the pattern.  Assignments evaluate to the value assigned, so
as long as the pattern is always true, `$0` will be outputted.  And it is
always true.  The minimum value we set for `$0` is 1, because 2<sup>0</sup>
(i.e., no occurrences) is 1.

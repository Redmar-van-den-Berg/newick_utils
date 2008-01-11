/* functions that return tree structures independently of the parser. */

/* These are useful in two cases: i) when testing something "downstream" of the
 * parser, that assumes a correct tree is available; ii) when it is unwieldy to
 * use the parser, e.g. in automatic tests (since the parser can only read
 * FILE*s) */

struct rooted_tree;

/* ((A,B),C); */
struct rooted_tree tree_1();

/* ((A,B)f,(C,(D,E)g)h)i; */
struct rooted_tree tree_2();

/* ((A:1,B:1.0)f:2.0,(C:1,(D:1,E:1)g:2)h:3)i; */
struct rooted_tree tree_3();

/* ((A:1,B:1.0)f:2.0,(C:1,(C:1,C:1)g:2)h:3)i;  - one clade made of three 'C's */
struct rooted_tree tree_4();

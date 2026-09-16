/*
 * gen_simplify_flags.h
 *
 * Setters for the two protected Mapping flags that select C's restricted
 * simplify mode. Each takes a public Object ID, as handed out by the public
 * constructors.
 */
#ifndef GEN_SIMPLIFY_FLAGS_H
#define GEN_SIMPLIFY_FLAGS_H

void gen_set_allow_simplify(void *id);
void gen_set_restricted_simplify(void *id);

#endif

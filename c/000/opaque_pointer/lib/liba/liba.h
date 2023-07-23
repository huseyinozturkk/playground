#ifndef __LIB_A_H__
#define __LIB_A_H__

struct obj;

/*
 * The compiler considers struct obj an incomplete type. Incomplete types
 * can be used in declarations.
 */

int obj_size(void);

void obj_setid(struct obj *, int);

int obj_getid(struct obj *);



#endif __LIB_A_H__
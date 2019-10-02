#include <stdio.h>
#include "datadef.h"

extern void save_and_exit (int);
extern void write_rolo (FILE *, FILE *);
extern void cathelpfile (char *, char *, int);
extern void clearinit ();
extern void clear_the_screen ();
extern int read_rolodex (int);
extern int rlength (Ptr_Rolo_List);
extern void rolo_reorder ();
extern void print_short ();
extern void print_people ();
extern void interactive_rolo ();
extern void user_eof ();
extern void roloexit (int);
extern void save_to_disk ();
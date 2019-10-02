extern int rolo_menu_yes_no (  char *, int , int , char *, char *);
extern int rolo_menu_data_help_or_abort (char *prompt, char *helpfile, char *subject, char **ptr_response);
int rolo_menu_number_help_or_abort (char *prompt, int low, int high, int *ptr_ival);
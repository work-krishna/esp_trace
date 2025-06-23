// #include "string.h"
// #include "stdio.h"

// #include "trace.h"

// typedef struct s_trace_level_set
// {
//     e_trace_level_t level;
//     char *file_name;
//     struct s_trace_level_set *next;
// } s_trace_level_set_t;

// static s_trace_level_set_t *head = NULL;

// static s_trace_level_set_t *__create_new(e_trace_level_t level, char *file_name);

// void trace_set_level(e_trace_level_t level, char *file_name)
// {
//     if (head != NULL)
//     {
//         s_trace_level_set_t *node = head;

//         if (node->next)
//         {
//             while (node->next)
//             {

//                 node = node->next;
//             }
//         }
//         else
//         {
//         }
//     }
//     else
//     {
//         head = __create_new(level, file_name);
//     }
// }

// void trace_clear_level(char *file_name) {}

// static s_trace_level_set_t *__create_new(e_trace_level_t level, char *file_name)
// {
//     s_trace_level_set_t *new = malloc(sizeof(s_trace_level_set_t));
//     if (new)
//     {
//         memset(new, 0, sizeof(s_trace_level_set_t));
//         uint32_t len = strlen(file_name) + 1;

//         new->level = level;
//         new->file_name = malloc(len);
//         if (new->file_name)
//         {
//             snprintf(new->file_name, len, "%s", file_name);
//         }
//     }

//     return new;
// }

#ifndef INPUT_STR_H
#define INPUT_STR_H

#ifdef __cplusplus
extern "C" {
#endif

int input_str( char * string, int maxroom );
#define getchar mock_getchar
char mock_getchar();

#ifdef __cplusplus
}
#endif

#endif


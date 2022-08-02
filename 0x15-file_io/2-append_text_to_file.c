#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: file to be appende to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fs, i, s = 0;

if (!filename)
return (-1);

fs = open(filename, O_WRONLY | O_APPEND);
if (fs < 0)
return (-1);

if (text_content)
{
while (text_content[s])
s++;
i = write(fs, text_content, s);
if (i != s)
return (-1);
}

close(fs);

return (1);
}

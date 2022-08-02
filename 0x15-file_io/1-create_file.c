#include "main.h"

/**
 * create_file - creates a file and fills it with random  text
 * @filename: name of the file to be created
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fs, i, s = 0;

if (!filename)
return (-1);

fs = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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

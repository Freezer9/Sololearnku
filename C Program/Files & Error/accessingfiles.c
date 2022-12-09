/* 
fopen(filename, mode) Returns a FILE pointer to file filename which is opened using mode. If a file cannot be opened, NULL is returned.
Mode options are:
r open for reading (file must exist)
w open for writing (file need not exist)
- a open for append (file need not exist)
- r+ open for reading and writing from beginning
- w+ open for reading and writing, overwriting file
- a+ open for reading and writing, appending to file

fclose(fp) Closes file opened with FILE fp, returning 0 if close was successful. EOF (end of file) is returned if there is an error in closing.
*/

#include<stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("myfile.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.");
        return -1;
    }
    fclose(fptr);
    return 0;
}
#include "include/io.h"
#include <stdlib.h>
#include <stdio.h>


char* get_file_contents(const char* filepath)
{
    char* buffer = 0;
    long length;

    FILE* f = fopen(filepath, "rb");

    if (f)
    {
        fseek(f, 0, SEEK_END);
        length = ftell(f);
        fseek(f, 0, SEEK_SET);

        buffer = calloc(length, length);

        if (buffer)
            fread(buffer, 1, length, f);

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    fclose(f);
    return buffer;
  }
        fclose(f);
<<<<<<< HEAD
        
        
        
        
        buffer;
=======
        fclose(f);
        return buffer;
>>>>>>> parent of e7b217b (make your code work)
=======
        fclose(f);
        return buffer;
>>>>>>> parent of e7b217b (make your code work)
=======
        return buffer;
>>>>>>> parent of be1b0de (changed unix build name)
    }
=======
    fclose(f);
    return buffer;
  }
>>>>>>> parent of 7644d56 (.)
=======
    fclose(f);
    return buffer;
  }
>>>>>>> parent of df2c824 (Merge pull request #3 from TechPenguineer/fix-execution-errors)

    printf("Error reading file %s\n", filepath);
    exit(2);
}

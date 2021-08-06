#include "include/io.h"
#include <stdio.h>
#include <stdlib.h>

char* get_file_contents(const char* filepath)
{
  char* buffer = 0;
  long length;

  FILE* f = fopen(filepath, "rb");

  if (f) {
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> parent of edd9782 (.)
=======
>>>>>>> parent of 651b737 (remove workflows)
    fclose(f);
    return buffer;
  }
=======
        fclose(f);
<<<<<<< HEAD
        
        
        
        
        buffer;
<<<<<<< HEAD
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
=======
>>>>>>> parent of 651b737 (remove workflows)
    }
<<<<<<< HEAD
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
=======
>>>>>>> main
>>>>>>> parent of edd9782 (.)

  printf("Error reading file %s\n", filepath);
  exit(2);
}

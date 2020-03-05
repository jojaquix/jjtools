#include <cstdio>
#include <time.h>
#include <ctype.h>
#include <windows.h>



void show_usage();

int main(int argc, char* argv[]) 
{
    char option;
    const char* file_name;

    if(argc < 2) 
    {
        printf ("too few arguments, file name is necessary!");
        show_usage();
        return 1;
    }

    FILE* fp = fopen(argv[1], "wb");
    if (fp) 
    {
        printf("File opened...\n");
    }
    else 
    {
        printf("Error openning file bye...\n");
        return 2;
    }

    
    for(;;)
    {
        time_t now;
        time(&now);
        option = getchar();
        if(toupper(option) == 'Q') 
        { 
            break; 
        }
        
        fwrite(&now, sizeof(time_t), 1, fp);
        fflush(fp);
    }

    exit1:

    printf("Finishing...\n");
    if (fp) { 
        fclose(fp);
        printf("File closed...\n");
    }
    
    return 0;
}


void show_usage() {
    const char* usage =""
    "\nUsage:\n\nthe name of the file to create.\n"
    "when running, each enter write in the file\n"
    "press q to quit\n\n";

    printf(usage);

}



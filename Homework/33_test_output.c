#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void execute_and_get_output(const char *command, const char *input, char *output, size_t output_size) {
    FILE *fp;
    fp = popen(command, "w+");
    if (fp == NULL) {
        perror("popen failed");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "%s", input);
    fflush(fp); // 刷新输出缓冲区
    fseek(fp, 0, SEEK_SET); // 重置文件指针

    if (fgets(output, output_size, fp) == NULL) {
        perror("fgets failed");
        pclose(fp);
        exit(EXIT_FAILURE);
    }

    pclose(fp);
}

int main() {
    const char *input = "abbbcccde\nbcd";
    char output_a[1024];
    char output_b[1024];

    execute_and_get_output("./a.out", input, output_a, sizeof(output_a));
    execute_and_get_output("./b.out", input, output_b, sizeof(output_b));

    printf("Output from a.out: %s\n", output_a);
    printf("Output from b.out: %s\n", output_b);

    if (strcmp(output_a, output_b) == 0) {
        printf("The outputs are the same.\n");
    } else {
        printf("The outputs are different.\n");
    }

    return 0;
}

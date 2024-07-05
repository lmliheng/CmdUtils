// 新增curl功能，作者覆写curl
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

// 回调函数，负责将接收到的数据写入文件
static size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream)
{
    size_t written = fwrite(ptr, size, nmemb, stream);
    return written;
}

int main(int argc, char *argv[])
{
    CURL *curl;
    CURLcode res;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s URL\n", argv[0]);
        return 1;
    }

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl)
    {
        // 设置URL
        curl_easy_setopt(curl, CURLOPT_URL, argv[1]);

        // 设置写回调函数，将数据写入文件
        FILE *fp = fopen("output", "wb");

        if (!fp)
        {
            perror("Failed to open file");
            return 1;
            
        }
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

        // 执行请求
        res = curl_easy_perform(curl);

        // 检查错误
        if (res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        // 清理
        fclose(fp);
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 0;
}
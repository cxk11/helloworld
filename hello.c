#include <stdio.h>
#include <curl/curl.h>
int main(void)
{
CURL *curl;
CURLcode res;
curl=curl_ easy_ init();
if(curl)
{
(curl_ easy_ setopt( curl, CURLOPT _URL, "http://myip. ipip.net/");
res=curl_ easy_ perform(curl);
if(res!=CURLE_ _0K)fprintf(stderr, "curl_ easy_ _perform() failed:%sln",curl_ easy_ strerror(res));
curl_ easy_ cleanup(curl);
}
return 0;
}

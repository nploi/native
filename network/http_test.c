#include "../builtin.h"
#include "../unit_test.h"

#define HTTPS "https://"
#define HTTP "http://"
#define LOCALHOST "localhost"

TEST(Builtin_Network, HttpQuery) {
	char *url = (char*) "http://localhost?key1=value1&key2=value2";
	char *query = http_query(url);
	//ASSERT_EQUAL(query, "key1=value1&key2=value2");
}

TEST(Builtin_Network, HttpSchema) {
	char *schemaHttp = http_schema("http://google.com");
	ASSERT_STR(schemaHttp, HTTP);

	char *schemaHtpps = http_schema("https://facebook.com");
	ASSERT_STR(schemaHtpps, HTTPS);

	char *schemaNull = http_schema("");
	ASSERT_NOT_EQUAL(schemaNull, HTTPS);
}

TEST(Builtin_Network, Http)
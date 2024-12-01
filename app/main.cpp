#include <iostream>
#include "httplib.h"

int main() {
    httplib::Server svr;

    svr.Get("/", [](const httplib::Request&, httplib::Response& res) {
        res.set_content("Hello from C++ web server!", "text/plain");
        });

    std::cout << "Server is running on http://localhost:8080" << std::endl;
    svr.listen("0.0.0.0", 8080);

    return 0;
}

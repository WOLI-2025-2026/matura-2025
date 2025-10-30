#include <gtest/gtest.h>
#include <filesystem>
#include <fstream>
#include <regex>
#include <sstream>

namespace fs = std::filesystem;

static std::string read_all(const fs::path& p) {
    std::ifstream ifs(p);
    std::ostringstream oss; oss << ifs.rdbuf();
    return oss.str();
}

TEST(Zadanie2_1, FunctionExists) {
    fs::path project_root = fs::path(__FILE__).parent_path().parent_path(); // ../
    fs::path src = project_root / "src" / "main.cpp";
    ASSERT_TRUE(fs::exists(src)) << "Nie znaleziono src/main.cpp";
    std::string code = read_all(src);

    std::regex fn(R"(\bZadanie2_1\s*\()");
    EXPECT_TRUE(std::regex_search(code, fn))
        << "Brak wymaganej funkcji: Zadanie2_1()";
}

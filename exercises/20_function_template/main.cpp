﻿#include "../exercise.h"

// READ: 函数模板 <https://zh.cppreference.com/w/cpp/language/function_template>
// TODO: 将这个函数模板化
template<typename T>
int plus(T a, T b) {
    return a + b;
}

int main(int argc, char **argv) {
    const float epsilon_f = 1e-6f;
    ASSERT(plus(1, 2) == 3, "Plus two int");
    ASSERT(plus(1u, 2u) == 3u, "Plus two unsigned int");

    // THINK: 浮点数何时可以判断 ==？何时必须判断差值？
    ASSERT(std::fabs(plus(1.25f, 2.5f) - 3.75f < epsilon_f), "Plus two float");
    ASSERT(std::fabs(plus(1.25, 2.5) - 3.75 < epsilon_f), "Plus two double");
    // TODO: 修改判断条件使测试通过
    ASSERT(std::fabs(plus(0.1, 0.2) - 0.3 < epsilon_f), "How to make this pass?");

    return 0;
}

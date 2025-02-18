cc_binary(
    name = "bazel_cpp_app_template",
    srcs = [
        "app.cpp",
        "app.h",
        "main.cpp",
    ],
    visibility = [
        "//src:__pkg__",
        "//tests:__pkg__",
    ],
    deps = [
        "//src/lib:utils",
        "//src/modules/sample_module",
    ],
)

cc_library(
    name = "app",
    srcs = [
        "app.cpp",
        "app.h",
    ],
    visibility = [
        "//src:__pkg__",
        "//tests:__pkg__",
    ],
    deps = [
        "//src/lib:utils",
        "//src/modules/sample_module",
    ],
)

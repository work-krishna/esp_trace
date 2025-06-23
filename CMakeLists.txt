file(GLOB_RECURSE config_src "esp_trace.c")


idf_component_register(SRCS ${config_src}
    INCLUDE_DIRS "."
)
idf_component_register(SRCS "blink_example_main.c"
                       INCLUDE_DIRS "."
                       REQUIRES esp_trace
                       PRIV_REQUIRES driver
                       )

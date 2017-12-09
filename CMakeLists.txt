cmake_minimum_required(VERSION 3.8)
project(ft_printf)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ft_printf/apply_flags.c
        ft_printf/ft_conncat.c
        ft_printf/ft_format_c.c
        ft_printf/ft_format_d.c
        ft_printf/ft_format_o.c
        ft_printf/ft_format_p.c
        ft_printf/ft_format_s.c
        ft_printf/ft_format_u.c
        ft_printf/ft_format_x.c
        ft_printf/ft_printf.c
        ft_printf/ft_printf.h
        ft_printf/get_func_dict.c
        ft_printf/get_modificator.c
        ft_printf/get_next_format.c
        ft_printf/get_right_format.c
        ft_printf/modify_flags.c
        ft_printf/parce_modifiers.c
        ft_printf/apply_format.c
        main.c ft_printf/proccess_format.c)

include_directories(libftprintf)

add_subdirectory(libftprintf)

include_directories(libftprintf)

include_directories(ft_printf)

add_executable(ft_printf ${SOURCE_FILES})

target_link_libraries(ft_printf libft)
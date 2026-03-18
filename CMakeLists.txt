project(cprob LANGUAGES C)
cmake_minimum_required(VERSION 3.10)

enable_testing()

function(add_component name)
    add_library(cprob_${name} ${name})
    target_link_libraries(cprob_${name} ${ARGN})
    add_executable(test_cprob_${name} test.c test_${name}.c)
    target_link_libraries(test_cprob_${name} cprob_${name})
    add_test(NAME test_cprob_${name} COMMAND test_cprob_${name})
endfunction()

add_component(base)
add_component(bernoulli)
add_component(binomial cprob_base m)
add_component(geometric m)
add_component(pascal m cprob_base)
add_component(poisson m cprob_base)


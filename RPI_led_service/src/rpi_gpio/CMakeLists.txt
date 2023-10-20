cmake_minimum_required(VERSION 3.8)
project(rpi_gpio)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rpi_gpio_msgs REQUIRED)


set(SERVER_SRC src/server.cpp)
set(CLIENT_SRC src/client.cpp)

add_executable(gpio_server ${SERVER_SRC})
add_executable(gpio_client ${CLIENT_SRC})

target_link_libraries(gpio_server gpiodcxx)
target_link_libraries(gpio_client gpiodcxx)

ament_target_dependencies(gpio_server rclcpp rpi_gpio_msgs)
ament_target_dependencies(gpio_client rclcpp rpi_gpio_msgs)

install(TARGETS
  gpio_server
  gpio_client
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

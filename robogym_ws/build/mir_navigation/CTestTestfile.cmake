# CMake generated Testfile for 
# Source directory: /home/lberthault/robogym_ws/src/mir_robot/mir_navigation
# Build directory: /home/lberthault/robogym_ws/build/mir_navigation
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_mir_navigation_roslaunch-check_launch "/home/lberthault/robogym_ws/build/mir_navigation/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/lberthault/robogym_ws/build/mir_navigation/test_results/mir_navigation/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/lberthault/robogym_ws/build/mir_navigation/test_results/mir_navigation" "/opt/ros/noetic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/lberthault/robogym_ws/build/mir_navigation/test_results/mir_navigation/roslaunch-check_launch.xml\" \"/home/lberthault/robogym_ws/src/mir_robot/mir_navigation/launch\" ")
set_tests_properties(_ctest_mir_navigation_roslaunch-check_launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslaunch/cmake/roslaunch-extras.cmake;66;catkin_run_tests_target;/home/lberthault/robogym_ws/src/mir_robot/mir_navigation/CMakeLists.txt;67;roslaunch_add_file_check;/home/lberthault/robogym_ws/src/mir_robot/mir_navigation/CMakeLists.txt;0;")
subdirs("gtest")

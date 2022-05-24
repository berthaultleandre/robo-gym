execute_process(COMMAND "/home/lberthault/robogym_ws/build/ur_robot_server/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/lberthault/robogym_ws/build/ur_robot_server/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
